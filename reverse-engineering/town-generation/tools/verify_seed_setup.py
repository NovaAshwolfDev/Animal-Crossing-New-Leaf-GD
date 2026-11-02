"""Execute original global RNG and candidate seed preparation under ARM/VFP."""
import hashlib
import json
import random
import struct
import sys
from pathlib import Path
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC, UC_ARM_REG_C1_C0_2, UC_ARM_REG_FPEXC, UC_ARM_REG_FPSCR, UC_ARM_REG_S0
root=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(root/'reconstruction'))
from rng import GlobalFloatRng, prepare_candidate_seeds
code=Path(sys.argv[1]).read_bytes()
sha=hashlib.sha256(code).hexdigest()
if sha!='1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04':
    raise SystemExit('Executable hash mismatch')
vm=Uc(UC_ARCH_ARM,UC_MODE_ARM);vm.mem_map(0x100000,0xa70000);vm.mem_write(0x100000,code)
vm.mem_map(0x2000000,4096);vm.mem_map(0x3000000,0x10000);vm.mem_map(0xf000000,4096)
vm.reg_write(UC_ARM_REG_C1_C0_2,0xf00000)
vm.reg_write(UC_ARM_REG_FPEXC,0x40000000)
vm.reg_write(UC_ARM_REG_FPSCR,0)

def call(addr,arg0=0):
    vm.reg_write(UC_ARM_REG_R0,arg0);vm.reg_write(UC_ARM_REG_SP,0x300f000);vm.reg_write(UC_ARM_REG_LR,0xf000000)
    vm.emu_start(addr,0xf000000,count=10000)
    assert vm.reg_read(UC_ARM_REG_PC)==0xf000000
    return vm.reg_read(UC_ARM_REG_R0)

r=random.Random(0xAC11)
seeds=list(range(256))+[r.getrandbits(32) for _ in range(253)]+[0xffffffff,0x7fffffff,0x80000000]
float_cases=0;setup_cases=0
for seed in seeds:
    rng=GlobalFloatRng(seed);vm.mem_write(0x2000000,struct.pack('<I',seed))
    for _ in range(32):
        call(0x1218f0,0x2000000)
        expected=rng.next_float()
        assert vm.reg_read(UC_ARM_REG_S0)==struct.unpack('<I',struct.pack('<f',expected))[0]
        assert struct.unpack('<I',vm.mem_read(0x2000000,4))[0]==rng.state
        float_cases+=1
    rng=GlobalFloatRng(seed)
    vm.mem_write(0x9ec510,struct.pack('<I',seed))
    call(0x2d87d8)
    expected=prepare_candidate_seeds(rng)
    assert list(struct.unpack('<4I',vm.mem_read(0xb3ff68,16)))==expected['seeds'],seed
    assert list(vm.mem_read(0x9ea48c,4))==expected['ocean_sides'],seed
    assert struct.unpack('<I',vm.mem_read(0x9ec510,4))[0]==rng.state
    setup_cases+=1
report={'executable_sha256':sha,'global_float_outputs':float_cases,'complete_candidate_seed_setup_cases':setup_cases,
        'compared':['float return bits','global RNG state','four candidate seeds','four coastline bytes'],
        'result':'all matched original ARM/VFP execution',
        'runtime_initialization':'VFP enabled, FPSCR round-to-nearest; caller-supplied initial global RNG state'}
(root/'evidence/seed-setup-verification.json').write_text(json.dumps(report,indent=2)+'\n')
print(json.dumps(report,indent=2))
