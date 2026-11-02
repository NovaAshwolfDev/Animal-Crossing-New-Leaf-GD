/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007dc9d8. Provisional types; not original source or a verified portable implementation. */

void FUN_007dc9d8(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = param_2 + 2;
  iVar1 = *piVar2;
  iVar3 = param_2[3];
  if (piVar2 != (int *)0x0) {
    if (iVar1 < *piVar2) {
      iVar1 = iVar1 + 1;
    }
    else {
      iVar1 = *param_2;
      iVar3 = iVar3 + 1;
    }
  }
  *param_1 = (int)param_2;
  param_1[1] = (int)piVar2;
  param_1[2] = iVar1;
  param_1[3] = iVar3;
  return;
}


