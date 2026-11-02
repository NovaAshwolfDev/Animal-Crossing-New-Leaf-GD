/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079957c. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_0079957c(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  if (param_3 == 4) {
    FUN_0079957c(param_1,param_2,5);
    FUN_0079957c(param_1,param_2,6);
  }
  else {
    if (param_3 != 3) {
      iVar3 = FUN_00636e3c();
      FUN_001b5c6c(auStack_40,DAT_00799cf0 + iVar3);
      puVar4 = (uint *)FUN_005a19a0(5);
      uVar12 = puVar4[1];
      uVar9 = *puVar4 & 0xffff;
      FUN_00756d40(auStack_3c);
      iVar3 = FUN_005a20f8(auStack_3c);
      iVar5 = FUN_00636e3c();
      bVar13 = *(byte *)(iVar5 + DAT_00799cf4) >> 4 == 0;
      if (param_3 != 1) {
        if (param_3 == 2) {
          local_38 = FUN_007aa548(auStack_40,5);
          local_34 = FUN_007aa580(auStack_40,5);
          local_30 = FUN_007aa5bc(auStack_40,5);
          local_2c = FUN_007aa5f8(auStack_40,5);
          uVar8 = 0;
          if (uVar12 != 0) {
            do {
              uVar10 = (uint)(*(byte *)(iVar3 + 0x1d) >> 4);
              if (0xd < uVar10) {
                uVar10 = 0;
              }
              if ((uVar10 == param_2) &&
                 ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
                bVar1 = *(byte *)(iVar3 + 0xd);
                if ((bVar1 < 0xae) && (bVar1 == 0x14)) {
                  uVar10 = FUN_0011df38(100);
                  if (uVar10 < local_38) goto LAB_00799a50;
                }
                else if ((bVar1 < 0xae) && (bVar1 == 0x15)) {
                  uVar10 = FUN_0011df38(100);
                  if (uVar10 < local_34) goto LAB_00799a50;
                }
                else if ((bVar1 < 0xae) && (bVar1 == 0x16)) {
                  uVar10 = FUN_0011df38(100);
                  if (uVar10 < local_30) {
LAB_00799a50:
                    uVar11 = (uVar9 + uVar8) - 0x2000;
                    uVar10 = uVar11 >> 5;
                    *(uint *)(param_1 + uVar10 * 4) =
                         *(uint *)(param_1 + uVar10 * 4) | 1 << (uVar11 & 0x1f);
                  }
                }
                else if (((bVar1 < 0xae) && (bVar1 == 0x17)) &&
                        (uVar10 = FUN_0011df38(100), uVar10 < local_2c)) goto LAB_00799a50;
              }
              uVar8 = uVar8 + 1;
              iVar3 = iVar3 + 0x22;
            } while (uVar8 < uVar12);
          }
          iVar3 = 0;
          uVar8 = 0;
          do {
            for (uVar10 = *(uint *)(param_1 + uVar8 * 4); uVar10 != 0; uVar10 = uVar10 >> 1) {
              if ((uVar10 & 1) != 0) {
                iVar3 = iVar3 + 1;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 0x8e);
          if (iVar3 != 0) {
            return auStack_40;
          }
          FUN_0079957c(param_1,param_2,5);
          iVar3 = 0;
          uVar8 = 0;
          do {
            for (uVar10 = *(uint *)(param_1 + uVar8 * 4); uVar10 != 0; uVar10 = uVar10 >> 1) {
              if ((uVar10 & 1) != 0) {
                iVar3 = iVar3 + 1;
              }
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < 0x8e);
          if (iVar3 != 0) {
            return auStack_40;
          }
          iVar3 = FUN_005a20f8(auStack_3c);
          uVar8 = 0;
          if (uVar12 == 0) {
            return auStack_40;
          }
          while( true ) {
            uVar10 = (uint)(*(byte *)(iVar3 + 0x1d) >> 4);
            if (0xd < uVar10) {
              uVar10 = 0;
            }
            if ((uVar10 == param_2) &&
               ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) break;
            uVar8 = uVar8 + 1;
            iVar3 = iVar3 + 0x22;
            if (uVar12 <= uVar8) {
              return auStack_40;
            }
          }
          uVar12 = (uVar9 + uVar8) - 0x2000;
          uVar9 = uVar12 >> 5;
          *(uint *)(param_1 + uVar9 * 4) = *(uint *)(param_1 + uVar9 * 4) | 1 << (uVar12 & 0x1f);
          return auStack_40;
        }
        if (param_3 == 5) {
          param_3 = FUN_007aa3fc(auStack_40,5);
        }
        else if (param_3 == 6) {
          param_3 = FUN_007aa4d4(auStack_40,5);
        }
        else if (param_3 == 7) {
          param_3 = FUN_007aa388(auStack_40,5);
        }
        else if (param_3 == 8) {
          param_3 = FUN_007aa460(auStack_40,5);
        }
        uVar8 = 0;
        if (uVar12 != 0) {
          do {
            bVar1 = *(byte *)(iVar3 + 0x1d);
            bVar2 = bVar1 >> 4;
            if (bVar2 < 0xe) {
              bVar1 = bVar1 >> 4;
            }
            uVar10 = (uint)bVar1;
            if (0xd < bVar2) {
              uVar10 = 0;
            }
            if (uVar10 == param_2) {
              uVar10 = (uint)*(byte *)(iVar3 + 0xd);
              if (0xad < uVar10) {
                uVar10 = 0;
              }
              if ((uVar10 == param_3) &&
                 ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
                uVar11 = (uVar9 + uVar8) - 0x2000;
                uVar10 = uVar11 >> 5;
                *(uint *)(param_1 + uVar10 * 4) =
                     *(uint *)(param_1 + uVar10 * 4) | 1 << (uVar11 & 0x1f);
              }
            }
            uVar8 = uVar8 + 1;
            iVar3 = iVar3 + 0x22;
          } while (uVar8 < uVar12);
        }
        iVar3 = 0;
        uVar8 = 0;
        do {
          for (uVar10 = *(uint *)(param_1 + uVar8 * 4); uVar10 != 0; uVar10 = uVar10 >> 1) {
            if ((uVar10 & 1) != 0) {
              iVar3 = iVar3 + 1;
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < 0x8e);
        if (iVar3 != 0) {
          return auStack_40;
        }
        iVar3 = FUN_005a20f8(auStack_3c);
        uVar8 = 0;
        if (uVar12 == 0) {
          return auStack_40;
        }
        do {
          bVar1 = *(byte *)(iVar3 + 0x1d);
          bVar2 = bVar1 >> 4;
          if (bVar2 < 0xe) {
            bVar1 = bVar1 >> 4;
          }
          uVar10 = (uint)bVar1;
          if (0xd < bVar2) {
            uVar10 = 0;
          }
          if (uVar10 == param_2) {
            uVar10 = (uint)*(byte *)(iVar3 + 0xd);
            if (0xad < uVar10) {
              uVar10 = 0;
            }
            if (uVar10 == param_3) goto LAB_007998f0;
          }
          uVar8 = uVar8 + 1;
          iVar3 = iVar3 + 0x22;
          if (uVar12 <= uVar8) {
            return auStack_40;
          }
        } while( true );
      }
      local_38 = FUN_007aa548(auStack_40,5);
      local_34 = FUN_007aa580(auStack_40,5);
      local_30 = FUN_007aa5bc(auStack_40,5);
      local_2c = FUN_007aa5f8(auStack_40,5);
      uVar8 = FUN_007aa460(auStack_40,5);
      uVar10 = 0;
      if (uVar12 != 0) {
        do {
          uVar11 = (uint)(*(byte *)(iVar3 + 0x1d) >> 4);
          if (0xd < uVar11) {
            uVar11 = 0;
          }
          if ((uVar11 == param_2) &&
             ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
            uVar7 = (uint)*(byte *)(iVar3 + 0xd);
            uVar11 = uVar7;
            if (0xad < uVar7) {
              uVar11 = 0;
            }
            if (uVar11 != uVar8) {
              if ((uVar7 < 0xae) && (uVar7 == 0x14)) {
                uVar11 = FUN_0011df38(100);
                if (uVar11 < local_38) goto LAB_00799800;
              }
              else if ((uVar7 < 0xae) && (uVar7 == 0x15)) {
                uVar11 = FUN_0011df38(100);
                if (uVar11 < local_34) goto LAB_00799800;
              }
              else if ((uVar7 < 0xae) && (uVar7 == 0x16)) {
                uVar11 = FUN_0011df38(100);
                if (uVar11 < local_30) {
LAB_00799800:
                  uVar7 = (uVar9 + uVar10) - 0x2000;
                  uVar11 = uVar7 >> 5;
                  *(uint *)(param_1 + uVar11 * 4) =
                       *(uint *)(param_1 + uVar11 * 4) | 1 << (uVar7 & 0x1f);
                }
              }
              else if ((uVar7 < 0xae) &&
                      ((uVar7 == 0x17 && (uVar11 = FUN_0011df38(100), uVar11 < local_2c))))
              goto LAB_00799800;
            }
          }
          uVar10 = uVar10 + 1;
          iVar3 = iVar3 + 0x22;
        } while (uVar10 < uVar12);
      }
      iVar3 = 0;
      uVar8 = 0;
      do {
        for (uVar10 = *(uint *)(param_1 + uVar8 * 4); uVar10 != 0; uVar10 = uVar10 >> 1) {
          if ((uVar10 & 1) != 0) {
            iVar3 = iVar3 + 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x8e);
      if (iVar3 != 0) {
        return auStack_40;
      }
      FUN_0079957c(param_1,param_2,5);
      iVar3 = 0;
      uVar8 = 0;
      do {
        for (uVar10 = *(uint *)(param_1 + uVar8 * 4); uVar10 != 0; uVar10 = uVar10 >> 1) {
          if ((uVar10 & 1) != 0) {
            iVar3 = iVar3 + 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 0x8e);
      if (iVar3 != 0) {
        return auStack_40;
      }
      iVar3 = FUN_005a20f8(auStack_3c);
      uVar8 = 0;
      if (uVar12 == 0) {
        return auStack_40;
      }
      while( true ) {
        uVar10 = (uint)(*(byte *)(iVar3 + 0x1d) >> 4);
        if (0xd < uVar10) {
          uVar10 = 0;
        }
        if ((uVar10 == param_2) && ((bVar13 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))
           ) break;
        uVar8 = uVar8 + 1;
        iVar3 = iVar3 + 0x22;
        if (uVar12 <= uVar8) {
          return auStack_40;
        }
      }
LAB_007998f0:
      uVar12 = (uVar9 + uVar8) - 0x2000;
      uVar9 = uVar12 >> 5;
      *(uint *)(param_1 + uVar9 * 4) = *(uint *)(param_1 + uVar9 * 4) | 1 << (uVar12 & 0x1f);
      return auStack_40;
    }
    puVar6 = (undefined1 *)FUN_0011df38(3);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = (undefined1 *)FUN_0079957c(param_1,param_2,5);
      return puVar6;
    }
    if (puVar6 == (undefined1 *)0x1) {
      puVar6 = (undefined1 *)FUN_0079957c(param_1,param_2,6);
      return puVar6;
    }
    if (puVar6 != &SUB_00000002) {
      return puVar6;
    }
  }
  puVar6 = (undefined1 *)FUN_0079957c(param_1,param_2,7);
  return puVar6;
}


