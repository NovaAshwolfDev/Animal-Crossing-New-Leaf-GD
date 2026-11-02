/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001b6c20. Provisional types; not original source or a verified portable implementation. */

void FUN_001b6c20(int param_1)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ushort local_68 [16];
  uint local_48;
  int local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  char local_2f;
  int local_2c;
  
  iVar1 = DAT_001b70b4;
  puVar11 = local_68;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[5] = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  local_68[8] = 0;
  local_68[9] = 0;
  local_68[10] = 0;
  local_68[0xb] = 0;
  local_68[0xc] = 0;
  local_68[0xd] = 0;
  local_68[0xe] = 0;
  local_68[0xf] = 0;
  uVar3 = (uint)*(byte *)(param_1 + 0x69);
  local_48 = (uint)*(ushort *)(DAT_001b70b0 + uVar3 * 2);
  if (uVar3 == 8) {
    uVar3 = 0;
    do {
      uVar7 = 0;
      do {
        uVar9 = *(uint *)(DAT_001b70b8 + (uVar7 + uVar3 * 0x20) * 4);
        uVar5 = 0;
        do {
          if ((*(byte *)(DAT_001b70bc + uVar3 * 2) + uVar5 < 0x34) &&
             ((uVar9 & 1 << (uVar5 & 0xff)) == 0)) {
            uVar6 = *(uint *)(param_1 + (((uVar3 << 0x1e) >> 0x17) + (uVar7 & 0x1f) * 4 +
                                        ((uVar5 & 0x1f) >> 3)) * 4 + 0x6c) >>
                    (((uVar5 & 0x1f) << 0x1d) >> 0x1b) & 0xf;
            if (uVar6 == 0xf) {
              uVar6 = 0;
            }
            local_68[*(byte *)(DAT_001b70b4 + (uint)*(byte *)(uVar6 + param_1 + 0x58))] =
                 local_68[*(byte *)(DAT_001b70b4 + (uint)*(byte *)(uVar6 + param_1 + 0x58))] + 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x20);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x20);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
  }
  else if (uVar3 < 6) {
    uVar3 = 0;
    do {
      uVar7 = 0;
      iVar4 = FUN_007aa6d4(param_1,&local_40);
      if (iVar4 != 0) {
        uVar5 = 0;
        if (local_38 != 0) {
          uVar9 = local_3c << 0x1e;
          do {
            if (local_34 != 0) {
              uVar7 = uVar5 << 0x1d;
            }
            uVar6 = 0;
            if (local_34 != 0) {
              uVar7 = uVar7 >> 0x1b;
              do {
                uVar8 = local_40 + uVar6;
                uVar6 = uVar6 + 1;
                uVar8 = *(uint *)(param_1 + ((uVar9 >> 0x17) + (uVar8 & 0x1f) * 4 +
                                            ((uVar5 & 0x1f) >> 3)) * 4 + 0x6c) >> uVar7 & 0xf;
                if (uVar8 == 0xf) {
                  uVar8 = 0;
                }
                local_68[*(byte *)(iVar1 + (uint)*(byte *)(uVar8 + param_1 + 0x58))] =
                     local_68[*(byte *)(iVar1 + (uint)*(byte *)(uVar8 + param_1 + 0x58))] + 1;
              } while (uVar6 < local_34);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_38);
        }
        if (local_2f != '\0') {
          uVar7 = 0;
          do {
            uVar5 = 0;
            do {
              uVar9 = local_2c + uVar5;
              uVar5 = uVar5 + 1;
              uVar9 = *(uint *)(param_1 + ((uVar9 & 0x1f) * 4 + 0x180 + ((uVar7 & 0x1f) >> 3)) * 4 +
                               0x6c) >> ((uVar7 << 0x1d) >> 0x1b) & 0xf;
              if (uVar9 == 0xf) {
                uVar9 = 0;
              }
              local_68[*(byte *)(iVar1 + (uint)*(byte *)(uVar9 + param_1 + 0x58))] =
                   local_68[*(byte *)(iVar1 + (uint)*(byte *)(uVar9 + param_1 + 0x58))] + 1;
            } while (uVar5 < 0x10);
            uVar7 = uVar7 + 1;
          } while (uVar7 < 0x20);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
  }
  else {
    uVar3 = 0;
    do {
      uVar7 = 0;
      do {
        uVar5 = uVar7 & 0x1f;
        uVar7 = uVar7 + 1;
        uVar5 = *(uint *)(param_1 + ((uVar3 & 0x1f) * 4 + (uVar5 >> 3)) * 4 + 0x6c) >>
                ((uVar5 << 0x1d) >> 0x1b) & 0xf;
        if (uVar5 == 0xf) {
          uVar5 = 0;
        }
        local_68[*(byte *)(DAT_001b70b4 + (uint)*(byte *)(uVar5 + param_1 + 0x58))] =
             local_68[*(byte *)(DAT_001b70b4 + (uint)*(byte *)(uVar5 + param_1 + 0x58))] + 1;
      } while (uVar7 < 0x20);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x20);
  }
  fVar15 = DAT_001b70cc;
  iVar1 = DAT_001b70c4;
  uVar3 = 0;
  uVar7 = 0;
  uVar5 = 0;
  iVar4 = 0xf;
  puVar10 = local_68;
  do {
    if (local_68[uVar3] < *puVar10) {
      uVar3 = uVar5 & 0xff;
    }
    iVar4 = iVar4 + -1;
    uVar5 = uVar5 + 1;
    puVar10 = puVar10 + 1;
  } while (iVar4 != 0);
  uVar5 = 0;
  iVar4 = 0xf;
  do {
    if ((uVar5 != uVar3) && (local_68[uVar7] < *puVar11)) {
      uVar7 = uVar5 & 0xff;
    }
    iVar4 = iVar4 + -1;
    puVar11 = puVar11 + 1;
    uVar5 = uVar5 + 1;
  } while (iVar4 != 0);
  fVar14 = (float)VectorUnsignedToFloat(local_48,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (float)VectorUnsignedToFloat(local_48,(byte)(in_fpscr >> 0x15) & 3);
  uVar5 = (uint)local_68[uVar3];
  fVar12 = fVar12 * DAT_001b70c0;
  uVar13 = VectorFloatToUnsigned(fVar14 * DAT_001b70c0,3);
  fVar14 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(fVar12 - fVar14) <= DAT_001b70c4) {
    fVar12 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
  }
  fVar16 = (float)VectorUnsignedToFloat(local_48,(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = (float)VectorUnsignedToFloat(local_48,(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = fVar14 * DAT_001b70c8;
  uVar13 = VectorFloatToUnsigned(fVar16 * DAT_001b70c8,3);
  fVar16 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(fVar14 - fVar16) <= DAT_001b70c4) {
    fVar14 = (float)VectorUnsignedToFloat(uVar13,(byte)(in_fpscr >> 0x15) & 3);
  }
  fVar16 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  uVar9 = in_fpscr & 0xfffffff | (uint)(fVar16 < fVar12) << 0x1f;
  if (SUB41(uVar9 >> 0x1f,0) == (NAN(fVar16) || NAN(fVar12))) {
    bVar2 = (byte)uVar3 & 0xf | (byte)((uVar3 & 0xf) << 4);
  }
  else {
    fVar12 = (float)VectorUnsignedToFloat(uVar5,(byte)(uVar9 >> 0x15) & 3);
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar14) << 0x1f;
    if (SUB41(uVar5 >> 0x1f,0) == (NAN(fVar12) || NAN(fVar14))) {
      bVar2 = (byte)uVar3 & 0xf;
      *(byte *)(param_1 + 0x67) = *(byte *)(param_1 + 0x67) & 0xf0 | bVar2;
      iVar4 = local_48 - local_68[uVar3];
      fVar14 = (float)VectorSignedToFloat(iVar4,(byte)(uVar5 >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat(iVar4,(byte)(uVar5 >> 0x15) & 3);
      fVar12 = fVar12 * fVar15;
      uVar13 = VectorFloatToUnsigned(fVar14 * fVar15,3);
      fVar15 = (float)VectorUnsignedToFloat(uVar13,(byte)(uVar5 >> 0x15) & 3);
      if ((int)(fVar12 - fVar15) <= iVar1) {
        fVar12 = (float)VectorUnsignedToFloat(uVar13,(byte)(uVar5 >> 0x15) & 3);
      }
      fVar15 = (float)VectorUnsignedToFloat((uint)local_68[uVar7],(byte)(uVar5 >> 0x15) & 3);
      if (fVar12 <= fVar15) {
        bVar2 = bVar2 | (byte)((uVar7 & 0xf) << 4);
      }
      else {
        bVar2 = bVar2 | 0xc0;
      }
    }
    else {
      bVar2 = 0xcc;
    }
  }
  *(byte *)(param_1 + 0x67) = bVar2;
  return;
}


