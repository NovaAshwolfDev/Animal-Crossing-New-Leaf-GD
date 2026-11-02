/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001b848c. Provisional types; not original source or a verified portable implementation. */

void FUN_001b848c(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 local_90 [6];
  undefined1 auStack_78 [28];
  int local_5c [7];
  undefined1 auStack_40 [4];
  byte *local_3c;
  int local_30 [3];
  
  FUN_005ca458(auStack_40);
  uVar3 = FUN_0011a378(*DAT_001b87f4);
  thunk_FUN_005ca2fc(auStack_40,param_2,uVar3,0);
  uVar16 = 0;
  do {
    uVar12 = 0;
    do {
      uVar9 = 0;
      iVar11 = ((uVar16 << 0x1e) >> 0x17) + (uVar12 & 0x1f) * 4;
      do {
        pbVar10 = local_3c;
        uVar14 = uVar9 * 2 & 0x1f;
        iVar13 = param_1 + (iVar11 + (uVar14 >> 3)) * 4;
        uVar14 = (uVar14 << 0x1d) >> 0x1b;
        uVar8 = uVar9 * 2 + 1 & 0x1f;
        *(uint *)(iVar13 + 0x6c) =
             (uint)(*pbVar10 >> 4) << uVar14 | *(uint *)(iVar13 + 0x6c) & ~(0xf << uVar14);
        local_3c = pbVar10 + 1;
        iVar13 = param_1 + (iVar11 + (uVar8 >> 3)) * 4;
        uVar14 = (uVar8 << 0x1d) >> 0x1b;
        uVar9 = uVar9 + 1;
        *(uint *)(iVar13 + 0x6c) =
             (*pbVar10 & 0xf) << uVar14 | *(uint *)(iVar13 + 0x6c) & ~(0xf << uVar14);
      } while (uVar9 < 0x10);
      uVar12 = uVar12 + 1;
    } while (uVar12 < 0x20);
    uVar16 = uVar16 + 1;
  } while (uVar16 < 4);
  iVar11 = 0;
  iVar13 = 0xf;
  do {
    iVar15 = param_1 + iVar11;
    iVar13 = iVar13 + -1;
    iVar11 = iVar11 + 1;
    *(byte *)(iVar15 + 0x58) = *local_3c;
    local_3c = local_3c + 1;
  } while (iVar13 != 0);
  bVar1 = pbVar10[0x10];
  puVar4 = (undefined4 *)FUN_0066c09c(local_90,auStack_78,0x15);
  uVar3 = DAT_001b87f8;
  *puVar4 = DAT_001b87f8;
  iVar11 = FUN_00664320(puVar4 + 3);
  FUN_002fff30(iVar11 + 0xc,0x2a);
  puVar2 = DAT_001b87fc;
  puVar5 = (undefined2 *)(iVar11 + 0xc);
  *(undefined2 *)(iVar11 + 0xc) = *DAT_001b87fc;
  iVar11 = 10;
  do {
    iVar11 = iVar11 + -1;
    puVar5[1] = *puVar2;
    puVar5 = puVar5 + 2;
    *puVar5 = *puVar2;
    puVar4 = DAT_001b8810;
  } while (iVar11 != 0);
  FUN_007f0fb4(*DAT_001b8810,local_90,"STR_Mydesign",bVar1);
  FUN_00672614(local_30,param_1,0x15);
  (**(code **)(local_30[0] + 0x14))(local_30,local_90);
  local_90[0] = uVar3;
  bVar1 = pbVar10[0x11];
  puVar6 = (undefined4 *)FUN_0066c09c(local_90,auStack_78,9);
  uVar3 = DAT_001b8814;
  *puVar6 = DAT_001b8814;
  iVar11 = FUN_00664320(puVar6 + 3);
  FUN_002fff30(iVar11 + 0xc,0x12);
  puVar5 = (undefined2 *)(iVar11 + 0xc);
  *(undefined2 *)(iVar11 + 0xc) = *puVar2;
  iVar11 = 4;
  do {
    iVar11 = iVar11 + -1;
    puVar5[1] = *puVar2;
    puVar5 = puVar5 + 2;
    *puVar5 = *puVar2;
  } while (iVar11 != 0);
  FUN_007f0fb4(*puVar4,local_90,"STR_Mydesign",bVar1);
  piVar7 = (int *)FUN_0066c09c(local_5c,param_1 + 0x42,9);
  iVar11 = DAT_001b8818;
  *piVar7 = DAT_001b8818;
  (**(code **)(iVar11 + 0x14))(piVar7,local_90);
  local_90[0] = uVar3;
  bVar1 = pbVar10[0x12];
  puVar6 = (undefined4 *)FUN_0066c09c(local_90,auStack_78,9);
  *puVar6 = uVar3;
  iVar11 = FUN_00664320(puVar6 + 3);
  FUN_002fff30(iVar11 + 0xc,0x12);
  puVar5 = (undefined2 *)(iVar11 + 0xc);
  *(undefined2 *)(iVar11 + 0xc) = *puVar2;
  iVar11 = 4;
  do {
    iVar11 = iVar11 + -1;
    puVar5[1] = *puVar2;
    puVar5 = puVar5 + 2;
    *puVar5 = *puVar2;
  } while (iVar11 != 0);
  FUN_007f0fb4(*puVar4,local_90,"STR_Mydesign",bVar1);
  FUN_00672614(local_5c,param_1 + 0x2c,9);
  (**(code **)(local_5c[0] + 0x14))(local_5c,local_90);
  local_90[0] = uVar3;
  *(byte *)(param_1 + 0x68) = pbVar10[0x13];
  *(byte *)(param_1 + 0x69) = pbVar10[0x14];
  FUN_00121940(auStack_40);
  FUN_001b6c20(param_1);
  FUN_00124a44(auStack_40);
  return;
}


