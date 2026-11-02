/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001289e8. Provisional types; not original source or a verified portable implementation. */

int FUN_001289e8(int *param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_b4;
  uint local_b0;
  uint *local_ac;
  ushort local_a8 [8];
  int local_98;
  int *piStack_34;
  int iStack_30;
  int local_2c;
  undefined4 uStack_28;
  
  uVar1 = DAT_00128de8;
  piStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  FUN_0011f998(DAT_00128de8);
  iVar4 = param_1[1];
  iVar3 = DAT_00128dec;
  if (iVar4 != 0) {
    local_b0 = 0;
    local_b4 = 0;
    if (param_5 == 0) {
      (**(code **)(*param_1 + 8))(param_1,iVar4,3,2,&local_b4);
    }
    else {
      (**(code **)(*param_1 + 8))(param_1,iVar4,4,2,&local_b4);
    }
    iVar7 = DAT_00128df4;
    iVar4 = DAT_00128df0;
    iVar3 = DAT_00128df8;
    if (local_b4 != 0) {
      local_ac = (uint *)(param_1 + 0x156);
      if (param_5 == 0) {
        if (*(char *)(DAT_00128df4 + 3) != '\0') {
          *(undefined4 *)(param_2 + 0x14) = 0;
          uVar2 = DAT_00128dfc;
          FUN_0011f998(DAT_00128dfc);
          if (*(char *)(iVar7 + 3) != '\0') {
            FUN_00126238(param_1[0xea]);
            *(undefined1 *)(iVar7 + 3) = 0;
          }
          FUN_0011fa98(uVar2);
        }
        uVar2 = DAT_00128dfc;
        iVar3 = local_b4;
        FUN_0011f998(DAT_00128dfc);
        if (*(char *)(iVar7 + 3) != '\0') {
          FUN_00126238(param_1[0xea]);
          *(undefined1 *)(iVar7 + 3) = 0;
        }
        iVar3 = FUN_0012abfc(iVar3,4);
        param_1[0xea] = iVar3;
        if (iVar3 == 0) {
          *(undefined1 *)(iVar7 + 3) = 0;
          FUN_0011fa98(uVar2);
          iVar3 = iVar4;
        }
        else {
          *(undefined1 *)(iVar7 + 3) = 1;
          iVar3 = 0;
          FUN_0011fa98(uVar2);
        }
        if (iVar3 < 0) goto LAB_00128c24;
        iVar3 = (**(code **)(*param_1 + 0x34))
                          (param_1,param_1[0xea],local_b4,&local_b0,param_1[1],3,0x12);
        uVar6 = param_1[0xea];
      }
      else {
        if ((param_5 == 1) && (*(char *)(DAT_00128df4 + 4) != '\0')) {
          *(undefined4 *)(param_2 + 0x14) = 0;
          uVar2 = DAT_00128dfc;
          FUN_0011f998(DAT_00128dfc);
          if (*(char *)(iVar7 + 4) != '\0') {
            FUN_00126238(param_1[0x156]);
            *(undefined1 *)(iVar7 + 4) = 0;
          }
          FUN_0011fa98(uVar2);
        }
        uVar2 = DAT_00128dfc;
        iVar3 = local_b4;
        FUN_0011f998(DAT_00128dfc);
        if (*(char *)(iVar7 + 4) != '\0') {
          FUN_00126238(param_1[0x156]);
          *(undefined1 *)(iVar7 + 4) = 0;
        }
        iVar3 = FUN_0012abfc(iVar3,4);
        param_1[0x156] = iVar3;
        if (iVar3 == 0) {
          *(undefined1 *)(iVar7 + 4) = 0;
          FUN_0011fa98(uVar2);
          iVar3 = iVar4;
        }
        else {
          *(undefined1 *)(iVar7 + 4) = 1;
          iVar3 = 0;
          FUN_0011fa98(uVar2);
        }
        if (iVar3 < 0) {
LAB_00128c24:
          *(undefined4 *)(param_2 + 0x14) = 0;
          FUN_0011fa98(uVar1);
          return iVar4;
        }
        iVar3 = (**(code **)(*param_1 + 0x34))
                          (param_1,param_1[0x156],local_b4,&local_b0,param_1[1],4,0x12);
        uVar6 = *local_ac;
      }
      iVar4 = DAT_00128e00;
      if ((iVar3 < 0) || (local_b0 == 0)) {
        *(undefined4 *)(param_2 + 0x14) = 0;
        uVar2 = DAT_00128dfc;
        if (param_5 == 0) {
          FUN_0011f998(DAT_00128dfc);
          if (*(char *)(iVar7 + 3) != '\0') {
            FUN_00126238(param_1[0xea]);
            *(undefined1 *)(iVar7 + 3) = 0;
          }
        }
        else {
          FUN_0011f998(DAT_00128dfc);
          if (*(char *)(iVar7 + 4) != '\0') {
            FUN_00126238(param_1[0x156]);
            *(undefined1 *)(iVar7 + 4) = 0;
          }
        }
        FUN_0011fa98(uVar2);
        iVar3 = DAT_00128df8;
      }
      else {
        if (((local_b0 < 0x20) ||
            (FUN_002febf4(param_2,uVar6,0x20), *(uint *)(param_2 + 4) != local_b0)) ||
           (iVar3 = *(int *)(param_2 + 0x14), local_b0 < iVar3 * 0x70 + 0x20U)) {
LAB_00128d38:
          FUN_0011fa98(uVar1);
          return iVar4;
        }
        iVar7 = uVar6 + 0x20;
        if (iVar3 != 0) {
          uVar6 = DAT_00128e04;
        }
        uVar5 = 0;
        if (iVar3 != 0) {
          do {
            FUN_002febf4(local_a8,iVar7,0x70);
            if ((local_a8[0] != uVar6) || (local_98 != param_1[1])) goto LAB_00128d38;
            *(int *)(local_2c + uVar5 * 4) = iVar7;
            uVar5 = uVar5 + 1;
            iVar7 = iVar7 + 0x70;
          } while (uVar5 < *(uint *)(param_2 + 0x14));
        }
        iVar3 = DAT_00128df8;
        if (local_b4 != 0) {
          iVar3 = 0;
        }
      }
    }
  }
  FUN_0011fa98(uVar1);
  return iVar3;
}


