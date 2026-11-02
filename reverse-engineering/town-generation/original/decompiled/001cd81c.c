/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001cd81c. Provisional types; not original source or a verified portable implementation. */

int FUN_001cd81c(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_00687d50(param_2);
  bVar2 = iVar1 != 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0xd8);
  }
  if (bVar2 && iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0xd8) + param_2 * 0xa00;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


