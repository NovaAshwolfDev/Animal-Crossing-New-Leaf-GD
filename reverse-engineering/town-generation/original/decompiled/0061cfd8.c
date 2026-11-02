/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061cfd8. Provisional types; not original source or a verified portable implementation. */

uint FUN_0061cfd8(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint in_fpscr;
  float fVar12;
  ulonglong uVar13;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_7c;
  uint local_78;
  uint local_6c;
  int local_68;
  int local_64;
  int local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  int *piStack_30;
  int local_2c;
  int local_28;
  
  piVar3 = DAT_0061d1f8;
  local_6c = DAT_0061d1f0;
  puVar5 = (uint *)*param_1;
  if (&local_98 != puVar5) {
    local_98 = *puVar5;
    local_94 = puVar5[1];
    local_90 = puVar5[2];
  }
  local_58 = param_1[1];
  local_50 = param_1[2];
  if (0 < (int)local_90) {
    uVar13 = (ulonglong)DAT_0061d1f4;
    piStack_30 = param_1;
    local_2c = param_2;
    local_28 = param_3;
    do {
      local_78 = FUN_007f2db0(&local_98);
      uVar1 = local_50;
      iVar4 = DAT_0061d200;
      if (7 < local_78) {
        return local_6c;
      }
      local_68 = local_2c;
      local_64 = local_28;
      local_7c = local_58;
      uVar11 = local_78 & 0xff;
      local_4c = DAT_0061d1f0;
      local_54 = 0;
      piVar10 = DAT_0061d1fc;
      if (DAT_0061d1fc != piVar3) {
        do {
          uVar2 = *(ushort *)(*piVar10 + 0x54);
          uVar9 = (uint)uVar2;
          if (uVar11 == *(byte *)(*(int *)(iVar4 + uVar9 * 4) + 0x1c) >> 4) {
            uVar8 = 0;
            iVar7 = local_7c;
            if (uVar1 != 0) {
              do {
                iVar6 = FUN_007f3734(iVar7);
                if ((iVar6 != 0) && (*(ushort *)(iVar7 + 0x2c) == uVar9)) {
                  if (uVar8 != 0xffffffff) goto LAB_0061d174;
                  break;
                }
                uVar8 = uVar8 + 1;
                iVar7 = iVar7 + 0x24f8;
              } while (uVar8 < uVar1);
            }
            if ((local_64 == 0) ||
               ((int)((uint)*(byte *)(*(int *)(iVar4 + uVar9 * 4) + 0x1f) << 0x19) < 0)) {
              if ((local_68 != 0) && (uVar9 < 0x14d)) {
                uVar8 = (uint)(uVar2 >> 3);
                if ((uVar8 < 0x2a) && ((*(byte *)(local_68 + uVar8) >> (uVar9 & 7) & 1) != 0))
                goto LAB_0061d174;
              }
              local_54 = local_54 + 1;
              fVar12 = (float)VectorUnsignedToFloat(local_54,(byte)(in_fpscr >> 0x15) & 3);
              fVar12 = fVar12 * (float)uVar13;
              FUN_005c62e4();
              if ((int)fVar12 <= DAT_0061d204) {
                local_4c = uVar9;
              }
            }
          }
LAB_0061d174:
          piVar10 = piVar10 + 1;
        } while (piVar10 != piVar3);
        if (local_4c != 0xffff) {
          return local_4c;
        }
      }
      if ((local_78 < local_98) && (uVar1 = 1 << (local_78 & 0xff), (local_94 & uVar1) != 0)) {
        local_94 = local_94 & ~uVar1;
        local_90 = local_90 - 1;
      }
    } while (0 < (int)local_90);
  }
  return local_6c;
}


