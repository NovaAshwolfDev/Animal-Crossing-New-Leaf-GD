/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011dba0. Provisional types; not original source or a verified portable implementation. */

void FUN_0011dba0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_1 + 0x6c) & 1;
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  iVar2 = 0;
  if (uVar1 != 0) {
    FUN_0011f990();
    iVar2 = param_1 + 0x50;
  }
  FUN_0011ddac(param_1 + 0x3c,*(int *)(param_1 + 0x48) + param_2);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  if (iVar2 != 0) {
    FUN_001214d0(iVar2);
    return;
  }
  return;
}


