/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007fddc0. Provisional types; not original source or a verified portable implementation. */

uint FUN_007fddc0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005a20f8();
  if ((iVar2 != 0) && (iVar2 = FUN_007dcdac(), iVar2 != 0)) {
    iVar2 = FUN_005a20f8(param_1);
    uVar1 = (uint)*(byte *)(iVar2 + 0x1e) << 0x1a;
    if (uVar1 >> 0x1e < 3) {
      return uVar1 >> 0x1e;
    }
  }
  return 0;
}


