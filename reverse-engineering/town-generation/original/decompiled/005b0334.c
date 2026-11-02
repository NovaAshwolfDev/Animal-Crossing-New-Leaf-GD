/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005b0334. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_005b0334(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_20;
  undefined *local_1c;
  
  if (param_1[2] < 1) {
    (**(code **)(*param_1 + 8))(param_1);
    iVar1 = 0;
    do {
      if (*(char *)(param_1[1] + iVar1) == '\0') break;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x40001);
  }
  else {
    *(undefined1 *)param_1[1] = 0;
  }
  local_1c = &DAT_005b0440;
  local_20 = DAT_005b0444;
  iVar1 = FUN_008b50f8(param_2,&local_20);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    iVar3 = param_1[1];
    if (iVar1 < 0) {
      (**(code **)(*param_2 + 8))(param_2);
      iVar1 = 0;
      do {
        if (*(char *)(param_2[1] + iVar1) == '\0') {
          if (iVar1 < 0x40001) goto LAB_005b0404;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x40001);
      iVar1 = 0;
    }
LAB_005b0404:
    if (param_1[2] <= iVar1) {
      iVar1 = param_1[2] + -1;
    }
    (**(code **)(*param_2 + 8))(param_2);
    FUN_001151b0(iVar3,param_2[1],iVar1);
    uVar2 = 1;
    *(undefined1 *)(iVar3 + iVar1) = 0;
  }
  return uVar2;
}


