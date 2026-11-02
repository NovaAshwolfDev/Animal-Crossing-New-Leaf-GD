/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ae82c. Provisional types; not original source or a verified portable implementation. */

int FUN_005ae82c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 8);
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_00100890(iVar3,iVar2,param_2,&uStack_8);
  if ((iVar1 < 0) || (iVar2 <= iVar1)) {
    iVar1 = iVar2 + -1;
    *(undefined1 *)(iVar3 + iVar2 + -1) = 0;
  }
  return iVar1;
}


