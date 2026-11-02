/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007dda3c. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007dda3c(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x18);
  do {
    if (iVar4 == param_1 + 0x14) {
      return 0;
    }
    iVar2 = *(int *)(iVar4 + 8);
    piVar3 = (int *)(iVar2 + 0x20);
    (**(code **)(*piVar3 + 8))(piVar3);
    (**(code **)(*piVar3 + 8))(piVar3);
    iVar5 = *(int *)(iVar2 + 0x24);
    (**(code **)(*param_2 + 8))(param_2);
    if (iVar5 == param_2[1]) {
LAB_007ddad8:
      return *(undefined4 *)(iVar4 + 8);
    }
    iVar5 = 0;
    do {
      cVar1 = *(char *)(*(int *)(iVar2 + 0x24) + iVar5);
      if (cVar1 != *(char *)(param_2[1] + iVar5)) break;
      if (cVar1 == '\0') goto LAB_007ddad8;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    iVar4 = *(int *)(iVar4 + 4);
  } while( true );
}


