/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00582e28. Provisional types; not original source or a verified portable implementation. */

int FUN_00582e28(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = DAT_00582e60;
  FUN_00636e3c();
  iVar1 = FUN_006378a0();
  uVar2 = FUN_007e6800(iVar1 + 4,*(undefined2 *)(param_1 + 0x2c));
  if (uVar2 < 10) {
    iVar3 = iVar3 + 0xa8 + uVar2 * 0x50;
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}


