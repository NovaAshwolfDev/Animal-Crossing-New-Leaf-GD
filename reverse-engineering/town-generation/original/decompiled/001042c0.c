/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001042c0. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001042c0(uint *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 uVar6;
  char extraout_r1;
  char extraout_r1_00;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int *piVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined *puVar15;
  uint uVar16;
  undefined1 *puVar17;
  char *pcVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined1 auStack_48 [4];
  undefined4 uStack_44;
  char acStack_40 [32];
  uint *puStack_20;
  uint uStack_1c;
  undefined4 *puStack_18;
  
  if (param_2 == 0x6e) {
    puVar4 = (uint *)*param_3;
    uVar19 = *param_1;
    uVar12 = param_1[8];
    if ((int)(uVar19 << 0x15) < 0) {
      *(char *)puVar4 = (char)uVar12;
    }
    else if ((int)(uVar19 << 0x17) < 0) {
      *(short *)puVar4 = (short)uVar12;
    }
    else if ((int)(uVar19 << 0x18) < 0) {
      *puVar4 = uVar12;
      puVar4[1] = (int)uVar12 >> 0x1f;
    }
    else {
      *puVar4 = uVar12;
    }
    return 1;
  }
  if (param_2 == 0x70) {
    uVar6 = *param_3;
    *param_1 = *param_1 | 0x20;
    param_1[7] = 8;
    uVar6 = FUN_00100c90(param_1,0x70,uVar6,0);
    return uVar6;
  }
  if (((param_2 == 0x66) || (param_2 == 0x65)) || (param_2 == 0x67)) {
                    /* WARNING: Could not recover jumptable at 0x004dca68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*DAT_004dca6c)();
    return uVar6;
  }
  if (param_2 != 0x61) {
    if ((bool)((byte)(*param_1 >> 7) & 1)) {
      param_2 = param_2 | 0x80;
    }
    puStack_20 = param_1;
    uStack_1c = param_2;
    puStack_18 = param_3;
    if (((param_2 == 0x69) || (param_2 == 100)) || (param_2 == 0x75)) {
      uVar6 = 0;
      puVar15 = &UNK_00100aa0;
      if (param_2 == 0x75) {
        iVar3 = FUN_002fe6d8(*param_3,param_1,param_3,*param_1 >> 8);
      }
      else {
        iVar3 = FUN_002fe6c2();
        if (iVar3 < 0) {
          iVar3 = -iVar3;
          puVar15 = &DAT_00100aa4;
        }
        else if ((int)(*puStack_20 << 0x1e) < 0) {
          puVar15 = &UNK_00100aa8;
        }
        else {
          if (-1 < (int)(*puStack_20 << 0x1d)) goto LAB_00100a7a;
          puVar15 = &UNK_00100aac;
        }
        uVar6 = 1;
      }
LAB_00100a7a:
      puVar4 = puStack_20;
      iVar11 = 0;
      while (iVar3 != 0) {
        iVar3 = FUN_002fe6f0();
        *(char *)((int)puVar4 + iVar11 + 0x24) = extraout_r1 + '0';
        iVar11 = iVar11 + 1;
      }
      uVar6 = FUN_002fe71c(puStack_20,iVar11,puVar15,uVar6);
      return uVar6;
    }
    if (param_2 == 0x6f) {
      uVar6 = FUN_00100c5c();
      return uVar6;
    }
    if (param_2 == 0x78) {
                    /* WARNING: Could not recover jumptable at 0x004dca90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar6 = (*DAT_004dca94)();
      return uVar6;
    }
    if (((param_2 != 0xe9) && (param_2 != 0xe4)) && (param_2 != 0xf5)) {
      if (param_2 == 0xef) {
                    /* WARNING: Could not recover jumptable at 0x004dca88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*DAT_004dca8c)();
        return uVar6;
      }
      if (param_2 == 0xf8) {
                    /* WARNING: Could not recover jumptable at 0x004dca80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*DAT_004dca84)();
        return uVar6;
      }
      if ((bool)((byte)(*param_1 >> 6) & 1)) {
        param_2 = param_2 | 0x80;
      }
      if (param_2 == 99) {
        *(char *)(param_1 + 9) = (char)*param_3;
        *(undefined1 *)((int)param_1 + 0x25) = 0;
        uVar6 = FUN_00101508(param_1,param_1 + 9,1,*param_1 >> 7);
        return uVar6;
      }
      if (param_2 == 0x73) {
                    /* WARNING: Could not recover jumptable at 0x004dca78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*DAT_004dca7c)();
        return uVar6;
      }
      if (param_2 == 0xe3) {
        *(short *)(param_1 + 9) = (short)*param_3;
        *(undefined2 *)((int)param_1 + 0x26) = 0;
        uVar6 = FUN_001015fc(param_1,param_1 + 9,1);
        return uVar6;
      }
      if (param_2 == 0xf3) {
                    /* WARNING: Could not recover jumptable at 0x004dca70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*DAT_004dca74)();
        return uVar6;
      }
      return 0;
    }
    uVar6 = 0;
    puVar15 = &UNK_00100c00;
    piVar10 = (int *)((int)param_3 + 7U & 0xfffffff8);
    iVar3 = *piVar10;
    iVar11 = piVar10[1];
    if (param_2 != 0xf5) {
      if (iVar11 < 0) {
        bVar22 = iVar3 != 0;
        iVar3 = -iVar3;
        iVar11 = -(uint)bVar22 - iVar11;
        puVar15 = &DAT_00100c04;
      }
      else if ((int)(*param_1 << 0x1e) < 0) {
        puVar15 = &UNK_00100c08;
      }
      else {
        if (-1 < (int)(*param_1 << 0x1d)) goto LAB_00100bd6;
        puVar15 = &UNK_00100c0c;
      }
      uVar6 = 1;
    }
LAB_00100bd6:
    uVar23 = CONCAT44(iVar11,iVar3);
    iVar3 = 0;
    while (uVar12 = (uint)uVar23 | (uint)((ulonglong)uVar23 >> 0x20), uVar12 != 0) {
      uVar23 = FUN_002fe7cc();
      *(char *)((int)param_1 + iVar3 + 0x24) = (char)uVar12 + '0';
      iVar3 = iVar3 + 1;
    }
    uVar6 = FUN_002fe71c(puStack_20,iVar3,puVar15,uVar6);
    return uVar6;
  }
  puVar4 = (uint *)((int)param_3 + 7U & 0xfffffff8);
  puVar17 = auStack_48;
  uVar12 = puVar4[1];
  uVar19 = *puVar4;
  iVar3 = FUN_002ff1b8(uVar19,uVar12);
  if ((int)uVar12 < 0) {
    iVar11 = 0x2d;
  }
  else if ((int)(*param_1 << 0x1e) < 0) {
    iVar11 = 0x2b;
  }
  else {
    iVar11 = ((*param_1 << 0x1d) >> 0x1f) << 5;
  }
  auStack_48[0] = (char)iVar11;
  puStack_20 = (uint *)(uint)(iVar11 != 0);
  if ((iVar3 == 3) || (6 < iVar3)) {
    FUN_002ff1f8(param_1,0x61);
    return 2;
  }
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar16 = param_1[7];
  }
  else {
    uVar16 = 0xd;
  }
  uStack_44 = (uVar12 << 1) >> 0x15;
  if ((int)uVar16 < 0xd) {
    uStack_1c = uVar12 >> 0x14;
    uVar5 = FUN_002fef98(0);
    uVar5 = uVar5 & 0xc00000;
    if ((int)uVar12 < 0) {
      uVar5 = (uVar5 * 5) / 2 & 0xc00000;
    }
    uVar5 = (int)uVar5 >> 0x16;
    if (1 < uVar5) {
      uVar5 = 0xffffffff;
    }
    uVar7 = uVar16 * 4;
    uVar14 = 0;
    if (uVar7 < 0x18) {
      uVar20 = 0x100000 >> (uVar7 & 0xff);
    }
    else {
      uVar20 = 0;
      uVar14 = 0x10000000 >> (uVar7 - 0x18 & 0xff);
    }
    uVar8 = uVar7 + 0xc;
    uVar13 = uVar12;
    if (0x1f < uVar8) {
      uVar8 = uVar7 - 0x14;
      uVar13 = uVar19;
    }
    uVar13 = uVar13 << (uVar8 & 0xff);
    if ((int)uVar5 < 1) {
      if ((uVar5 == 0) && (0x7fffffff < uVar13)) goto LAB_00102aa8;
    }
    else if (uVar13 != 0) {
LAB_00102aa8:
      bVar22 = CARRY4(uVar19,uVar14);
      uVar19 = uVar19 + uVar14;
      uVar12 = uVar12 + uVar20 + (uint)bVar22;
      if ((uVar5 == 0) && (uVar13 == 0x80000000)) {
        uVar19 = uVar19 & ~uVar14;
        uVar12 = uVar12 & ~uVar20;
      }
      if (uVar12 >> 0x14 != uStack_1c) {
        uStack_44 = uStack_44 + 1;
      }
    }
  }
  if ((int)(*param_1 << 0x14) < 0) {
    puVar9 = &LAB_00102adc + DAT_00102c98;
  }
  else {
    puVar9 = (undefined1 *)(DAT_00102c98 + 0x102ac9);
  }
  auStack_48[(int)puStack_20] = 0x30;
  auStack_48[(int)puStack_20 + 1] = puVar9[0x10];
  puStack_20 = (uint *)((int)puStack_20 + 2);
  if ((int)uStack_44 < 1) {
    acStack_40[0] = '0';
  }
  else {
    acStack_40[0] = '1';
  }
  iVar3 = 1;
  if (uStack_44 == 0) {
    if ((uVar12 & 0x7fffffff) != 0 || uVar19 != 0) {
      uStack_44 = DAT_00102c9c + 1;
      goto LAB_00102b1c;
    }
  }
  else {
    uStack_44 = uStack_44 + DAT_00102c9c;
LAB_00102b1c:
  }
  if ((0 < (int)uVar16) || ((int)(*param_1 << 0x1c) < 0)) {
    acStack_40[1] = 0x2e;
    iVar3 = 2;
  }
  iVar21 = 0;
  iVar11 = iVar3;
  do {
    if ((int)uVar16 < 1) break;
    uVar5 = uVar12 << 0xc;
    uVar12 = uVar12 << 4;
    uVar16 = uVar16 - 1;
    acStack_40[iVar11] = puVar9[uVar5 >> 0x1c];
    iVar11 = iVar11 + 1;
    iVar21 = iVar21 + 1;
  } while (iVar21 < 5);
  iVar21 = 0;
  do {
    if ((int)uVar16 < 1) break;
    uVar12 = uVar19 >> 0x1c;
    uVar19 = uVar19 << 4;
    iVar21 = iVar21 + 1;
    uVar16 = uVar16 - 1;
    acStack_40[iVar11] = puVar9[uVar12];
    iVar11 = iVar11 + 1;
  } while (iVar21 < 8);
  if (-1 < (int)(*param_1 << 0x1a)) {
    for (; (iVar3 < iVar11 && (acStack_40[iVar11 + -1] == '0')); iVar11 = iVar11 + -1) {
    }
    if ((0 < iVar11) && (acStack_40[iVar11 + -1] == '.')) {
      iVar11 = iVar11 + -1;
    }
  }
  if (0 < (int)uVar16) {
    acStack_40[iVar11] = '>';
    iVar11 = iVar11 + 1;
    uVar16 = uVar16 - 1;
  }
  acStack_40[iVar11] = puVar9[0x11];
  if ((int)uStack_44 < 0) {
    acStack_40[iVar11 + 1] = '-';
    uStack_44 = -uStack_44;
  }
  else {
    acStack_40[iVar11 + 1] = '+';
  }
  iVar3 = iVar11 + 2;
  if ((int)uStack_44 < 1000) {
    if (99 < (int)uStack_44) goto LAB_00102be2;
    if ((int)uStack_44 < 10) goto LAB_00102c06;
  }
  else {
    cVar2 = FUN_00300834();
    acStack_40[iVar11 + 2] = cVar2 + '0';
    iVar3 = iVar11 + 3;
    uStack_44 = extraout_r1_01;
LAB_00102be2:
    cVar2 = FUN_00300834(uStack_44,100);
    acStack_40[iVar3] = cVar2 + '0';
    iVar3 = iVar3 + 1;
    uStack_44 = extraout_r1_02;
  }
  cVar2 = FUN_00300834(uStack_44,10);
  acStack_40[iVar3] = cVar2 + '0';
  iVar3 = iVar3 + 1;
LAB_00102c06:
  FUN_00300834(uStack_44,10);
  acStack_40[iVar3] = extraout_r1_00 + '0';
  iVar3 = iVar3 + 1;
  param_1[6] = param_1[6] - (iVar3 + uVar16 + (int)puStack_20);
  if (-1 < (int)(*param_1 << 0x1b)) {
    FUN_002fe674(param_1);
  }
  param_1[8] = param_1[8] + (int)puStack_20;
  while (puStack_20 = (uint *)((int)puStack_20 + -1), puStack_20 != (uint *)0xffffffff) {
    uVar1 = *puVar17;
    puVar17 = puVar17 + 1;
    (*(code *)param_1[1])(uVar1,param_1[2]);
  }
  if ((int)(*param_1 << 0x1b) < 0) {
    FUN_002fe674(param_1);
  }
  pcVar18 = acStack_40;
  while (bVar22 = iVar3 != 0, iVar3 = iVar3 + -1, bVar22) {
    cVar2 = *pcVar18;
    pcVar18 = pcVar18 + 1;
    if (cVar2 == '>') {
      param_1[8] = param_1[8] + uVar16;
      while (bVar22 = uVar16 != 0, uVar16 = uVar16 - 1, bVar22) {
        (*(code *)param_1[1])(0x30,param_1[2]);
      }
    }
    else {
      (*(code *)param_1[1])(cVar2,param_1[2]);
      param_1[8] = param_1[8] + 1;
    }
  }
  FUN_002fe6a0(param_1);
  return 2;
}


