/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e68d4. Provisional types; not original source or a verified portable implementation. */

void FUN_007e68d4(uint *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  int local_48;
  undefined4 uStack_44;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  puVar4 = (undefined4 *)FUN_005cc158();
  local_38 = *puVar4;
  uStack_34 = puVar4[1];
  local_30 = puVar4[2];
  FUN_005cd238(&local_38);
  *param_1 = 10;
  param_1[1] = 0;
  iVar5 = DAT_007e6c0c;
  uVar13 = 0;
  param_1[2] = 0;
  bVar10 = *(byte *)(iVar5 + param_2);
  bVar15 = (bVar10 & 0xf) != 0;
  if (bVar15) {
    bVar10 = bVar10 & 0xf;
  }
  if (bVar15 && bVar10 != 1) {
    uVar14 = 0xffffffff;
  }
  else {
    uVar14 = (uint)*(char *)(param_2 + 0x1725e);
  }
  cVar2 = *(char *)(DAT_007e6c10 + param_2);
  cVar3 = *(char *)(DAT_007e6c14 + param_2);
  do {
    if (uVar13 < 10) {
      iVar5 = param_2 + uVar13 * DAT_007e6c18 * 8;
      if ((iVar5 != 0) && (iVar6 = FUN_007f3768(iVar5), iVar6 != 0)) goto LAB_007e6984;
    }
    else {
      iVar5 = 0;
LAB_007e6984:
      if ((iVar5 != 0) && (iVar5 = FUN_007e7244(iVar5,0), iVar5 != 0)) goto LAB_007e69b0;
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 10);
  uVar13 = 0xffffffff;
LAB_007e69b0:
  iVar5 = DAT_007e6c1c;
  uVar12 = 0;
  do {
    if (((9 < uVar12) || (iVar6 = param_2 + uVar12 * DAT_007e6c18 * 8, iVar6 == 0)) ||
       (iVar7 = FUN_007f3768(iVar6), iVar7 == 0)) {
      iVar6 = 0;
    }
    iVar7 = FUN_00582e64(uVar12);
    if (((iVar6 != 0 && iVar7 != 0) && (iVar8 = FUN_007f3734(iVar6), iVar8 != 0)) &&
       (((*(ushort *)(DAT_007e6c20 + iVar6) & 1) == 0 &&
        (((*(ushort *)(DAT_007e6c20 + iVar6) & 2) == 0 && (uVar14 != uVar12)))))) {
      bVar15 = (int)cVar2 != uVar12;
      uVar9 = (int)cVar2;
      if (bVar15) {
        uVar9 = (int)cVar3;
      }
      uVar1 = uVar9;
      if (bVar15 && uVar9 != uVar12) {
        uVar1 = uVar13;
      }
      if (((bVar15 && uVar9 != uVar12) && uVar1 != uVar12) &&
         (-1 < (int)((uint)*(byte *)(iVar7 + 1) << 0x1e))) {
        if (*(char *)(DAT_007e6c24 + iVar6) != '\0') {
          iVar7 = FUN_007ec86c(iVar6 + 0x24ea,&local_38,1);
          if (iVar7 < 0) {
            iVar7 = -iVar7;
          }
          if (iVar7 < 3) goto LAB_007e6bf8;
        }
        FUN_007e5a64(&local_40,param_2,iVar6,0,1,0,0);
        iVar7 = 0;
        local_48 = local_40;
        uStack_44 = uStack_3c;
        uVar9 = 0;
        do {
          if ((uVar9 < 0x21) && ((*(byte *)((int)&local_48 + (uVar9 >> 3)) >> (uVar9 & 7) & 1) == 1)
             ) {
            iVar7 = iVar7 + 1;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x21);
        if (iVar7 == 0) {
          if (uVar12 < *param_1) {
            uVar11 = param_1[1];
            uVar9 = 1 << (uVar12 & 0xff);
            uVar1 = uVar11 & uVar9;
            goto joined_r0x007e6b78;
          }
        }
        else {
          iVar7 = 0;
          uVar9 = 0;
          do {
            uVar1 = uVar9 >> 3;
            uVar11 = uVar9 & 7;
            uVar9 = uVar9 + 1;
            if ((*(byte *)((int)&local_48 + uVar1) >> uVar11 & 1) == 1) {
              iVar7 = iVar7 + 1;
            }
          } while (uVar9 < 0x21);
          if ((((iVar7 == 1) && (local_40 << 0x1c < 0)) &&
              ((iVar6 = FUN_007eade0(param_2 + 0x1730c,iVar6,*(undefined4 *)(iVar5 + 0x234)),
               iVar6 == 0 ||
               ((iVar7 = FUN_007eaaa8(), iVar7 == 0 && (*(char *)(iVar6 + 9) == '\x03')))))) &&
             (uVar12 < *param_1)) {
            uVar11 = param_1[1];
            uVar9 = 1 << (uVar12 & 0xff);
            uVar1 = uVar11 & uVar9;
joined_r0x007e6b78:
            if (uVar1 == 0) {
              param_1[1] = uVar11 | uVar9;
              param_1[2] = param_1[2] + 1;
            }
          }
        }
      }
    }
LAB_007e6bf8:
    uVar12 = uVar12 + 1;
    if (9 < (int)uVar12) {
      return;
    }
  } while( true );
}


