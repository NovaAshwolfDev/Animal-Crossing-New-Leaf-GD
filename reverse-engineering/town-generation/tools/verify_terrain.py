"""Differential test of the entire 0x593474 terrain phase, without logic hooks."""
import hashlib
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
from terrain import generate_terrain
from acres import TABLES
code=Path(sys.argv[1]).read_bytes()
if hashlib.sha256(code).hexdigest()!=TABLES['executable_sha256']:
    raise SystemExit('Executable hash mismatch')
vm=Uc(UC_ARCH_ARM,UC_MODE_ARM)
vm.mem_map(0x100000,0xa70000);vm.mem_write(0x100000,code)
vm.mem_map(0x2000000,0x100000);vm.mem_map(0x3000000,0x10000);vm.mem_map(0xf000000,4096)
vm.mem_write(0xa000a4,struct.pack('<I',1))
vm.mem_write(0xb6e340,struct.pack('<4I',0,0,6,5))

def call(addr,*args):
    for reg,val in zip([UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3],args):vm.reg_write(reg,val)
    vm.reg_write(UC_ARM_REG_SP,0x300f000);vm.reg_write(UC_ARM_REG_LR,0xf000000)
    vm.emu_start(addr,0xf000000,count=3000000)
    assert vm.reg_read(UC_ARM_REG_PC)==0xf000000,'Instruction budget exceeded'
    return vm.reg_read(UC_ARM_REG_R0)

r=random.Random(0xac11)
seeds=list(range(128))+[r.getrandbits(32) for _ in range(128)]
while len({GameRng(seed).bounded(56) for seed in seeds}) < 56:
    seeds.append(r.getrandbits(32))
cases=0; coverage={'left':set(),'right':set()};samples=[]
for side_id,side in enumerate(['left','right']):
    records=TABLES['templates'][side]['records']
    raw=b''.join(struct.pack('<20H',*record) for record in records)
    vm.mem_write(0x2030000,raw)
    vm.mem_write(0x2020000+0xd8,struct.pack('<I',0x2030000))
    vm.mem_write(0x2020000+0xf8,struct.pack('<I',len(records)))
    for seed in seeds:
        rng=GameRng(seed)
        call(0x5be4f0,0x2010000,seed)
        vm.mem_write(0x2000000,b'\0'*88)
        call(0x593474,0x2000000,0x2010000,side_id,0x2020000)
        expected=generate_terrain(side,rng)
        actual=list(struct.unpack('<42H',vm.mem_read(0x2000004,84)))
        state=list(struct.unpack('<4I',vm.mem_read(0x2010000,16)))
        assert actual==expected['acres'],(side,seed,actual,expected)
        assert state==rng.state,('RNG draw mismatch',side,seed,state,rng.state)
        assert vm.mem_read(0x2000000,1)[0]==side_id
        coverage[side].add(expected['template_index']);cases+=1
        if seed in [0,1,2,123]:samples.append({'side':side,'seed_at_phase_entry':seed,**expected,'rng_state_after':state})
report={'executable_sha256':TABLES['executable_sha256'],'function':'0x00593474',
        'cases':cases,'templates_observed':{side:len(v) for side,v in coverage.items()},
        'compared':['all 42 final acre IDs','all four RNG state words','ocean side byte'],
        'result':'all matched original ARM execution',
        'runtime_initialization':'static rectangle [0,0,6,5] initialized; no generation calls hooked',
        'scope':'terrain phase only; no buildings, trees, rocks, villagers, or candidate rejection'}
(root/'evidence/terrain-verification.json').write_text(json.dumps(report,indent=2)+'\n')
(root/'evidence/terrain-samples.json').write_text(json.dumps(samples,indent=2)+'\n')
print(json.dumps(report,indent=2))
