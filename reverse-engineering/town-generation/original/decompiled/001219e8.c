/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001219e8. Provisional types; not original source or a verified portable implementation. */

int FUN_001219e8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = DAT_00121a2c;
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    FUN_0011f990();
    FUN_00127aec(*(undefined4 *)(param_1 + 0x38),param_1);
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_001214d0(uVar1);
    iVar2 = 1;
  }
  return iVar2;
}


