/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00798548. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_00798548(int param_1,uint param_2)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  puVar2 = (uint *)FUN_005a19a0(5);
  uVar9 = puVar2[1];
  uVar11 = *puVar2 & 0xffff;
  FUN_00756d40(auStack_3c,uVar11);
  iVar3 = FUN_005a20f8(auStack_3c);
  iVar4 = FUN_00636e3c();
  bVar12 = *(byte *)(iVar4 + DAT_00798cb4) >> 4 == 0;
  iVar4 = FUN_00636e3c();
  FUN_001b5c6c(auStack_40,DAT_00798cb8 + iVar4);
  local_38 = FUN_007aa548(auStack_40,5);
  local_34 = FUN_007aa580(auStack_40,5);
  local_30 = FUN_007aa5bc(auStack_40,5);
  local_2c = FUN_007aa5f8(auStack_40,5);
  if (param_2 == 2) {
    uVar10 = FUN_007aa460(auStack_40,5);
    uVar7 = 0;
    if (uVar9 != 0) {
      do {
        iVar4 = FUN_007dcc18(iVar3);
        if (iVar4 == 0) {
          uVar5 = (uint)*(byte *)(iVar3 + 0xd);
          uVar8 = uVar5;
          if (0xad < uVar5) {
            uVar8 = 0;
          }
          if ((uVar8 != uVar10) && ((bVar12 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))
             ) {
            if ((uVar5 < 0xae) && (uVar5 == 0x14)) {
              uVar8 = FUN_0011df38(100);
              if (uVar8 < local_38) goto LAB_00798728;
            }
            else if ((uVar5 < 0xae) && (uVar5 == 0x15)) {
              uVar8 = FUN_0011df38(100);
              if (uVar8 < local_34) goto LAB_00798728;
            }
            else if ((uVar5 < 0xae) && (uVar5 == 0x16)) {
              uVar8 = FUN_0011df38(100);
              if (uVar8 < local_30) {
LAB_00798728:
                uVar5 = (uVar11 + uVar7) - 0x2000;
                uVar8 = uVar5 >> 5;
                *(uint *)(param_1 + uVar8 * 4) =
                     *(uint *)(param_1 + uVar8 * 4) | 1 << (uVar5 & 0x1f);
              }
            }
            else if (((uVar5 < 0xae) && (uVar5 == 0x17)) &&
                    (uVar8 = FUN_0011df38(100), uVar8 < local_2c)) goto LAB_00798728;
          }
        }
        uVar7 = uVar7 + 1;
        iVar3 = iVar3 + 0x22;
      } while (uVar7 < uVar9);
    }
    iVar4 = 0;
    uVar10 = 0;
    do {
      for (uVar7 = *(uint *)(param_1 + uVar10 * 4); uVar7 != 0; uVar7 = uVar7 >> 1) {
        if ((uVar7 & 1) != 0) {
          iVar4 = iVar4 + 1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x8e);
    if (iVar4 != 0) goto LAB_00798c98;
    iVar4 = FUN_005a20f8(auStack_3c);
    local_38 = FUN_007aa3fc(auStack_40,5);
    uVar10 = 0;
    if (uVar9 != 0) {
      do {
        iVar6 = FUN_007dcc18(iVar4);
        if (iVar6 == 0) {
          uVar7 = (uint)*(byte *)(iVar4 + 0xd);
          if (0xad < uVar7) {
            uVar7 = 0;
          }
          if ((uVar7 == local_38) &&
             ((bVar12 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
            uVar8 = (uVar11 + uVar10) - 0x2000;
            uVar7 = uVar8 >> 5;
            *(uint *)(param_1 + uVar7 * 4) = *(uint *)(param_1 + uVar7 * 4) | 1 << (uVar8 & 0x1f);
          }
        }
        uVar10 = uVar10 + 1;
        iVar4 = iVar4 + 0x22;
      } while (uVar10 < uVar9);
    }
    iVar4 = 0;
    uVar10 = 0;
    do {
      for (uVar7 = *(uint *)(param_1 + uVar10 * 4); uVar7 != 0; uVar7 = uVar7 >> 1) {
        if ((uVar7 & 1) != 0) {
          iVar4 = iVar4 + 1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x8e);
    if (((iVar4 != 0) || (FUN_005a20f8(auStack_3c), uVar9 == 0)) ||
       (iVar4 = FUN_007dcc18(), iVar4 != 0)) goto LAB_00798c98;
    if (!bVar12) {
      bVar1 = *(byte *)(iVar3 + 0x1f);
joined_r0x00798894:
      if ((int)((uint)bVar1 << 0x19) < 0) goto LAB_00798c98;
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 5) {
        param_2 = FUN_007aa3fc(auStack_40,5);
      }
      else if (param_2 == 6) {
        param_2 = FUN_007aa4d4(auStack_40,5);
      }
      else if (param_2 == 7) {
        param_2 = FUN_007aa388(auStack_40,5);
      }
      else if (param_2 == 8) {
        param_2 = FUN_007aa460(auStack_40,5);
      }
      uVar10 = 0;
      if (uVar9 != 0) {
        do {
          iVar4 = FUN_007dcc18(iVar3);
          if (iVar4 == 0) {
            uVar7 = (uint)*(byte *)(iVar3 + 0xd);
            if (0xad < uVar7) {
              uVar7 = 0;
            }
            if ((uVar7 == param_2) &&
               ((bVar12 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
              uVar8 = (uVar11 + uVar10) - 0x2000;
              uVar7 = uVar8 >> 5;
              *(uint *)(param_1 + uVar7 * 4) = *(uint *)(param_1 + uVar7 * 4) | 1 << (uVar8 & 0x1f);
            }
          }
          uVar10 = uVar10 + 1;
          iVar3 = iVar3 + 0x22;
        } while (uVar10 < uVar9);
      }
      iVar3 = 0;
      uVar10 = 0;
      do {
        for (uVar7 = *(uint *)(param_1 + uVar10 * 4); uVar7 != 0; uVar7 = uVar7 >> 1) {
          if ((uVar7 & 1) != 0) {
            iVar3 = iVar3 + 1;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < 0x8e);
      if (iVar3 == 0) {
        iVar3 = FUN_005a20f8(auStack_3c);
        uVar10 = 0;
        if (uVar9 != 0) {
          do {
            iVar4 = FUN_007dcc18(iVar3);
            if ((iVar4 == 0) && ((bVar12 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
              uVar8 = (uVar11 + uVar10) - 0x2000;
              uVar7 = uVar8 >> 5;
              *(uint *)(param_1 + uVar7 * 4) = *(uint *)(param_1 + uVar7 * 4) | 1 << (uVar8 & 0x1f);
            }
            uVar10 = uVar10 + 1;
            iVar3 = iVar3 + 0x22;
          } while (uVar10 < uVar9);
        }
      }
      goto LAB_00798c98;
    }
    uVar10 = 0;
    if (uVar9 != 0) {
      do {
        iVar4 = FUN_007dcc18(iVar3);
        if ((iVar4 == 0) && ((bVar12 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
          bVar1 = *(byte *)(iVar3 + 0xd);
          if ((bVar1 < 0xae) && (bVar1 == 0x14)) {
            uVar7 = FUN_0011df38(100);
            if (uVar7 < local_38) {
LAB_0079897c:
              uVar8 = (uVar11 + uVar10) - 0x2000;
              uVar7 = uVar8 >> 5;
              *(uint *)(param_1 + uVar7 * 4) = *(uint *)(param_1 + uVar7 * 4) | 1 << (uVar8 & 0x1f);
            }
          }
          else if ((bVar1 < 0xae) && (bVar1 == 0x15)) {
            uVar7 = FUN_0011df38(100);
            if (uVar7 < local_34) goto LAB_0079897c;
          }
          else if ((bVar1 < 0xae) && (bVar1 == 0x16)) {
            uVar7 = FUN_0011df38(100);
            if (uVar7 < local_30) goto LAB_0079897c;
          }
          else if (((bVar1 < 0xae) && (bVar1 == 0x17)) &&
                  (uVar7 = FUN_0011df38(100), uVar7 < local_2c)) {
            uVar8 = (uVar11 + uVar10) - 0x2000;
            uVar7 = uVar8 >> 5;
            *(uint *)(param_1 + uVar7 * 4) = *(uint *)(param_1 + uVar7 * 4) | 1 << (uVar8 & 0x1f);
          }
        }
        uVar10 = uVar10 + 1;
        iVar3 = iVar3 + 0x22;
      } while (uVar10 < uVar9);
    }
    iVar4 = 0;
    uVar10 = 0;
    do {
      for (uVar7 = *(uint *)(param_1 + uVar10 * 4); uVar7 != 0; uVar7 = uVar7 >> 1) {
        if ((uVar7 & 1) != 0) {
          iVar4 = iVar4 + 1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x8e);
    if (iVar4 != 0) goto LAB_00798c98;
    iVar4 = FUN_005a20f8(auStack_3c);
    local_38 = FUN_007aa3fc(auStack_40,5);
    uVar10 = 0;
    if (uVar9 != 0) {
      do {
        iVar6 = FUN_007dcc18(iVar4);
        if (iVar6 == 0) {
          uVar7 = (uint)*(byte *)(iVar4 + 0xd);
          if (0xad < uVar7) {
            uVar7 = 0;
          }
          if ((uVar7 == local_38) &&
             ((bVar12 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
            uVar8 = (uVar11 + uVar10) - 0x2000;
            uVar7 = uVar8 >> 5;
            *(uint *)(param_1 + uVar7 * 4) = *(uint *)(param_1 + uVar7 * 4) | 1 << (uVar8 & 0x1f);
          }
        }
        uVar10 = uVar10 + 1;
        iVar4 = iVar4 + 0x22;
      } while (uVar10 < uVar9);
    }
    iVar4 = 0;
    uVar10 = 0;
    do {
      for (uVar7 = *(uint *)(param_1 + uVar10 * 4); uVar7 != 0; uVar7 = uVar7 >> 1) {
        if ((uVar7 & 1) != 0) {
          iVar4 = iVar4 + 1;
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 0x8e);
    if (((iVar4 != 0) || (FUN_005a20f8(auStack_3c), uVar9 == 0)) ||
       (iVar4 = FUN_007dcc18(), iVar4 != 0)) goto LAB_00798c98;
    if (!bVar12) {
      bVar1 = *(byte *)(iVar3 + 0x1f);
      goto joined_r0x00798894;
    }
  }
  uVar9 = uVar11 - 0x2000 >> 5;
  *(uint *)(param_1 + uVar9 * 4) = *(uint *)(param_1 + uVar9 * 4) | 1 << (uVar11 - 0x2000 & 0x1f);
LAB_00798c98:
  return auStack_3c;
}


