"""Compare template expansion and variant selection with original ARM execution."""
import hashlib
import importlib.util
import json
import random
import struct
import sys
from pathlib import Path
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_PC, UC_ARM_REG_SP, UC_ARM_REG_LR
root=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(root/'reconstruction'))
from rng import GameRng
from acres import TABLES, template_categories, choose_acre_variant
code=Path(sys.argv[1]).read_bytes()
if hashlib.sha256(code).hexdigest()!=TABLES['executable_sha256']:
    raise SystemExit('Executable hash mismatch')
vm=Uc(UC_ARCH_ARM,UC_MODE_ARM)
vm.mem_map(0x100000,0xa70000);vm.mem_write(0x100000,code)
vm.mem_map(0x2000000,0x100000);vm.mem_map(0x3000000,0x10000);vm.mem_map(0xf000000,4096)
# Reproduce the initialized static rectangle [0,0] through [6,5]. This avoids
# entering the platform's static-initialization synchronization, not map logic.
vm.mem_write(0xa000a4,struct.pack('<I',1))
vm.mem_write(0xb6e340,struct.pack('<4I',0,0,6,5))

def call(addr,*args):
    for reg,val in zip([UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3],args):vm.reg_write(reg,val)
    vm.reg_write(UC_ARM_REG_SP,0x300f000);vm.reg_write(UC_ARM_REG_LR,0xf000000)
    vm.emu_start(addr,0xf000000,count=100000)
    assert vm.reg_read(UC_ARM_REG_PC)==0xf000000,'Instruction budget exceeded'
    return vm.reg_read(UC_ARM_REG_R0)

expansions=0
for side,base in [('left',0x932134),('right',0x93215e)]:
    for index,record in enumerate(TABLES['templates'][side]['records']):
        vm.mem_write(0x2020000,struct.pack('<20H',*record))
        vm.mem_write(0x2000000,b'\xcc'*42)
        call(0x231f90,0x2000000,0x2020000,base)
        assert list(vm.mem_read(0x2000000,42))==template_categories(side,index),(side,index)
        expansions+=1
selections=0
for category in range(256):
    for seed in [0,1,0x12345678,0xffffffff]:
        rng=GameRng(seed)
        call(0x5be4f0,0x2010000,seed)
        actual=call(0x231f0c,category,0x2010000)
        expected=choose_acre_variant(category,rng)
        assert actual==expected,(category,seed,actual,expected)
        assert struct.unpack('<4I',vm.mem_read(0x2010000,16))==tuple(rng.state)
        selections+=1
report={'executable_sha256':TABLES['executable_sha256'],'template_expansion_cases':expansions,
        'variant_selection_cases':selections,'result':'all matched original ARM execution',
        'runtime_initialization':'static rectangle initialized to [0,0,6,5]; platform guard marked initialized'}
(root/'evidence/acre-verification.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
