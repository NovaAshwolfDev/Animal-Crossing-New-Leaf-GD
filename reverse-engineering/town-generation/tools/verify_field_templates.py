"""Decode and compare fixed placement templates with the original ARM readers."""
import hashlib
import json
import struct
import sys
from pathlib import Path
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC
root=Path(__file__).resolve().parents[1];repo=root.parents[1]
sys.path.insert(0,str(root/'reconstruction'))
from field_templates import read_records
code=Path(sys.argv[1]).read_bytes();sha=hashlib.sha256(code).hexdigest()
if sha!='1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04':raise SystemExit('Executable hash mismatch')
vm=Uc(UC_ARCH_ARM,UC_MODE_ARM);vm.mem_map(0x100000,0xa70000);vm.mem_write(0x100000,code)
vm.mem_map(0x2000000,0x100000);vm.mem_map(0x3000000,0x10000);vm.mem_map(0xf000000,4096)

def call(addr,*args):
    for reg,value in zip([UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3],args):vm.reg_write(reg,value)
    vm.reg_write(UC_ARM_REG_SP,0x300f000);vm.reg_write(UC_ARM_REG_LR,0xf000000);vm.emu_start(addr,0xf000000,count=100000)
    assert vm.reg_read(UC_ARM_REG_PC)==0xf000000
    return vm.reg_read(UC_ARM_REG_R0)

export={};cases=0
for source,size,resource in [('assets/native/romfs/FgData/field/field.bin',6,0x2020000),('assets/native/romfs/StrcData/strc.bin',4,0xb2e260)]:
    data=(repo/source).read_bytes();n=struct.unpack_from('<H',data)[0]
    vm.mem_write(0x2030000,data);vm.mem_write(resource+0xd8,struct.pack('<I',0x2030000))
    records=[]
    for acre in range(n):
        count,payload=read_records(data,size,acre,0x1000)
        decoded=[{'id':struct.unpack_from('<H',payload,i)[0],
                  **({'flags':struct.unpack_from('<H',payload,i+2)[0]} if size==6 else {}),
                  'x':payload[i+size-2],'y':payload[i+size-1]}
                 for i in range(0,len(payload),size)]
        records.append(decoded)
        for capacity in sorted({0,len(payload),max(0,len(payload)-1),0x1000}):
            expected_count,expected=read_records(data,size,acre,capacity)
            vm.mem_write(0x2000000,b'\xcc'*0x1000)
            actual=call(0x230a40,resource,0x2000000,capacity,acre) if size==6 else call(0x1e9800,0x2000000,capacity,acre)
            assert actual==expected_count,(source,acre,capacity)
            assert bytes(vm.mem_read(0x2000000,len(expected)))==expected
            assert bytes(vm.mem_read(0x2000000+len(expected),0x1000-len(expected)))==b'\xcc'*(0x1000-len(expected))
            cases+=1
    export[source]={'sha256':hashlib.sha256(data).hexdigest(),'record_size':size,'records_by_acre_id':records}
(root/'data/fixed-placement-records.json').write_text(json.dumps(export,indent=2)+'\n')
report={'executable_sha256':sha,'cases':cases,'acre_tables':{'field':356,'structures':261},
        'records':{'field':2079,'structures':69},'result':'counts, payload bytes, capacity checks, and untouched output bytes matched original ARM execution',
        'scope':'fixed per-acre records; randomized placement and collision checks remain separate'}
(root/'evidence/field-template-verification.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
