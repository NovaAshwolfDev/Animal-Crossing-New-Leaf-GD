/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003c01a8. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_003c01a8(undefined1 *param_1,void *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined2 local_2f8 [2];
  undefined1 local_2f4 [596];
  undefined1 auStack_a0 [8];
  int local_98;
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [4];
  undefined4 local_84;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 *local_2c;
  void *pvStack_28;
  
  local_40 = 3;
  uStack_3c = 3;
  local_2c = param_1;
  pvStack_28 = param_2;
  uVar5 = FUN_0059af60();
  FUN_0059b0e0(auStack_68,uVar5,&local_40);
  FUN_007dc9d8(auStack_50,auStack_68);
  FUN_003c8168(local_2c);
  puVar4 = local_2c;
  local_38 = 3;
  uStack_34 = 3;
  uVar5 = FUN_0059af60();
  FUN_0059b0e0(&local_90,uVar5,&local_38);
  FUN_007dc9d8(auStack_78,&local_90);
  FUN_007dca10(auStack_a0,&local_90);
  iVar6 = FUN_007dc980(auStack_a0,auStack_78);
  iVar10 = DAT_003c04c4;
  while (iVar6 != 0) {
    puVar7 = (undefined2 *)FUN_003c82dc(puVar4,local_98,local_94);
    uVar8 = acre_choose_variant((uint)*(byte *)(local_98 + iVar10 + local_94 * 4),param_2);
    *puVar7 = (short)uVar8;
    FUN_0059b024(auStack_a0);
    iVar6 = FUN_007dc980(auStack_a0,auStack_78);
  }
  iVar10 = 0;
  do {
    iVar6 = 0;
    do {
      puVar7 = (undefined2 *)FUN_003c82dc(local_2c,iVar6 + 1,iVar10 + 1);
      uVar3 = *puVar7;
      local_84 = FUN_003c8120(local_2c,iVar6,iVar10);
      uVar8 = FUN_0078cff4(local_2f8,600,uVar3);
      uVar9 = 0;
      if (uVar8 != 0) {
        do {
          uVar1 = local_2f4[uVar9 * 6];
          uVar2 = local_2f4[uVar9 * 6 + 1];
          FUN_00756d40(auStack_88,local_2f8[uVar9 * 3]);
          FUN_00797688(local_84,auStack_88,uVar1,uVar2);
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar8);
      }
      puVar4 = local_2c;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 2);
  local_90 = 1;
  uStack_8c = 1;
  puVar7 = (undefined2 *)FUN_003c82dc(local_2c,1,1);
  uVar5 = FUN_0059af60(*puVar7);
  FUN_0059adbc(&local_98,&local_90,uVar5);
  local_98 = local_98 + 0xf;
  local_94 = local_94 + 5;
  uVar5 = FUN_003c8154(puVar4,0);
  FUN_00294318(uVar5,0x69,local_98,local_94);
  uVar5 = FUN_003c8154(puVar4,1);
  FUN_00294318(uVar5,0x6a,local_98 + -2,local_94);
  uVar8 = rng_next_u32(param_2);
  *local_2c = (char)((ulonglong)uVar8 * 3 >> 0x20);
  uVar8 = rng_next_u32(param_2);
  local_2c[1] = (char)((ulonglong)uVar8 * 3 >> 0x20);
  return auStack_68;
}


