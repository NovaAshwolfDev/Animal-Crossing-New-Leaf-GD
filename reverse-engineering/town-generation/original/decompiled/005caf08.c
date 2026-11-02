/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005caf08. Provisional types; not original source or a verified portable implementation. */

int FUN_005caf08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar2 = FUN_005ca4c4(param_1 + 0xc,param_1 + 0x48);
    uVar1 = DAT_005caf5c;
    if (iVar2 != 0) {
      FUN_0011f990();
      *(char *)(DAT_005caf60 + 2) = *(char *)(DAT_005caf60 + 2) + '\x01';
      FUN_001214d0(uVar1);
      iVar2 = 1;
    }
    return iVar2;
  }
  return 0;
}


