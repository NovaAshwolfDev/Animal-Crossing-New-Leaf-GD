/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007f3734. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007f3734(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = 0x14b < *(ushort *)(param_1 + 0x2c);
  if (*(ushort *)(param_1 + 0x2c) < 0x14d) {
    bVar3 = 7 < *(byte *)(param_1 + 0x2e);
  }
  if ((bVar3) || (iVar1 = FUN_008028d0(param_1 + 0x16), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


