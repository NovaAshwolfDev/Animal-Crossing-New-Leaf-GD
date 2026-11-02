/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007dcaec. Provisional types; not original source or a verified portable implementation. */

void FUN_007dcaec(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *param_2;
  iVar3 = *param_3;
  iVar2 = param_2[2];
  iVar4 = param_2[3];
  iVar1 = param_3[1];
  param_1[1] = param_2[1] + param_3[1];
  *param_1 = iVar5 + iVar3;
  param_1[2] = iVar2 + iVar3;
  param_1[3] = iVar1 + iVar4;
  return;
}


