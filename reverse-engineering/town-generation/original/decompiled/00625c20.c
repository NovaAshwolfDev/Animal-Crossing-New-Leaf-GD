/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00625c20. Provisional types; not original source or a verified portable implementation. */

undefined1 *
FUN_00625c20(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,undefined4 param_5,
            uint param_6)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_a8;
  undefined1 *local_a4;
  undefined4 uStack_a0;
  undefined1 *local_9c;
  undefined1 *local_98;
  undefined4 uStack_94;
  undefined1 local_90 [31];
  undefined1 uStack_71;
  byte local_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [52];
  undefined4 uStack_34;
  uint local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  uStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  FUN_00636e3c();
  iVar1 = FUN_006378a0();
  iVar1 = FUN_00616cb4(iVar1 + 4,local_30 & 0xffff);
  puVar2 = (undefined1 *)(local_30 & 0xffff);
  if (*(int *)(DAT_00625ffc + 4) == 0) {
    return puVar2;
  }
  if ((undefined1 *)0x14c < puVar2) {
    return puVar2;
  }
  iVar3 = *(int *)(DAT_00625ffc + 4) + (int)puVar2 * 0x22;
  if (iVar3 == 0) {
    return (undefined1 *)0x0;
  }
  local_70 = *(byte *)(iVar3 + 0x1c) >> 4;
  local_98 = local_90;
  uStack_94 = 0x20;
  uStack_71 = 0;
  local_90[0] = 0;
  local_9c = DAT_00626000;
  puVar2 = DAT_00626000;
  uVar5 = param_6;
  switch(param_4) {
  case 0:
    FUN_005ae82c(&local_9c,"Mail_%s_Q03",*(undefined4 *)(DAT_00626004 + (uint)local_70 * 4));
    iVar3 = FUN_0011df34(3);
    uVar5 = iVar3 + 0xc;
    iVar3 = FUN_0011df34(100);
    if (iVar3 < 0x50) goto LAB_00625fc4;
    if (((iVar1 == 0) || (iVar3 = FUN_0011df34(100), 0x13 < iVar3)) ||
       (iVar3 = FUN_0061da90(iVar1,param_3), iVar3 == 0)) goto LAB_00625d84;
LAB_00625d50:
    FUN_00625400(&local_a8,0,iVar3,local_30 & 0xffff);
    FUN_00756eb0(param_5,&local_a8);
    break;
  case 1:
    FUN_005ae82c(&local_9c,"Mail_%s_Q04",*(undefined4 *)(DAT_00626004 + (uint)local_70 * 4));
    uVar5 = FUN_0011df34(3);
    if (param_6 == 0) {
      if ((iVar1 != 0) && (iVar3 = FUN_0061da90(iVar1,param_3), iVar3 != 0)) goto LAB_00625d50;
    }
    else if (param_6 == 1) goto LAB_00625d84;
LAB_00625fc4:
    FUN_00625400(&local_a8,2,0);
    FUN_00756eb0(param_5,&local_a8);
    break;
  case 2:
    FUN_005ae82c(&local_9c,"Mail_%s_Q08",*(undefined4 *)(DAT_00626004 + (uint)local_70 * 4));
    if (((iVar1 != 0) && (param_6 < 0xc)) && (iVar3 = FUN_0061da90(iVar1,param_3), iVar3 != 0)) {
      FUN_00625400(&local_a8,*(undefined1 *)(DAT_0062602c + param_6),iVar3,local_30 & 0xffff);
      FUN_00756eb0(param_5,&local_a8);
    }
    iVar3 = FUN_00802710(param_5);
    if (iVar3 != 0) {
      param_6 = 0xc;
LAB_00625f24:
      FUN_00625400(&local_a8,0xe,0);
      FUN_00756eb0(param_5,&local_a8);
      uVar5 = param_6;
    }
    break;
  case 3:
    FUN_005ae82c(&local_9c,"Mail_%s_Q09",*(undefined4 *)(DAT_00626004 + (uint)local_70 * 4));
    if (((iVar1 != 0) && ((int)param_6 < 3)) && (iVar3 = FUN_0061da90(iVar1,param_3), iVar3 != 0)) {
      FUN_00625400(&local_a8,0,iVar3,local_30 & 0xffff);
      FUN_00756eb0(param_5,&local_a8);
    }
    iVar3 = FUN_00802710(param_5);
    if (iVar3 != 0) goto LAB_00625f24;
    break;
  case 4:
    FUN_005ae82c(&local_9c,"Mail_%s_Q10",*(undefined4 *)(DAT_00626004 + (uint)local_70 * 4));
    uVar5 = FUN_0011df34(3);
    goto LAB_00625d84;
  case 5:
    FUN_005ae82c(&local_9c,"Mail_%s_Q11",*(undefined4 *)(DAT_00626004 + (uint)local_70 * 4));
    uVar5 = FUN_0011df34(3);
    if (param_6 == 0) {
      if ((iVar1 != 0) && (iVar3 = FUN_0061da90(iVar1,param_3), iVar3 != 0)) goto LAB_00625d50;
    }
    else if (param_6 != 1) goto LAB_00625fc4;
LAB_00625d84:
    FUN_00625400(&local_a8,1,0);
    FUN_00756eb0(param_5,&local_a8);
    break;
  case 6:
    FUN_005ae82c(&local_9c,"Mail_%s_Npcbday",*(undefined4 *)(DAT_00626004 + (uint)local_70 * 4));
    if (((iVar1 == 0) || (param_6 != 0)) || (iVar3 = FUN_0061da90(iVar1,param_3), iVar3 == 0)) {
      FUN_00625400(&local_a8,2,0);
      FUN_00756eb0(param_5,&local_a8);
      iVar3 = FUN_0011df34(3);
      uVar5 = iVar3 + 6;
    }
    else {
      FUN_00625400(&local_a8,0,iVar3,local_30 & 0xffff);
      FUN_00756eb0(param_5,&local_a8);
LAB_006262c0:
      iVar3 = FUN_0011df34(3);
      uVar5 = iVar3 + 3;
    }
    break;
  case 7:
    FUN_005ae82c(&local_9c,"Mail_%s_Pcbday",*(undefined4 *)(DAT_00626004 + (uint)local_70 * 4));
    if (2 < param_6) {
      uVar5 = 2;
    }
    iVar3 = FUN_00802710(param_5);
    if (iVar3 != 0) {
      if (param_6 == 0) {
        iVar3 = FUN_0011df34(4);
        if (iVar3 == 0) {
          uVar4 = FUN_00756d40(&local_a8,DAT_0062640c);
          FUN_00756eb0(param_5,uVar4);
        }
        else if (iVar3 == 1) {
          uVar4 = FUN_00756d40(&local_a8,DAT_00626410);
          FUN_00756eb0(param_5,uVar4);
        }
        else if (iVar3 == 2) {
          uVar4 = FUN_00756d40(&local_a8,DAT_00626414);
          FUN_00756eb0(param_5,uVar4);
        }
        else {
          uVar4 = FUN_00756d40(&local_a8,DAT_00626408);
          FUN_00756eb0(param_5,uVar4);
        }
      }
      else {
        if (param_6 != 1) goto LAB_00625d84;
        uVar4 = FUN_00756d40(&local_a8,DAT_00626404);
        FUN_00756eb0(param_5,uVar4);
      }
    }
    break;
  case 8:
    FUN_005ae82c(&local_9c,"Mail_%s_Move",*(undefined4 *)(DAT_00626004 + (uint)local_70 * 4));
    iVar3 = FUN_00802710(param_5);
    if (iVar3 != 0) goto LAB_006262c0;
    uVar5 = FUN_0011df34(3);
    break;
  case 9:
    FUN_005ae82c(&local_9c,"Mail_%s_Valentine",*(undefined4 *)(DAT_00626004 + (uint)local_70 * 4));
    break;
  default:
    goto switchD_00625cb0_default;
  }
  FUN_0015f1bc(auStack_6c,local_70);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  FUN_00698054(auStack_68,iVar1);
  (**(code **)(local_9c + 8))(&local_9c);
  local_a4 = auStack_6c;
  uStack_a0 = 0;
  local_a8 = param_3;
  FUN_006388c4(param_1,local_98,uVar5 + 1,auStack_68);
  iVar3 = FUN_00802710(param_5);
  if (((iVar3 == 0) && (FUN_007fdfd8(param_1,param_5,1), param_4 != 7)) && (iVar1 != 0)) {
    FUN_0061dc68(iVar1,param_5);
  }
  puVar2 = auStack_6c;
switchD_00625cb0_default:
  return puVar2;
}


