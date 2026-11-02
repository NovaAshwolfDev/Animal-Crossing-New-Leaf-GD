/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061b8f4. Provisional types; not original source or a verified portable implementation. */

void FUN_0061b8f4(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint local_8c [6];
  ushort local_74 [2];
  byte local_70 [16];
  uint local_60 [8];
  uint *local_40;
  int local_3c;
  uint local_38;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  
  iStack_2c = param_1;
  local_28 = param_2;
  FUN_0061bdcc();
  iVar4 = FUN_00219120();
  if (iVar4 != 0) {
    uVar5 = 0;
    do {
      uVar11 = 1 << (uVar5 & 7);
      if ((((*(byte *)(iVar4 + (uVar5 >> 3)) & uVar11) != 0) && (uVar5 < 0x14d)) &&
         (uVar5 >> 3 < 0x2a)) {
        pbVar9 = (byte *)((uVar5 >> 3) + param_1 + 0x184a0);
        *pbVar9 = (byte)uVar11 | *pbVar9;
      }
      do {
        uVar5 = uVar5 + 1 & 0xffff;
        if (0x14c < uVar5) goto LAB_0061b974;
      } while (0x14c < uVar5);
    } while( true );
  }
LAB_0061b974:
  *(undefined1 *)(DAT_0061bdb0 + 2) = 1;
  local_8c[0] = 8;
  uVar5 = 0;
  local_8c[1] = 0;
  local_8c[2] = 0;
  local_38 = 10;
  local_40 = local_8c;
  local_3c = param_1;
  local_30 = param_1 + 0x184a0;
  do {
    uVar11 = local_38;
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[5] = 0;
    local_60[6] = 0;
    local_60[7] = 0;
    uVar12 = 0;
    iVar4 = local_3c;
    if (local_38 != 0) {
      do {
        iVar6 = FUN_007f3734(iVar4);
        if ((iVar6 != 0) && (uVar7 = FUN_007f37b0(iVar4), uVar7 < 8)) {
          iVar6 = FUN_007f37b0(iVar4);
          local_60[iVar6] = local_60[iVar6] + 1;
        }
        uVar12 = uVar12 + 1;
        iVar4 = iVar4 + 0x24f8;
      } while (uVar12 < uVar11);
    }
    puVar2 = local_40;
    uVar11 = DAT_0061bdb4;
    puVar10 = local_60;
    uVar12 = 0xffffffff;
    local_40[1] = 0;
    uVar7 = 0;
    puVar2[2] = 0;
    do {
      if ((1 << (uVar7 & 0xff) & 0x88U) == 0) {
        if (*puVar10 < uVar12) {
          uVar12 = 1 << (uVar7 & 0xff);
          puVar2[1] = uVar12;
          puVar2[2] = 0;
          iVar4 = 0;
          if (0 < (int)*puVar2) {
            do {
              if ((uVar12 & 1) != 0) {
                puVar2[2] = puVar2[2] + 1;
              }
              iVar4 = iVar4 + 1;
              uVar12 = uVar12 >> 1;
            } while (iVar4 < (int)*puVar2);
          }
          uVar12 = *puVar10;
        }
        else if ((*puVar10 == uVar12) && (uVar7 < *puVar2)) {
          uVar1 = 1 << (uVar7 & 0xff);
          if ((puVar2[1] & uVar1) == 0) {
            puVar2[1] = uVar1 | puVar2[1];
            puVar2[2] = puVar2[2] + 1;
          }
        }
      }
      uVar7 = uVar7 + 1;
      puVar10 = puVar10 + 1;
    } while (uVar7 < 8);
    if (local_8c[2] == 0) {
      uVar12 = 0x77;
      iVar4 = 0;
      local_8c[1] = 0x77;
      if (0 < (int)local_8c[0]) {
        do {
          if ((uVar12 & 1) != 0) {
            local_8c[2] = local_8c[2] + 1;
          }
          iVar4 = iVar4 + 1;
          uVar12 = uVar12 >> 1;
        } while (iVar4 < (int)local_8c[0]);
      }
    }
    uVar12 = FUN_0061cfd8(&local_40,local_30,1);
    if (uVar12 != uVar11) {
      uVar11 = 0;
      iVar4 = param_1;
      do {
        iVar6 = FUN_007f3734(iVar4);
        uVar3 = local_28;
        if ((iVar6 == 0) || (*(char *)(DAT_0061bdb8 + iVar4) == '\x04')) {
          if (9 < uVar11) goto LAB_0061bd9c;
          iVar4 = param_1 + uVar11 * DAT_0061bdbc * 8;
          goto LAB_0061bbec;
        }
        uVar11 = uVar11 + 1;
        iVar4 = iVar4 + 0x24f8;
      } while (uVar11 < 10);
      iVar4 = 0;
LAB_0061bbec:
      if (iVar4 != 0) {
        local_74[0] = (ushort)uVar12;
        FUN_00620b00(iVar4);
        uVar11 = (uint)local_74[0];
        if ((*(int *)(DAT_0061bdc0 + 4) == 0) || (0x14c < uVar11)) {
          iVar6 = 0;
        }
        else {
          iVar6 = *(int *)(DAT_0061bdc0 + 4) + uVar11 * 0x58;
        }
        if ((*(int *)(DAT_0061bdc4 + 4) == 0) || (0x14c < uVar11)) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(DAT_0061bdc4 + 4) + uVar11 * 0x22;
        }
        if (iVar6 != 0 && iVar8 != 0) {
          local_70[0] = *(byte *)(iVar8 + 0x1c) >> 4;
          FUN_00698008(iVar4,local_74,local_70,uVar3);
                    /* WARNING: Subroutine does not return */
          FUN_0063653c();
        }
        if (uVar12 < 0x14d) {
          if (uVar12 >> 3 < 0x2a) {
            pbVar9 = (byte *)((uVar12 >> 3) + param_1 + 0x184a0);
            *pbVar9 = *pbVar9 | (byte)(1 << (uVar12 & 7));
          }
        }
      }
    }
LAB_0061bd9c:
    uVar5 = uVar5 + 1;
    if (4 < uVar5) {
      return;
    }
  } while( true );
}


