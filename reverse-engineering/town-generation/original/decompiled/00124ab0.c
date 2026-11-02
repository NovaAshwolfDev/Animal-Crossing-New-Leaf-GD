/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00124ab0. Provisional types; not original source or a verified portable implementation. */

void FUN_00124ab0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_2 + 8);
  if (iVar1 == 0 && iVar2 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    bVar3 = iVar1 == param_2;
    if (bVar3) {
      iVar1 = *(int *)(param_1 + 8);
    }
    if (bVar3 && iVar1 == param_2) {
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
    return;
  }
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 4) == param_2) {
      *(int *)(param_1 + 4) = iVar2;
    }
  }
  else {
    *(int *)(iVar1 + 8) = iVar2;
  }
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 8) == param_2) {
      *(int *)(param_1 + 8) = iVar1;
    }
  }
  else {
    *(int *)(iVar2 + 4) = iVar1;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}


