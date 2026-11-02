"""Differential-check reconstructed RNG against the supplied original ARM code."""
import hashlib
import importlib.util
import json
import random
import struct
import sys
from pathlib import Path
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_ARM
from unicorn.arm_const import UC_ARM_REG_R0, UC_ARM_REG_R1, UC_ARM_REG_SP, UC_ARM_REG_LR

root = Path(__file__).resolve().parents[1]
spec = importlib.util.spec_from_file_location("acnl_rng", root / "reconstruction/rng.py")
module = importlib.util.module_from_spec(spec)
spec.loader.exec_module(module)
code = Path(sys.argv[1]).read_bytes()
expected = "1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04"
if hashlib.sha256(code).hexdigest() != expected:
    raise SystemExit("Executable hash mismatch: addresses are version-specific")
vm = Uc(UC_ARCH_ARM, UC_MODE_ARM)
vm.mem_map(0x100000, (len(code) + 4095) & ~4095)
vm.mem_write(0x100000, code)
vm.mem_map(0x2000000, 0x1000)
vm.mem_map(0x3000000, 0x10000)
vm.mem_map(0xF000000, 0x1000)

def call(address, arg0, arg1=0):
    vm.reg_write(UC_ARM_REG_R0, arg0)
    vm.reg_write(UC_ARM_REG_R1, arg1)
    vm.reg_write(UC_ARM_REG_SP, 0x300F000)
    vm.reg_write(UC_ARM_REG_LR, 0xF000000)
    vm.emu_start(address, 0xF000000, count=1000)
    return vm.reg_read(UC_ARM_REG_R0)

seeds = list(range(256)) + [0xFFFFFFFF, 0x80000000, 0x7FFFFFFF]
r = random.Random(0xAC11)
seeds += [r.getrandbits(32) for _ in range(253)]
outputs = 0
for seed in seeds:
    reconstructed = module.GameRng(seed)
    call(0x5BE4F0, 0x2000000, seed)
    assert struct.unpack("<4I", bytes(vm.mem_read(0x2000000, 16))) == tuple(reconstructed.state)
    for _ in range(64):
        result = call(0x5BE58C, 0x2000000)
        assert result == reconstructed.next_u32(), (seed, outputs)
        assert struct.unpack("<4I", bytes(vm.mem_read(0x2000000, 16))) == tuple(reconstructed.state)
        outputs += 1
report = {"executable_sha256": expected, "seed_cases": len(seeds),
          "next_calls": outputs, "state_comparisons": outputs + len(seeds),
          "result": "all matched original ARM execution"}
(root / "evidence/rng-verification.json").write_text(json.dumps(report, indent=2) + "\n")
print(json.dumps(report, indent=2))
