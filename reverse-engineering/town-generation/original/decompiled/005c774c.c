/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005c774c. Provisional types; not original source or a verified portable implementation. */

int FUN_005c774c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_0010819c(param_2,param_4,param_3,param_5,0);
  if (iVar1 != 0) {
    *(int *)(param_1 + 4) = iVar1;
    iVar1 = 1;
  }
  return iVar1;
}


