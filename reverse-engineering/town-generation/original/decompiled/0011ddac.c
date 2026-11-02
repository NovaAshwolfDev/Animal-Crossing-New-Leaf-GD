/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011ddac. Provisional types; not original source or a verified portable implementation. */

void FUN_0011ddac(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = (int)param_2;
  param_2[1] = (int)param_1;
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_2;
  }
  return;
}


