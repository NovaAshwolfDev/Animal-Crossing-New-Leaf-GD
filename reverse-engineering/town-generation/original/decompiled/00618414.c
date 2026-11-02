/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00618414. Provisional types; not original source or a verified portable implementation. */

void FUN_00618414(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_30;
  uint local_2c;
  
  uVar7 = 0;
  iVar10 = 0;
  do {
    if (uVar7 < 10) {
      iVar5 = param_1 + uVar7 * DAT_0061870c * 8;
      if ((iVar5 != 0) && (iVar2 = FUN_007f3768(iVar5), iVar2 != 0)) goto LAB_00618458;
    }
    else {
      iVar5 = 0;
LAB_00618458:
      if ((iVar5 != 0) && (iVar5 = FUN_007e7244(iVar5,0), iVar5 != 0)) {
        if (uVar7 == 0xffffffff) {
          return;
        }
        if (uVar7 < 10) {
          iVar5 = param_1 + uVar7 * DAT_0061870c * 8;
          if (iVar5 == 0) {
            return;
          }
          iVar2 = FUN_007f3768(iVar5);
          if (iVar2 == 0) {
            return;
          }
        }
        else {
          iVar5 = 0;
        }
        if (iVar5 == 0) {
          return;
        }
        local_30 = 0;
        local_2c = 0;
        local_54 = 10;
        local_50 = 0;
        local_4c = 0;
        cVar1 = *(char *)(iVar5 + 0x24f4);
        local_48 = (uint)*(char *)(iVar5 + 0x24f3);
        uVar6 = 0;
        if ((*(byte *)(DAT_00618710 + param_1) & 0xf) == 0) {
          uVar9 = (uint)*(char *)(DAT_00618714 + param_1);
        }
        else {
          uVar9 = 0xffffffff;
        }
        do {
          iVar2 = FUN_00582e64(uVar6);
          if (iVar2 != 0) {
            *(byte *)(iVar2 + 1) = *(byte *)(iVar2 + 1) & 0xfc;
          }
          iVar2 = iVar10;
          if (((uVar6 < 10) && (iVar8 = param_1 + uVar6 * DAT_0061870c * 8, iVar8 != 0)) &&
             (iVar3 = FUN_007f3768(iVar8), iVar3 != 0)) {
            iVar2 = iVar8;
          }
          if (((uVar6 != uVar7 && uVar6 != (int)cVar1) && (uVar6 != uVar9 && iVar2 != 0)) &&
             (((*(ushort *)(DAT_00618718 + iVar2) & 1) == 0 &&
              (((*(ushort *)(DAT_00618718 + iVar2) & 2) == 0 &&
               (uVar4 = FUN_00580764(iVar2,iVar5), local_30 <= uVar4)))))) {
            if (local_30 < uVar4) {
              local_50 = 0;
              if (uVar6 < local_54) {
                local_50 = 1 << (uVar6 & 0xff);
              }
              local_4c = (uint)(uVar6 < local_54);
              local_2c = (uint)(local_48 == uVar6);
              local_30 = uVar4;
            }
            else if (local_2c == 0) {
              if (uVar6 == local_48) {
                local_50 = 0;
                if (uVar6 < local_54) {
                  local_50 = 1 << (uVar6 & 0xff);
                }
                local_4c = (uint)(uVar6 < local_54);
                local_2c = 1;
              }
              else if ((uVar6 < local_54) && (uVar4 = 1 << (uVar6 & 0xff), (local_50 & uVar4) == 0))
              {
                local_50 = uVar4 | local_50;
                local_4c = local_4c + 1;
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < 10);
        if ((int)local_4c < 1) {
          return;
        }
        uVar7 = 0;
        do {
          if (((uVar7 < local_54) && ((local_50 & 1 << (uVar7 & 0xff)) != 0)) &&
             (iVar10 = FUN_00582e64(uVar7), iVar10 != 0)) {
            *(byte *)(iVar10 + 1) = *(byte *)(iVar10 + 1) | 1;
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 10);
        FUN_007f2db0(&local_54);
        iVar10 = FUN_00582e64();
        if (iVar10 == 0) {
          return;
        }
        FUN_008a38a8(iVar10,9,1);
        return;
      }
    }
    uVar7 = uVar7 + 1;
    if (9 < (int)uVar7) {
      return;
    }
  } while( true );
}


