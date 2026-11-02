/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 008a1824. Provisional types; not original source or a verified portable implementation. */

int FUN_008a1824(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  (**(code **)(*param_2 + 8))(param_2);
  iVar1 = 0;
  do {
    if (*(char *)(param_2[1] + iVar1) == '\0') {
      if (iVar1 < 0x40001) goto LAB_008a1878;
      break;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x40001);
  iVar1 = 0;
LAB_008a1878:
  if (*(int *)(param_1 + 8) <= iVar1) {
    iVar1 = *(int *)(param_1 + 8) + -1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  FUN_001151b0(iVar2,param_2[1],iVar1);
  *(undefined1 *)(iVar2 + iVar1) = 0;
  return param_1;
}


