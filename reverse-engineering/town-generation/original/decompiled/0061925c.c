/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061925c. Provisional types; not original source or a verified portable implementation. */

void FUN_0061925c(int param_1)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_2e8 [640];
  int local_68;
  undefined1 *local_64;
  undefined4 uStack_60;
  undefined1 local_5c [31];
  undefined1 uStack_3d;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  undefined1 auStack_2c [8];
  
  local_38 = FUN_005cc158();
  iVar8 = 0;
  cVar2 = *(char *)(DAT_00619508 + param_1);
  local_30 = DAT_0061950c;
  do {
    if ((iVar8 != cVar2) && (iVar3 = FUN_007f3734(param_1), iVar3 != 0)) {
      uVar1 = *(ushort *)(DAT_00619510 + param_1);
      uVar4 = (uVar1 & 2) >> 1;
      if (((uVar4 == 0) || ((uVar1 & 1) != 0)) &&
         ((((uVar1 & 0x600) != 0x400 && (uVar4 == 0)) && ((uVar1 & 1) == 0)))) {
        uVar4 = FUN_007e7da4(param_1,7,0,local_38);
        if (uVar4 != 0xffffffff) {
          local_34 = FUN_00636e3c();
          local_34 = local_34 + 0x20;
          uVar7 = 0;
          do {
            iVar3 = FUN_002d57dc(local_34,uVar7 & 0xff);
            if (iVar3 != 0) {
              local_3c = iVar3 + 0x55a6;
              iVar5 = FUN_007aae1c();
              if (iVar5 != 0) {
                iVar5 = FUN_0061da90(param_1,local_3c);
                if ((((iVar5 != 0) && (*(char *)(iVar5 + 0xbc) < '\0')) &&
                    (((int)((uint)*(byte *)(DAT_00619514 + iVar3) << 0x1e) < 0 &&
                     (*(short *)(DAT_00619518 + iVar3) != 0)))) &&
                   ((-1 < (int)((uint)*(byte *)(iVar5 + 0xbb) << 0x1e) ||
                    (*(ushort *)(param_1 + (uVar7 & 0xff) * 2 + 0x2472) != uVar4)))) {
                  FUN_00638fa4(auStack_2e8);
                  local_64 = local_5c;
                  uStack_60 = 0x20;
                  uStack_3d = 0;
                  local_5c[0] = 0;
                  local_68 = local_30;
                  iVar3 = FUN_007f37b0(param_1);
                  FUN_005ae82c(&local_68,"Mail_%s_Npcbday",*(undefined4 *)(DAT_0061951c + iVar3 * 4)
                              );
                  uVar6 = FUN_007f37b0(param_1);
                  FUN_0015f1bc(auStack_2c,uVar6);
                  iVar3 = DAT_00619530;
                  uVar6 = *DAT_00619534;
                  uVar9 = DAT_00619534[1];
                  *(int *)(DAT_00619530 + 4) = param_1;
                  *(undefined4 *)(iVar3 + 8) = uVar6;
                  *(undefined4 *)(iVar3 + 0xc) = uVar9;
                  iVar3 = FUN_0011df34(3);
                  (**(code **)(local_68 + 8))(&local_68);
                  FUN_006388c4(auStack_2e8,local_64,iVar3 + 1,param_1,local_3c,auStack_2c,
                               DAT_00619530);
                  uVar6 = 3;
                  iVar3 = FUN_007e7244(param_1,0);
                  if (iVar3 != 0) {
                    uVar6 = 0;
                  }
                  iVar3 = FUN_0061ddf8(param_1,auStack_2e8,local_3c,uVar6,1,0);
                  if (iVar3 != 0) {
                    *(short *)(param_1 + (uVar7 & 0xff) * 2 + 0x2472) = (short)uVar4;
                    *(byte *)(iVar5 + 0xbb) = *(byte *)(iVar5 + 0xbb) | 2;
                  }
                  FUN_0011e268(auStack_2e8);
                }
              }
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < 4);
        }
      }
    }
    iVar8 = iVar8 + 1;
    param_1 = param_1 + 0x24f8;
  } while (iVar8 < 10);
  return;
}


