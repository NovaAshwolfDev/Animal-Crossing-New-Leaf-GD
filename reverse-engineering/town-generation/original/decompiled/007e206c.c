/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e206c. Provisional types; not original source or a verified portable implementation. */

int FUN_007e206c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int local_20;
  int iStack_1c;
  
  piVar2 = &local_20;
  local_20 = param_2;
  iStack_1c = param_3;
  iVar1 = FUN_007dca50(param_1,&local_20);
  if (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 0x24);
  }
  if (iVar1 != 0 && piVar2 != (int *)0x0) {
    iVar1 = FUN_007dca3c(param_1);
    iVar1 = *(int *)(param_1 + 0x24) + (param_3 * iVar1 + param_2) * DAT_007e20d8 * 4;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


