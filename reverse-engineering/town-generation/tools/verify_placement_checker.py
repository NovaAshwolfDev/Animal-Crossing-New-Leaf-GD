"""Test 0x5893d4 on synthetic acre memory; replace only its allocator call."""
import hashlib
import json
import random
import struct
import sys
from pathlib import Path
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM, UC_HOOK_CODE
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_R2, UC_ARM_REG_R3, UC_ARM_REG_SP, UC_ARM_REG_LR, UC_ARM_REG_PC
root=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(root/'reconstruction'))
from acres import TABLES
from placement_checker import accepts_position
code=Path(sys.argv[1]).read_bytes();sha=hashlib.sha256(code).hexdigest()
if sha!=TABLES['executable_sha256']:raise SystemExit('Executable hash mismatch')
vm=Uc(UC_ARCH_ARM,UC_MODE_ARM);vm.mem_map(0x100000,0xa70000);vm.mem_write(0x100000,code)
vm.mem_map(0x2000000,0x100000);vm.mem_map(0x3000000,0x10000);vm.mem_map(0xf000000,4096)
vm.mem_write(0x9d82c8,struct.pack('<I',1));vm.mem_write(0xa098f0,struct.pack('<4I',0,0,15,15))
allocations=[]
def allocate(vm,address,size,user):
    assert vm.reg_read(UC_ARM_REG_R1)==8 and vm.reg_read(UC_ARM_REG_R2)==4
    allocations.append(0x2040000)
    vm.reg_write(UC_ARM_REG_R0,0x2040000)
    vm.reg_write(UC_ARM_REG_PC,vm.reg_read(UC_ARM_REG_LR))
vm.hook_add(UC_HOOK_CODE,allocate,begin=0x5ca634,end=0x5ca634)

def call(x,y):
    for reg,value in zip([UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3],[0x2000000,0x2010000,x,y]):vm.reg_write(reg,value)
    vm.reg_write(UC_ARM_REG_SP,0x300f000);vm.reg_write(UC_ARM_REG_LR,0xf000000);vm.emu_start(0x5893d4,0xf000000,count=10000)
    assert vm.reg_read(UC_ARM_REG_PC)==0xf000000
    return vm.reg_read(UC_ARM_REG_R0)

class2=[i for i,c in enumerate(TABLES['tile_classes']) if c==2]
r=random.Random(0xac11)
fields=[[[0]*16 for _ in range(16)]]
fields.append([[0x36 if y%2==0 else class2[0] for x in range(16)] for y in range(16)])
for _ in range(10):
    grid=[[r.randrange(256) for x in range(16)] for y in range(16)]
    for _ in range(5):
        x=r.randrange(2,15);y=r.randrange(15)
        for dx in range(-2,2):grid[y][x+dx]=0x36;grid[y+1][x+dx]=r.choice(class2)
    fields.append(grid)
cases=accepted=0
for grid in fields:
    raw=bytearray(0xa20)
    for y in range(16):
        for x in range(16):raw[0x24+y*0xa0+x*10]=grid[y][x]
    vm.mem_write(0x2010000,bytes(raw))
    for y in range(-1,17):
        for x in range(-1,17):
            vm.mem_write(0x2000000,b'\0'*32)
            vm.mem_write(0x2000010,struct.pack('<II',256,0x2030000))
            vm.mem_write(0x2030000,b'\xcc'*4);vm.mem_write(0x2040000,b'\xcc'*8)
            allocations.clear();result=call(x&0xffffffff,y&0xffffffff)
            expected=accepts_position(grid,x,y)
            assert result==0,('callback return',x,y,result)
            count=struct.unpack('<I',vm.mem_read(0x200000c,4))[0]
            assert count==int(expected),(x,y,count,expected)
            assert bool(allocations)==expected
            if expected:
                assert struct.unpack('<II',vm.mem_read(0x2040000,8))==(x,y)
                assert struct.unpack('<I',vm.mem_read(0x2030000,4))[0]==0x2040000
                accepted+=1
            cases+=1
report={'executable_sha256':sha,'function':'0x005893d4','cases':cases,'accepted_positions':accepted,
        'result':'predicate, callback return, coordinate allocation, and output list update matched original ARM execution',
        'runtime_initialization':'static 16x16 bounds initialized; synthetic tile data; only allocator at 0x5ca634 replaced with a fixed valid allocation',
        'scope':'one structure-0x5c candidate checker; does not verify full placement or town generation'}
(root/'evidence/placement-checker-verification.json').write_text(json.dumps(report,indent=2)+'\n');print(json.dumps(report,indent=2))
