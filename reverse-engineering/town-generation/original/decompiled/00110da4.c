/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00110da4. Provisional types; not original source or a verified portable implementation. */

longlong FUN_00110da4(void)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  int local_58;
  int local_54;
  int local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  int local_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  puVar5 = (uint *)FUN_00116d14(auStack_38,2000,1,1,0,0,0,0);
  uVar4 = DAT_00111050;
  uVar3 = DAT_0011104c;
  lVar2 = (ulonglong)DAT_00111048 * (ulonglong)(*puVar5 - *DAT_00111044);
  local_40 = (undefined4)lVar2;
  local_3c = (puVar5[1] - (DAT_00111044[1] + (uint)(*puVar5 < *DAT_00111044))) * DAT_00111048 +
             (int)((ulonglong)lVar2 >> 0x20);
  local_48 = FUN_00119e54(&local_40,local_3c,DAT_0011104c,DAT_00111050,0x12);
  puVar5 = (uint *)FUN_00116d14(auStack_38,DAT_00111054,1,1,0,0,0,0);
  puVar6 = (uint *)FUN_00116d14(auStack_30,2000,1,1,0,0,0,0);
  lVar2 = (ulonglong)DAT_00111048 * (ulonglong)(*puVar5 - *puVar6);
  local_40 = (undefined4)lVar2;
  local_3c = (puVar5[1] - (puVar6[1] + (uint)(*puVar5 < *puVar6))) * DAT_00111048 +
             (int)((ulonglong)lVar2 >> 0x20);
  lVar22 = FUN_00119e54(&local_40,local_40,uVar3,uVar4,0x12);
  software_interrupt(0x28);
  puVar5 = (uint *)(DAT_0011105c + (*DAT_00111058 & 1) * 0x20);
  uVar15 = *puVar5;
  uVar16 = puVar5[1];
  uVar13 = puVar5[7];
  uVar14 = puVar5[6];
  coproc_moveto_Data_Memory_Barrier(0);
  uVar17 = (uint)lVar22 - puVar5[2];
  uVar19 = (int)((ulonglong)lVar22 >> 0x20) - (puVar5[3] + (uint)((uint)lVar22 < puVar5[2]));
  uVar23 = FUN_0010f710(0,1000,puVar5[4],(int)puVar5[4] >> 0x1f);
  uVar8 = (uint)(uVar23 >> 0x20);
  uVar11 = (uint)((uVar23 & 0xffffffff) * (ulonglong)uVar17 >> 0x20);
  lVar2 = (uVar23 & 0xffffffff) * (ulonglong)uVar19;
  uVar21 = (uint)lVar2;
  uVar20 = (uint)((ulonglong)uVar17 * (ulonglong)uVar8);
  uVar9 = uVar21 + uVar20;
  uVar10 = uVar9 + uVar11;
  uVar12 = uVar10 + uVar15;
  iVar18 = ((int)uVar19 >> 0x1f) * (int)uVar23 + (int)((ulonglong)lVar2 >> 0x20) +
           ((int)uVar8 >> 0x1f) * uVar17 + (int)((ulonglong)uVar17 * (ulonglong)uVar8 >> 0x20) +
           (uint)CARRY4(uVar21,uVar20) + uVar19 * uVar8 + (uint)CARRY4(uVar9,uVar11) + uVar16 +
           (uint)CARRY4(uVar10,uVar15);
  local_58 = DAT_00111060 - (uVar12 - uVar15);
  iVar1 = (iVar18 - (uVar16 + (uVar12 < uVar15))) + (uint)(DAT_00111060 < uVar12 - uVar15);
  local_54 = -iVar1;
  local_50[0] = 0;
  local_50[1] = 0;
  piVar7 = local_50;
  if (0 < (int)(local_54 + (uint)(local_58 != 0)) != SBORROW4(iVar1,(uint)(local_58 != 0))) {
    piVar7 = &local_58;
  }
  uVar23 = FUN_0010f710(0,*piVar7,DAT_00111060,(int)DAT_00111060 >> 0x1f);
  uVar8 = (uint)(uVar23 >> 0x20);
  uVar11 = (uint)((uVar23 & 0xffffffff) * (ulonglong)uVar14 >> 0x20);
  lVar2 = (uVar23 & 0xffffffff) * (ulonglong)uVar13;
  uVar17 = (uint)lVar2;
  uVar16 = (uint)((ulonglong)uVar14 * (ulonglong)uVar8);
  uVar9 = uVar17 + uVar16;
  uVar10 = uVar9 + uVar11;
  uVar15 = uVar10 + uVar12;
  FUN_0010f710(uVar15 - (uint)local_48,
               (((int)uVar13 >> 0x1f) * (int)uVar23 + (int)((ulonglong)lVar2 >> 0x20) +
                ((int)uVar8 >> 0x1f) * uVar14 + (int)((ulonglong)uVar14 * (ulonglong)uVar8 >> 0x20)
                + (uint)CARRY4(uVar17,uVar16) + uVar13 * uVar8 + (uint)CARRY4(uVar9,uVar11) + iVar18
               + (uint)CARRY4(uVar10,uVar12)) - (local_48._4_4_ + (uint)(uVar15 < (uint)local_48)),
               (int)lVar22,(int)((ulonglong)lVar22 >> 0x20));
  return lVar22 + local_48;
}


