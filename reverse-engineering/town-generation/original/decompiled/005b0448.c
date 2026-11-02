/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005b0448. Provisional types; not original source or a verified portable implementation. */

void FUN_005b0448(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined *local_24;
  
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
  iVar1 = DAT_005b06e0;
  local_24 = &DAT_005b06dc;
  local_28 = DAT_005b06e0;
  iVar2 = FUN_008b50f8(param_2,&local_28);
  if (iVar2 == -1) {
    iVar1 = param_1[1];
    (**(code **)(*param_1 + 8))(param_1);
    iVar2 = 0;
    do {
      if (*(char *)(param_1[1] + iVar2) == '\0') {
        if (iVar2 < 0x40001) goto LAB_005b054c;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x40001);
    iVar2 = 0;
LAB_005b054c:
    (**(code **)(*param_2 + 8))(param_2);
    iVar3 = 0;
    do {
      if (*(char *)(param_2[1] + iVar3) == '\0') {
        if (iVar3 < 0x40001) goto LAB_005b058c;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    iVar3 = 0;
LAB_005b058c:
    if (param_1[2] <= iVar3) {
      iVar3 = param_1[2] + -1;
    }
    if (iVar3 < 1) {
      return;
    }
    (**(code **)(*param_2 + 8))(param_2);
    FUN_001151b0(iVar1,param_2[1],iVar3);
    if (iVar3 <= iVar2) {
      return;
    }
  }
  else {
    iVar2 = iVar2 + 3;
    (**(code **)(*param_2 + 8))(param_2);
    iVar3 = 0;
    do {
      if (*(char *)(param_2[1] + iVar3) == '\0') {
        if (iVar3 < 0x40001) goto LAB_005b05e4;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    iVar3 = 0;
LAB_005b05e4:
    iVar4 = DAT_005b06e4;
    if (-1 < iVar2 && iVar2 <= iVar3) {
      iVar4 = param_2[1];
    }
    local_28 = iVar1;
    if (-1 < iVar2 && iVar2 <= iVar3) {
      local_24 = (undefined *)(iVar4 + iVar2);
    }
    else {
      local_24 = *(undefined **)(iVar4 + 4);
    }
    iVar1 = param_1[1];
    (**(code **)(*param_1 + 8))(param_1);
    iVar2 = 0;
    do {
      if (*(char *)(param_1[1] + iVar2) == '\0') {
        if (iVar2 < 0x40001) goto LAB_005b0648;
        break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x40001);
    iVar2 = 0;
LAB_005b0648:
    (**(code **)(local_28 + 8))(&local_28);
    iVar3 = 0;
    do {
      if (*(char *)((int)local_24 + iVar3) == '\0') {
        if (iVar3 < 0x40001) goto LAB_005b0688;
        break;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40001);
    iVar3 = 0;
LAB_005b0688:
    if (param_1[2] <= iVar3) {
      iVar3 = param_1[2] + -1;
    }
    if (iVar3 < 1) {
      return;
    }
    (**(code **)(local_28 + 8))(&local_28);
    FUN_001151b0(iVar1,local_24,iVar3);
    if (iVar3 <= iVar2) {
      return;
    }
  }
  *(undefined1 *)(iVar1 + iVar3) = 0;
  return;
}


