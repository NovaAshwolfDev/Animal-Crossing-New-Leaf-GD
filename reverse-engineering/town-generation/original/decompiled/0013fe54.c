/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0013fe54. Provisional types; not original source or a verified portable implementation. */

int FUN_0013fe54(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(*param_1 + 0x14);
  if ((iVar2 != -1) &&
     (piVar1 = *(int **)(*(int *)(*param_1 + 0xc) + iVar2 * 0x10), param_2 < *piVar1)) {
    return (int)piVar1 + piVar1[param_2 + 1];
  }
  return 0;
}


