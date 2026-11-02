/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079aa00. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0079aa00(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  uint local_44;
  uint local_40;
  uint local_3c;
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  iStack_28 = param_4;
  puVar2 = (uint *)FUN_005a19a0(param_2);
  uVar11 = puVar2[1];
  uVar12 = *puVar2 & 0xffff;
  FUN_00756d40(auStack_48,uVar12);
  iVar3 = FUN_005a20f8(auStack_48);
  iVar4 = FUN_00636e3c();
  bVar13 = (param_4 - 1U & (uint)(*(byte *)(iVar4 + DAT_0079ae54) >> 4)) == 0;
  iVar4 = FUN_00636e3c();
  FUN_001b5c6c(auStack_4c,DAT_0079ae58 + iVar4);
  uVar5 = FUN_007aa548(auStack_4c,local_30);
  local_44 = FUN_007aa580(auStack_4c,local_30);
  local_40 = FUN_007aa5bc(auStack_4c,local_30);
  local_3c = FUN_007aa5f8(auStack_4c,local_30);
  if (param_3 == 2) {
    uVar10 = FUN_007aa460(auStack_4c,local_30);
    uVar7 = 0;
    if (uVar11 != 0) {
      do {
        uVar8 = (uint)*(byte *)(iVar3 + 0xd);
        if (0xad < uVar8) {
          uVar8 = 0;
        }
        if (((uVar8 != uVar10) && (iVar4 = FUN_007dcca4(iVar3), iVar4 == 0)) &&
           ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
          bVar1 = *(byte *)(iVar3 + 0xd);
          if ((bVar1 < 0xae) && (bVar1 == 0x14)) {
            uVar8 = FUN_0011df38(100);
            if (uVar8 < uVar5) goto LAB_0079abd8;
          }
          else if ((bVar1 < 0xae) && (bVar1 == 0x15)) {
            uVar8 = FUN_0011df38(100);
            if (uVar8 < local_44) goto LAB_0079abd8;
          }
          else if ((bVar1 < 0xae) && (bVar1 == 0x16)) {
            uVar8 = FUN_0011df38(100);
            if (uVar8 < local_40) {
LAB_0079abd8:
              uVar6 = (uVar12 + uVar7) - 0x2000;
              uVar8 = uVar6 >> 5;
              *(uint *)(param_1 + uVar8 * 4) = *(uint *)(param_1 + uVar8 * 4) | 1 << (uVar6 & 0x1f);
            }
          }
          else if ((bVar1 < 0xae) &&
                  ((bVar1 == 0x17 && (uVar8 = FUN_0011df38(100), uVar8 < local_3c))))
          goto LAB_0079abd8;
        }
        uVar7 = uVar7 + 1;
        iVar3 = iVar3 + 0x22;
      } while (uVar7 < uVar11);
    }
  }
  else {
    uVar10 = 0;
    if (uVar11 != 0) {
      do {
        iVar4 = FUN_007dcca4(iVar3);
        if ((iVar4 == 0) && ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
          bVar1 = *(byte *)(iVar3 + 0xd);
          if ((bVar1 < 0xae) && (bVar1 == 0x14)) {
            uVar7 = FUN_0011df38(100);
            if (uVar7 < uVar5) {
LAB_0079acac:
              uVar8 = (uVar12 + uVar10) - 0x2000;
              uVar7 = uVar8 >> 5;
              *(uint *)(param_1 + uVar7 * 4) = *(uint *)(param_1 + uVar7 * 4) | 1 << (uVar8 & 0x1f);
            }
          }
          else if ((bVar1 < 0xae) && (bVar1 == 0x15)) {
            uVar7 = FUN_0011df38(100);
            if (uVar7 < local_44) goto LAB_0079acac;
          }
          else if ((bVar1 < 0xae) && (bVar1 == 0x16)) {
            uVar7 = FUN_0011df38(100);
            if (uVar7 < local_40) goto LAB_0079acac;
          }
          else if (((bVar1 < 0xae) && (bVar1 == 0x17)) &&
                  (uVar7 = FUN_0011df38(100), uVar7 < local_3c)) {
            uVar8 = (uVar12 + uVar10) - 0x2000;
            uVar7 = uVar8 >> 5;
            *(uint *)(param_1 + uVar7 * 4) = *(uint *)(param_1 + uVar7 * 4) | 1 << (uVar8 & 0x1f);
          }
        }
        uVar10 = uVar10 + 1;
        iVar3 = iVar3 + 0x22;
      } while (uVar10 < uVar11);
    }
  }
  iVar3 = 0;
  uVar5 = 0;
  do {
    for (uVar10 = *(uint *)(param_1 + uVar5 * 4); uVar10 != 0; uVar10 = uVar10 >> 1) {
      if ((uVar10 & 1) != 0) {
        iVar3 = iVar3 + 1;
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x8e);
  if (iVar3 == 0) {
    uVar9 = FUN_007aa3fc(auStack_4c,local_30);
    FUN_0079a704(param_1,local_30,uVar9,1,param_4);
    iVar3 = 0;
    uVar5 = 0;
    do {
      for (uVar10 = *(uint *)(param_1 + uVar5 * 4); uVar10 != 0; uVar10 = uVar10 >> 1) {
        if ((uVar10 & 1) != 0) {
          iVar3 = iVar3 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x8e);
    if (iVar3 == 0) {
      iVar3 = FUN_005a20f8(auStack_48);
      uVar5 = 0;
      if (uVar11 != 0) {
        do {
          iVar4 = FUN_007dcca4(iVar3);
          if ((iVar4 == 0) && ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
            uVar11 = (uVar12 + uVar5) - 0x2000;
            uVar5 = uVar11 >> 5;
            *(uint *)(param_1 + uVar5 * 4) = *(uint *)(param_1 + uVar5 * 4) | 1 << (uVar11 & 0x1f);
            return 0;
          }
          uVar5 = uVar5 + 1;
          iVar3 = iVar3 + 0x22;
        } while (uVar5 < uVar11);
      }
    }
    return 0;
  }
  return 1;
}


