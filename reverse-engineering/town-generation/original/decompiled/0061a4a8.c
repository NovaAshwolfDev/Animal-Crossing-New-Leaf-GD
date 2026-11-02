/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061a4a8. Provisional types; not original source or a verified portable implementation. */

void FUN_0061a4a8(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar3 = *(int *)(DAT_0061a87c + 0x234);
  if ((((((iVar3 != 0) && ((*(byte *)(DAT_0061a880 + iVar3) & 1) == 0)) &&
        ((int)((uint)*(byte *)(iVar3 + 0x56f9) << 0x1e) < 0)) &&
       ((iVar3 = FUN_005ede08(1), iVar3 == 0 && (iVar3 = FUN_005ee68c(0x24), iVar3 == 0)))) &&
      ((iVar3 = FUN_005ee68c(0x23), iVar3 == 0 || (uVar4 = FUN_005812e8(), 9 < uVar4)))) &&
     (iVar3 = FUN_0011df34(100), iVar3 < 10)) {
    iVar8 = 0;
    uVar9 = 0;
    uVar4 = 0;
    iVar3 = param_1;
    do {
      local_34 = FUN_00582e64(uVar4);
      iVar5 = FUN_007f3734(iVar3);
      if (((iVar5 != 0) && ((*(ushort *)(iVar3 + 0x24f0) & 1) == 0)) &&
         ((*(ushort *)(iVar3 + 0x24f0) & 2) == 0)) {
        FUN_007e5a64(&local_3c,param_1,iVar3,0,1,0,0);
        local_30 = local_3c;
        uStack_2c = uStack_38;
        iVar5 = 0;
        uVar6 = 0;
        do {
          if ((*(byte *)((int)&local_30 + (uVar6 >> 3)) >> (uVar6 & 7) & 1) == 1) {
            iVar5 = iVar5 + 1;
          }
          do {
            uVar6 = uVar6 + 1;
            if (0x20 < uVar6) {
              if ((((iVar5 == 0) && (local_34 != 0)) && (*(int *)(local_34 + 0x44) == 0)) &&
                 (((iVar5 = FUN_007e8294(iVar3,0), iVar5 == 0 && (*(char *)(iVar3 + 0x24f3) != -1))
                  && ((uVar4 < 10 && (uVar6 = 1 << (uVar4 & 0xff), (uVar9 & uVar6) == 0)))))) {
                iVar8 = iVar8 + 1;
                uVar9 = uVar9 | uVar6;
              }
              goto LAB_0061a658;
            }
          } while (0x20 < uVar6);
        } while( true );
      }
LAB_0061a658:
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x24f8;
    } while ((int)uVar4 < 10);
    if ((((*(byte *)(DAT_0061a884 + param_1) & 0xf) == 0) &&
        (*(byte *)(DAT_0061a888 + param_1) < 10)) &&
       (uVar4 = 1 << (uint)*(byte *)(DAT_0061a888 + param_1), (uVar9 & uVar4) != 0)) {
      iVar8 = iVar8 + -1;
      uVar9 = uVar9 & ~uVar4;
    }
    if (1 < iVar8) {
      uVar4 = 0xffffffff;
      uVar6 = 0xffffffff;
      uVar7 = 0;
      iVar8 = 0;
      iVar3 = param_1;
      do {
        if (((uVar7 < 10) && ((uVar9 & 1 << (uVar7 & 0xff)) != 0)) &&
           ((iVar8 == 0 || (iVar5 = FUN_0011df34(100), iVar5 < 0x32)))) {
          iVar5 = FUN_0011df34(100);
          if (iVar5 < 0x32) {
            uVar6 = (int)*(char *)(iVar3 + 0x24f3);
            uVar4 = uVar7;
          }
          else {
            uVar4 = (uint)*(char *)(iVar3 + 0x24f3);
            uVar6 = uVar7;
          }
          if (((uVar4 < 10) && (uVar1 = 1 << (uVar4 & 0xff), (uVar9 & uVar1) != 0 && uVar6 < 10)) &&
             (uVar2 = 1 << (uVar6 & 0xff), (uVar9 & uVar2) != 0)) {
            uVar9 = uVar9 & ~uVar1;
            if ((uVar9 & uVar2) != 0) {
              uVar9 = uVar9 & ~uVar2;
            }
            if (iVar8 != 0) break;
            iVar8 = 1;
          }
          else {
            if ((uVar4 < 10) && (uVar4 = 1 << (uVar4 & 0xff), (uVar9 & uVar4) != 0)) {
              uVar9 = uVar9 & ~uVar4;
            }
            if ((uVar6 < 10) && (uVar4 = 1 << (uVar6 & 0xff), (uVar9 & uVar4) != 0)) {
              uVar9 = uVar9 & ~uVar4;
            }
            uVar4 = 0xffffffff;
            uVar6 = 0xffffffff;
          }
        }
        uVar7 = uVar7 + 1;
        iVar3 = iVar3 + 0x24f8;
      } while ((int)uVar7 < 10);
      if (uVar4 != 0xffffffff && uVar6 != 0xffffffff) {
        if (((9 < uVar4) || (iVar3 = param_1 + uVar4 * DAT_0061a88c * 8, iVar3 == 0)) ||
           (iVar8 = FUN_007f3768(iVar3), iVar8 == 0)) {
          iVar3 = 0;
        }
        if (((9 < uVar6) || (param_1 = param_1 + uVar6 * DAT_0061a88c * 8, param_1 == 0)) ||
           (iVar8 = FUN_007f3768(param_1), iVar8 == 0)) {
          param_1 = 0;
        }
        iVar8 = FUN_00582e64(uVar4);
        iVar5 = FUN_00582e64(uVar6);
        if ((iVar3 != 0 && param_1 != 0) && (iVar8 != 0 && iVar5 != 0)) {
          (&DAT_000024ef)[iVar3] = 2;
          (&DAT_000024ef)[param_1] = 3;
          *(uint *)(iVar8 + 0x44) = *(uint *)(iVar8 + 0x44) | 0x10;
          *(uint *)(iVar5 + 0x44) = *(uint *)(iVar5 + 0x44) | 8;
        }
      }
    }
  }
  return;
}


