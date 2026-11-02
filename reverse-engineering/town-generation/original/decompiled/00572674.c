/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00572674. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00572674(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  undefined4 local_170 [6];
  undefined1 auStack_158 [128];
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 *local_cc;
  int local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4 [3];
  undefined1 auStack_a8 [136];
  
  FUN_00444c0c(DAT_0057288c);
  uVar3 = DAT_00572898;
  uVar2 = DAT_00572894;
  puVar1 = DAT_00572890;
  uVar10 = *DAT_00572890;
  uVar5 = FUN_00444e6c(DAT_00572894,0);
  uVar6 = FUN_0044595c(uVar10,uVar5,uVar3);
  if ((uVar6 & 0x80000000) == 0) {
    uVar5 = 0;
  }
  else if (uVar6 == DAT_0057289c) {
    uVar5 = 2;
    if (param_1 != 0) {
      local_d8 = 0;
      local_d4 = 0;
      local_d0 = 0;
      local_cc = (undefined1 *)0x0;
      local_c4 = 0x80000;
      local_bc = 99;
      local_c0 = 0x80000;
      local_b8 = 99;
      local_c8 = 0;
      puVar7 = (undefined4 *)FUN_0066c09c(local_170,auStack_158,0x40);
      uVar5 = DAT_005728a0;
      *puVar7 = DAT_005728a0;
      iVar8 = FUN_00664320(puVar7 + 3);
      FUN_002fff30(iVar8 + 0xc,0x80);
      puVar4 = DAT_005728a4;
      puVar9 = (undefined2 *)(iVar8 + 10);
      iVar8 = 0x20;
      do {
        iVar8 = iVar8 + -1;
        puVar9[1] = *puVar4;
        puVar9 = puVar9 + 2;
        *puVar9 = *puVar4;
        puVar7 = DAT_005728a8;
      } while (iVar8 != 0);
      FUN_0065a34c(*DAT_005728a8,0);
      FUN_0065a3d8(*puVar7,local_170,&DAT_005728ac,0,0);
      FUN_0065a324(*puVar7,0);
      puVar7 = (undefined4 *)FUN_0066c09c(local_b4,auStack_a8,0x40);
      *puVar7 = DAT_005728b4;
      (**(code **)(local_b4[0] + 0x14))(local_b4,local_170);
      local_cc = auStack_a8;
      local_c8 = FUN_007efdf0(local_b4);
      local_c8 = local_c8 << 1;
      local_170[0] = uVar5;
      FUN_0074860c(DAT_005728b8,puVar1[1]);
      local_d4 = *(undefined4 *)(DAT_005728b8 + 8);
      local_d0 = *(undefined4 *)(DAT_005728b8 + 0xc);
      local_d8 = DAT_005728bc;
      local_c4 = 0xec000;
      local_c0 = 0x14000;
      local_bc = 0x14;
      local_b8 = 2;
      uVar5 = FUN_00572dbc(*puVar1,&local_d8,uVar2,uVar3,0);
      FUN_007486a8(DAT_005728b8);
    }
  }
  else if (uVar6 == DAT_005728c0) {
    uVar5 = 3;
  }
  else if (uVar6 == DAT_005728c4) {
    uVar5 = 1;
  }
  else {
    uVar5 = 4;
  }
  return uVar5;
}


