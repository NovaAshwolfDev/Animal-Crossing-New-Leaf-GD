/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00613c78. Provisional types; not original source or a verified portable implementation. */

void FUN_00613c78(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  uint local_80;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  byte *local_34;
  int local_30;
  int local_2c;
  
  puVar3 = (undefined4 *)FUN_005cc158();
  iVar1 = DAT_006149cc;
  local_3c = puVar3[1];
  local_40 = *puVar3;
  local_38 = puVar3[2];
  iVar9 = *(int *)(DAT_006149cc + 0x234);
  iVar4 = FUN_0057fe0c();
  if (iVar4 != 0) {
    iVar4 = FUN_006aef10();
    if ((((iVar4 == 0) && (iVar4 = FUN_005ee3a4(), iVar4 == 0x25)) &&
        (iVar4 = FUN_0062efcc(0), iVar4 != 0)) &&
       (((int)((uint)*(byte *)(DAT_006149d0 + iVar4) << 0x1e) < 0 &&
        ((int)((uint)*(byte *)(iVar4 + 0x56fc) << 0x1e) < 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_0063653c();
    }
    iVar4 = FUN_006aef10();
    if (((iVar4 == 0) && (iVar4 = FUN_00289338(0x4e), iVar4 != 0)) &&
       ((iVar4 = FUN_005ee3a4(), iVar4 == 0x25 &&
        ((iVar4 = FUN_0062efcc(0), iVar4 != 0 &&
         ((int)((uint)*(byte *)(iVar4 + 0x56f9) << 0x1e) < 0)))))) {
      FUN_005cc158();
                    /* WARNING: Subroutine does not return */
      FUN_0063653c();
    }
  }
  uVar8 = 0;
  do {
    if (uVar8 < 10) {
      iVar4 = param_1 + uVar8 * DAT_006149d8 * 8;
      if ((iVar4 != 0) && (iVar5 = FUN_007f3768(iVar4), iVar5 != 0)) goto LAB_00613eac;
    }
    else {
      iVar4 = 0;
LAB_00613eac:
      if ((iVar4 != 0) && (iVar4 = FUN_007e7244(iVar4,0), iVar4 != 0)) break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 10);
  if ((*(byte *)(DAT_006149dc + param_1) & 0xf) == 0) {
    uVar8 = (uint)*(char *)(DAT_006149e0 + param_1);
  }
  else {
    uVar8 = 0xffffffff;
  }
  local_60 = 0xffffffff;
  local_68 = 0xffffffff;
  local_64 = 0xffffffff;
  if (iVar9 != 0) {
    uVar6 = FUN_007eb480(iVar9 + 0x8abe);
    bVar10 = uVar6 != 0;
    if (bVar10) {
      uVar6 = (uint)*(byte *)(iVar9 + 0x8ac7);
    }
    if (bVar10 && uVar6 != 3) {
      local_60 = (uint)*(char *)(iVar9 + 0x8aca);
      local_68 = (uint)*(char *)(iVar9 + 0x8ac9);
    }
  }
  iVar9 = param_1 + DAT_006149e4;
  iVar4 = FUN_007ec0b4(iVar9);
  if (iVar4 == 0) {
    local_64 = (uint)*(char *)(iVar9 + 0x21);
  }
  FUN_005ee68c(0xd);
  local_80 = 0;
  iVar4 = param_1;
  do {
    iVar9 = FUN_007f3734(iVar4);
    if ((iVar9 != 0) && (local_34 = (byte *)(iVar4 + 0x24ee), *local_34 < 2)) {
      (&DAT_000024ef)[iVar4] = 0x18;
      iVar9 = FUN_00582e64(local_80);
      if (iVar9 != 0) {
        *(byte *)(iVar9 + 1) = *(byte *)(iVar9 + 1) & 0xdf;
        if ((*(uint *)(iVar9 + 0x44) & 0x20) == 0) {
          uVar6 = local_60;
          if (local_60 != local_80) {
            uVar6 = local_64;
          }
          if (local_60 == local_80 || uVar6 == local_80) goto LAB_006143fc;
          if ((*(uint *)(iVar9 + 0x44) & 0x40) == 0) {
            uVar6 = 0;
            do {
              if (uVar6 < 10) {
                iVar9 = param_1 + uVar6 * DAT_006149d8 * 8;
                if ((iVar9 != 0) && (iVar5 = FUN_007f3768(iVar9), iVar5 != 0)) goto LAB_00614048;
              }
              else {
                iVar9 = 0;
LAB_00614048:
                if ((iVar9 != 0) && (iVar9 = FUN_007e7244(iVar9,0), iVar9 != 0)) goto LAB_00614074;
              }
              uVar6 = uVar6 + 1;
            } while ((int)uVar6 < 10);
            uVar6 = 0xffffffff;
LAB_00614074:
            if (uVar6 < 10) {
              iVar9 = param_1 + uVar6 * DAT_006149d8 * 8;
              if ((iVar9 != 0) && (iVar5 = FUN_007f3768(iVar9), iVar5 != 0)) goto LAB_006140a4;
            }
            else {
              iVar9 = 0;
LAB_006140a4:
              if ((iVar9 != 0) &&
                 (((*(int *)(iVar1 + 0x234) != 0 &&
                   (iVar9 = FUN_007e7160(iVar9,*(int *)(iVar1 + 0x234) + 0x55a6), iVar9 != 0)) &&
                  ((int)((uint)*(byte *)(iVar9 + 0xbb) << 0x1e) < 0)))) {
                    /* WARNING: Subroutine does not return */
                FUN_0063653c();
              }
            }
            iVar9 = FUN_007e8294(iVar4,&local_40);
            if (iVar9 == 0) {
              if ((uVar8 != local_80) && (local_68 != local_80)) {
                local_30 = iVar4 + 0x2400;
                if (((*(ushort *)(iVar4 + 0x24f0) & 1) == 0) &&
                   ((*(ushort *)(iVar4 + 0x24f0) & 2) == 0)) {
                  local_2c = *(int *)(iVar1 + 0x234);
                  if (local_2c != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0063653c();
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_0063653c();
                }
              }
            }
            else {
              iVar9 = FUN_006a990c();
              if (iVar9 == 0) {
                iVar9 = *(int *)(iVar1 + 0x234);
              }
              else {
                iVar9 = FUN_0062efcc();
              }
              if (iVar9 == 0) {
LAB_006141ec:
                if (local_80 < 10) {
                  iVar9 = param_1 + local_80 * DAT_006149d8 * 8;
                  if ((iVar9 != 0) && (iVar5 = FUN_007f3768(iVar9), iVar5 != 0)) goto LAB_0061421c;
                }
                else {
                  iVar9 = 0;
LAB_0061421c:
                  if ((iVar9 != 0) && (iVar9 = FUN_006aef10(), iVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
                    FUN_0063653c();
                  }
                }
                uVar2 = 0x17;
                goto LAB_00614654;
              }
              if (((int)((uint)*(byte *)(DAT_006149d0 + iVar9) << 0x1e) < 0) &&
                 ((int)*(char *)(*DAT_006149e8 + 0x9a) != local_80)) {
                uVar7 = FUN_005cc158();
                iVar5 = FUN_005ed250(1,uVar7);
                if ((iVar5 == 0) || ((*(uint *)(iVar9 + 0x89a0) & 1 << (local_80 & 0xff)) != 0))
                goto LAB_006141ec;
              }
            }
            uVar2 = 2;
          }
          else {
            uVar2 = 3;
          }
        }
        else {
LAB_006143fc:
          uVar2 = 0;
        }
LAB_00614654:
        (&DAT_000024ef)[iVar4] = uVar2;
      }
    }
    iVar4 = iVar4 + 0x24f8;
    local_80 = local_80 + 1;
    if (9 < (int)local_80) {
      return;
    }
  } while( true );
}


