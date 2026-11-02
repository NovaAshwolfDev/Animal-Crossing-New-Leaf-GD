/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ca678. Provisional types; not original source or a verified portable implementation. */

undefined4
FUN_005ca678(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5,
            undefined4 param_6)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  cVar1 = *(char *)(param_1 + 0xf4);
  if ((cVar1 == '\x03' || cVar1 == '\x05') || cVar1 == '\x06') {
    return 1;
  }
  if (*(char *)(param_1 + 0xf4) == '\0') {
    *(undefined1 *)(param_1 + 0xf5) = param_5;
    *(undefined4 *)(param_1 + 0xe8) = param_6;
    *(undefined1 *)(param_1 + 0xf4) = 1;
    *(undefined4 *)(param_1 + 0xd4) = param_3;
    iVar6 = *(int *)(param_1 + 0x4c);
    (**(code **)(*param_2 + 8))(param_2);
    iVar5 = 0;
    do {
      if (*(char *)(param_2[1] + iVar5) == '\0') {
        if (iVar5 < 0x40001) goto LAB_005ca70c;
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x40001);
    iVar5 = 0;
LAB_005ca70c:
    if (*(int *)(param_1 + 0x50) <= iVar5) {
      iVar5 = *(int *)(param_1 + 0x50) + -1;
    }
    (**(code **)(*param_2 + 8))(param_2);
    FUN_001151b0(iVar6,param_2[1],iVar5);
    *(undefined1 *)(iVar6 + iVar5) = 0;
    *(undefined4 *)(param_1 + 0xf0) = param_4;
    uVar3 = DAT_005ca810;
    if (*(char *)(param_1 + 0xf5) != '\0') {
      FUN_0011f990();
      FUN_00124be4(DAT_005ca814,param_1);
      FUN_001214d0(uVar3);
      goto LAB_005ca778;
    }
    *(undefined1 *)(param_1 + 0xf4) = 2;
  }
  else {
LAB_005ca778:
    pcVar2 = DAT_005ca818;
    if (*(char *)(param_1 + 0xf5) != '\0') {
      if (DAT_005ca818[1] < '\x01') {
        pcVar2[0x14] = '\0';
        pcVar2[0x15] = '\0';
        pcVar2[0x16] = '\0';
        pcVar2[0x17] = '\0';
        piVar4 = *(int **)(pcVar2 + 0xc);
        if (((piVar4 != (int *)0x0) && (*(int *)(DAT_005ca814 + 4) != 0)) && (*pcVar2 == '\0')) {
          *pcVar2 = '\x01';
          (**(code **)(*piVar4 + 0xc))(piVar4,DAT_005ca81c,0);
        }
      }
      goto LAB_005ca7cc;
    }
  }
  FUN_005ca8bc(param_1);
LAB_005ca7cc:
  cVar1 = *(char *)(param_1 + 0xf4);
  if ((cVar1 != '\x03' && cVar1 != '\x05') && (cVar1 != '\x06')) {
    return 0;
  }
  return 1;
}


