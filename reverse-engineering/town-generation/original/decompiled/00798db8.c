/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00798db8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00798db8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  uint local_40;
  uint local_3c;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  int iStack_2c;
  int local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  puVar2 = (uint *)FUN_005a19a0(param_2);
  uVar12 = puVar2[1];
  uVar8 = *puVar2 & 0xffff;
  FUN_00756d40(auStack_44);
  iVar3 = FUN_005a20f8(auStack_44);
  iVar4 = FUN_00636e3c();
  bVar13 = (local_28 - 1U & (uint)(*(byte *)(iVar4 + DAT_00799258) >> 4)) == 0;
  iVar4 = FUN_00636e3c();
  FUN_001b5c6c(auStack_48,DAT_0079925c + iVar4);
  uVar5 = FUN_007aa548(auStack_48,local_30);
  local_40 = FUN_007aa580(auStack_48,local_30);
  local_38 = FUN_007aa5bc(auStack_48,local_30);
  local_3c = FUN_007aa5f8(auStack_48,local_30);
  if (param_3 == 2) {
    uVar11 = FUN_007aa460(auStack_48,local_30);
    uVar6 = 0;
    if (uVar12 != 0) {
      do {
        uVar9 = (uint)*(byte *)(iVar3 + 0xd);
        uVar10 = uVar9;
        if (0xad < uVar9) {
          uVar10 = 0;
        }
        if (uVar10 != uVar11) {
          if (((uVar9 < 0xae) && (uVar9 == 0x14)) &&
             ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
            uVar10 = FUN_0011df38(100);
            if (uVar10 < uVar5) {
              uVar9 = (uVar8 + uVar6) - 0x2000;
              uVar10 = uVar9 >> 5;
              *(uint *)(param_1 + uVar10 * 4) =
                   *(uint *)(param_1 + uVar10 * 4) | 1 << (uVar9 & 0x1f);
            }
          }
          else if (((uVar9 < 0xae) && (uVar9 == 0x15)) &&
                  ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
            uVar10 = FUN_0011df38(100);
            if (uVar10 < local_40) goto LAB_00798fd4;
          }
          else if (((uVar9 < 0xae) && (uVar9 == 0x16)) &&
                  ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
            uVar10 = FUN_0011df38(100);
            if (uVar10 < local_38) {
LAB_00798fd4:
              uVar9 = (uVar8 + uVar6) - 0x2000;
              uVar10 = uVar9 >> 5;
              *(uint *)(param_1 + uVar10 * 4) =
                   *(uint *)(param_1 + uVar10 * 4) | 1 << (uVar9 & 0x1f);
            }
          }
          else if ((((uVar9 < 0xae) && (uVar9 == 0x17)) &&
                   ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) &&
                  (uVar10 = FUN_0011df38(100), uVar10 < local_3c)) goto LAB_00798fd4;
        }
        uVar6 = uVar6 + 1;
        iVar3 = iVar3 + 0x22;
      } while (uVar6 < uVar12);
    }
  }
  else {
    uVar11 = 0;
    if (uVar12 != 0) {
      do {
        bVar1 = *(byte *)(iVar3 + 0xd);
        if (((bVar1 < 0xae) && (bVar1 == 0x14)) &&
           ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
          uVar6 = FUN_0011df38(100);
          if (uVar6 < uVar5) {
LAB_007990a8:
            uVar10 = (uVar8 + uVar11) - 0x2000;
            uVar6 = uVar10 >> 5;
            *(uint *)(param_1 + uVar6 * 4) = *(uint *)(param_1 + uVar6 * 4) | 1 << (uVar10 & 0x1f);
          }
        }
        else if (((bVar1 < 0xae) && (bVar1 == 0x15)) &&
                ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
          uVar6 = FUN_0011df38(100);
          if (uVar6 < local_40) goto LAB_007990a8;
        }
        else if (((bVar1 < 0xae) && (bVar1 == 0x16)) &&
                ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
          uVar6 = FUN_0011df38(100);
          if (uVar6 < local_38) goto LAB_007990a8;
        }
        else if (((bVar1 < 0xae) && (bVar1 == 0x17)) &&
                (((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))) &&
                 (uVar6 = FUN_0011df38(100), uVar6 < local_3c)))) {
          uVar10 = (uVar8 + uVar11) - 0x2000;
          uVar6 = uVar10 >> 5;
          *(uint *)(param_1 + uVar6 * 4) = *(uint *)(param_1 + uVar6 * 4) | 1 << (uVar10 & 0x1f);
        }
        uVar11 = uVar11 + 1;
        iVar3 = iVar3 + 0x22;
      } while (uVar11 < uVar12);
    }
  }
  iVar3 = 0;
  uVar5 = 0;
  do {
    for (uVar11 = *(uint *)(param_1 + uVar5 * 4); uVar11 != 0; uVar11 = uVar11 >> 1) {
      if ((uVar11 & 1) != 0) {
        iVar3 = iVar3 + 1;
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x8e);
  if (iVar3 != 0) {
    return 1;
  }
  uVar7 = FUN_007aa3fc(auStack_48,local_30);
  FUN_0079822c(param_1,local_30,uVar7,local_28);
  iVar3 = 0;
  uVar5 = 0;
  do {
    for (uVar11 = *(uint *)(param_1 + uVar5 * 4); uVar11 != 0; uVar11 = uVar11 >> 1) {
      if ((uVar11 & 1) != 0) {
        iVar3 = iVar3 + 1;
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x8e);
  if (iVar3 == 0) {
    iVar3 = FUN_005a20f8(auStack_44);
    uVar5 = 0;
    if (uVar12 != 0) {
      if (bVar13) {
LAB_00799204:
        uVar8 = (uVar8 + uVar5) - 0x2000;
        uVar5 = uVar8 >> 5;
        *(uint *)(param_1 + uVar5 * 4) = *(uint *)(param_1 + uVar5 * 4) | 1 << (uVar8 & 0x1f);
      }
      else {
        do {
          if (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19)) goto LAB_00799204;
          uVar5 = uVar5 + 1;
          iVar3 = iVar3 + 0x22;
        } while (uVar5 < uVar12);
      }
    }
  }
  return 0;
}


