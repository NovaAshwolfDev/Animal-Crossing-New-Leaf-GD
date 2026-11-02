/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00445e34. Provisional types; not original source or a verified portable implementation. */

uint FUN_00445e34(int *param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,uint param_8,int param_9,int param_10,
                 uint param_11,uint param_12,uint param_13)

{
  char cVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined1 *local_60;
  int local_5c;
  int iStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  int *piStack_34;
  uint uStack_30;
  int local_2c;
  int local_28;
  
  piStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  uVar3 = FUN_00444e78();
  puVar2 = DAT_0044628c;
  if (param_2 == 0) {
    uVar3 = DAT_00446290;
  }
  DAT_0044628c[1] = 1;
  param_1[1] = param_2;
  uVar5 = DAT_00446294;
  if (param_2 == 0) {
    return uVar3;
  }
  uVar3 = param_9 + param_10;
  bVar7 = 0xfffff < uVar3;
  bVar6 = uVar3 == 0x100000;
  if (uVar3 < 0x100001) {
    bVar7 = 0x62 < param_11;
    bVar6 = param_11 == 99;
  }
  if (!bVar7 || bVar6) {
    bVar7 = 0x62 < param_12;
    bVar6 = param_12 == 99;
    if (param_12 < 100) {
      bVar7 = 0x18fff < param_13;
      bVar6 = param_13 == 0x19000;
    }
    if (!bVar7 || bVar6) {
      uVar3 = param_11;
      if (param_11 != 0) {
        uVar3 = param_12;
      }
      if ((param_11 != 0 && uVar3 != 0) && ((param_9 != 0 && param_10 != 0) && param_13 != 0)) {
        if (local_28 != 0) {
          uVar3 = FUN_00446314(param_1,0);
          uVar5 = 0;
          if (uVar3 != 0) {
            do {
              uVar4 = FUN_00446c00(param_1 + uVar5 * 4 + 7);
              if (uVar4 >> 8 == param_2 >> 8) {
                if (puVar2[1] != '\0') {
                  FUN_0012603c(0);
                }
                uVar3 = DAT_00446298;
                param_1[1] = 0;
                return uVar3;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar3);
          }
          uVar3 = FUN_00446314(param_1,1);
          if (uVar3 < 0xc) {
            param_1[0x81] = param_9;
            local_60 = auStack_44;
            param_1[0x83] = param_11;
            param_1[0xed] = param_10;
            param_1[0xef] = param_12;
            param_1[0x86] = param_13;
            param_1[0xf2] = param_13;
            (**(code **)(*param_1 + 8))(param_1,param_1[1],0xb,8);
            local_60 = auStack_48;
            (**(code **)(*param_1 + 8))(param_1,param_1[1],0xc,8);
            FUN_0012611c(param_1,0,param_1 + 0x7f,param_1 + 0x87);
            local_60 = auStack_48;
            (**(code **)(*param_1 + 8))(param_1,param_1[1],0xd,8);
            FUN_0012611c(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
            local_60 = (undefined1 *)0x0;
            uVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0);
            if ((uVar3 & 0x80000000) == 0) {
              FUN_00445bd8(param_1);
            }
            FUN_002fff30(param_1 + 0x67,0x60);
            *(short *)(param_1 + 0x67) = (short)DAT_004462a0;
            param_1[0x68] = param_2;
            *(undefined1 *)((int)param_1 + 0x1a9) = 1;
            param_1[0x69] = local_2c;
            *(undefined1 *)(param_1 + 0x6a) = 1;
            FUN_002febf4(param_1 + 0x6b,local_28,0x20);
            FUN_0010b810(&local_40);
            local_50 = local_40;
            uStack_4c = uStack_3c;
            FUN_0010de90(&local_60,&local_50);
            param_1[0x74] = (int)local_60;
            param_1[0x75] = local_5c;
            param_1[0x76] = iStack_58;
            uVar3 = FUN_001261f4(param_1);
            if ((int)uVar3 < 0) {
              local_60 = (undefined1 *)0x0;
              local_5c = 0;
              (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
              FUN_004467b8(param_1);
              FUN_00123be8(param_1,0);
              cVar1 = puVar2[1];
            }
            else {
              uVar3 = FUN_004467b8(param_1);
              if ((int)uVar3 < 0) {
                local_60 = (undefined1 *)0x0;
                local_5c = 0;
                (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
                FUN_004467b8(param_1);
                FUN_00123be8(param_1,0);
                cVar1 = puVar2[1];
              }
              else {
                uVar3 = DAT_004462a4;
                if (param_8 < 0x81) {
                  uVar3 = FUN_00446560(param_1,0x6e,param_7);
                }
                if ((int)uVar3 < 0) {
                  local_60 = (undefined1 *)0x0;
                  local_5c = 0;
                  (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
                  FUN_004467b8(param_1);
                  FUN_00123be8(param_1,0);
                  cVar1 = puVar2[1];
                }
                else {
                  uVar3 = FUN_00446560(param_1,0x65,param_5,param_6);
                  if ((uVar3 & 0x80000000) == 0) {
                    *puVar2 = 1;
                    return 0;
                  }
                  local_60 = (undefined1 *)0x0;
                  local_5c = 0;
                  (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
                  FUN_004467b8(param_1);
                  FUN_00123be8(param_1,0);
                  cVar1 = puVar2[1];
                }
              }
            }
            if (cVar1 != '\0') {
              FUN_0012603c(0);
            }
            param_1[1] = 0;
            return uVar3;
          }
          if (puVar2[1] != '\0') {
            FUN_0012603c(0);
          }
          param_1[1] = 0;
          return DAT_0044629c;
        }
        goto LAB_00445f28;
      }
    }
  }
  FUN_0012603c(0);
LAB_00445f28:
  param_1[1] = 0;
  return uVar5;
}


