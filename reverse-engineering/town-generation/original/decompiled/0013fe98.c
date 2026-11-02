/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0013fe98. Provisional types; not original source or a verified portable implementation. */

int FUN_0013fe98(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *param_1;
  iVar2 = FUN_0013fefc();
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar4 = *(int *)(iVar1 + 0x14);
    iVar3 = 0;
    if ((iVar4 != -1) && (piVar5 = *(int **)(*(int *)(iVar1 + 0xc) + iVar4 * 0x10), iVar2 < *piVar5)
       ) {
      iVar3 = piVar5[iVar2 + 1] + (int)piVar5;
    }
  }
  return iVar3;
}


