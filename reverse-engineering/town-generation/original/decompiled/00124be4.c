/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00124be4. Provisional types; not original source or a verified portable implementation. */

void FUN_00124be4(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = *(int *)(param_2 + 4);
  }
  if (bVar2 && iVar1 == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      *(int *)(param_1 + 4) = param_2;
      *(int *)(param_1 + 8) = param_2;
      *(undefined4 *)(param_2 + 4) = 0;
      *(undefined4 *)(*(int *)(param_1 + 4) + 8) = 0;
      return;
    }
    *(int *)(*(int *)(param_1 + 8) + 8) = param_2;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 8);
    *(int *)(param_1 + 8) = param_2;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


