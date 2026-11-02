/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003c04c8. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_003c04c8(undefined4 param_1)

{
  undefined2 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined1 auStack_284 [4];
  undefined4 local_280;
  undefined1 auStack_27c [304];
  undefined1 auStack_14c [4];
  int local_148;
  undefined1 auStack_140 [4];
  int local_13c;
  undefined1 auStack_134 [4];
  int local_130;
  int local_128;
  undefined1 *local_124;
  undefined4 local_120;
  undefined1 local_11c [4];
  undefined4 local_118;
  char *local_114;
  undefined1 uStack_cd;
  undefined1 auStack_c8 [20];
  undefined1 local_b4 [4];
  undefined1 auStack_b0 [32];
  char local_90 [32];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  char *pcStack_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [36];
  
  local_70 = 3;
  uStack_6c = 3;
  uVar3 = FUN_0059af60();
  FUN_0059b0e0(auStack_b0,uVar3,&local_70);
  iVar13 = 0;
  FUN_007dc9d8(auStack_c8,auStack_b0);
  iVar4 = FUN_0074702c(0x1e);
  if (iVar4 != 0) {
    FUN_007dca10(&local_120,auStack_b0);
    iVar5 = FUN_007dc980(&local_120,auStack_c8);
    while (iVar5 != 0) {
      puVar6 = (undefined2 *)FUN_007e23e0(iVar4,local_118,local_114);
      puVar7 = (undefined2 *)FUN_007c2ce8(param_1,local_118,local_114);
      *puVar6 = *puVar7;
      FUN_0059b024(&local_120);
      iVar5 = FUN_007dc980(&local_120,auStack_c8);
    }
    iVar5 = 0;
    do {
      iVar12 = 0;
      do {
        uVar3 = FUN_003c8138(param_1,iVar12,iVar5);
        iVar8 = FUN_007e23e0(iVar4,iVar12 + 1,iVar5 + 1);
        if (iVar8 != 0) {
          FUN_005dc588(iVar8,uVar3,0);
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < 2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    FUN_007dca10(&local_120,auStack_b0);
    iVar5 = FUN_007dc980(&local_120,auStack_c8);
    while (iVar5 != 0) {
      iVar5 = FUN_007e206c(iVar4,local_118,local_114);
      puVar6 = (undefined2 *)FUN_007e23e0(iVar4,local_118,local_114);
      if (iVar5 != 0 && puVar6 != (undefined2 *)0x0) {
        uVar1 = *puVar6;
        uVar3 = FUN_001cd62c();
        iVar12 = FUN_001cd81c(uVar3,uVar1);
        if (iVar12 != 0) {
          FUN_00748d30(iVar5,iVar12,0xa00);
        }
      }
      FUN_0059b024(&local_120);
      iVar5 = FUN_007dc980(&local_120,auStack_c8);
    }
    FUN_00288484(&local_120);
    iVar12 = FUN_0011a378(*DAT_003c0b1c);
    iVar5 = FUN_005c780c(auStack_284);
    iVar5 = FUN_00100648(iVar5 + 8,DAT_003c0b20,0x130,1);
    iVar5 = FUN_0010d718(iVar5 + 0x130);
    iVar5 = FUN_0010d718(iVar5 + 0xc);
    FUN_0010d718(iVar5 + 0xc);
    for (iVar5 = local_148; iVar8 = local_130, iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
      FUN_0060f000(iVar5 + 0xc);
      FUN_00121a30(iVar5 + 0x14);
    }
    for (; iVar8 != 0; iVar8 = *(int *)(iVar8 + 8)) {
      FUN_0060f000(iVar8 + 0xc);
      FUN_00121a30(iVar8 + 0x14);
    }
    FUN_001193a8(auStack_14c);
    FUN_001193a8(auStack_140);
    FUN_001193a8(auStack_134);
    FUN_00124be4(auStack_140,auStack_27c);
    FUN_00113b48(auStack_284);
    uVar3 = DAT_003c0b24;
    if (iVar12 != 0) {
      local_114 = "ResourceMgr";
      local_118 = DAT_003c0b24;
      FUN_005c774c(auStack_284,0x19000,iVar12,&local_118,1);
    }
    local_124 = local_11c;
    local_120 = 0x50;
    local_b4[0] = 0;
    uStack_cd = 0;
    local_128 = DAT_003c0b5c;
    local_11c[0] = 0;
    uVar9 = FUN_005ad830(auStack_48,&local_128);
    uVar9 = FUN_005a9cd4(uVar9,&DAT_003c0b60);
    iVar5 = FUN_005a9cd4(uVar9,"Bg/Outdoor/Textures/GrassBaldness.bcres");
    iVar12 = FUN_005a9714(iVar5,local_90);
    if (iVar12 != 0) {
      if (local_90[0] == '\0') {
        pcVar11 = (char *)0x0;
      }
      else {
        pcVar11 = local_90;
      }
      FUN_005a98f4(local_b4,pcVar11,*(undefined4 *)(iVar5 + 4));
    }
    FUN_005a9c0c(iVar5);
    (**(code **)(local_128 + 8))(&local_128);
    puVar2 = local_124;
    uVar9 = FUN_00301bac(local_124);
    uVar9 = FUN_005cafa8(puVar2,uVar9,0xffffffff);
    uVar10 = FUN_0060f024(auStack_50);
    FUN_0060eff0(uVar10,uVar9);
    iVar12 = local_13c;
    for (iVar5 = local_148; iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
      local_13c = iVar12;
      iVar12 = FUN_007e51bc(auStack_50,iVar5 + 0xc);
      if (iVar12 != 0) {
        FUN_0060f010(auStack_68,auStack_50);
        goto LAB_003c09dc;
      }
      iVar12 = local_13c;
    }
    uStack_58 = uVar3;
    pcStack_54 = "Bg/Outdoor/Textures/GrassBaldness.bcres";
    FUN_005564f8(iVar12 + 0x14,&uStack_58,local_280,0x80);
    FUN_0060f038(iVar12 + 0xc,auStack_50);
    FUN_00124ab0(auStack_140,iVar12);
    FUN_00124be4(auStack_14c,iVar12);
    FUN_0060f010(auStack_68,iVar12 + 0xc);
LAB_003c09dc:
    uVar3 = FUN_0060f010(auStack_60,auStack_68);
    for (iVar5 = local_148; iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
      iVar12 = FUN_007e51bc(uVar3,iVar5 + 0xc);
      if (iVar12 != 0) {
        iVar13 = iVar5 + 0x14;
        break;
      }
    }
    FUN_007a0858(iVar4,iVar13);
    for (; iVar4 = local_130, local_148 != 0; local_148 = *(int *)(local_148 + 8)) {
      FUN_0060f000(local_148 + 0xc);
      FUN_00121a30(local_148 + 0x14);
    }
    for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
      FUN_0060f000(iVar4 + 0xc);
      FUN_00121a30(iVar4 + 0x14);
    }
    FUN_001193a8(auStack_14c);
    FUN_001193a8(auStack_140);
    FUN_001193a8(auStack_134);
    FUN_00124be4(auStack_140,auStack_27c);
    FUN_00113b48(auStack_284);
    FUN_00100730(auStack_27c,DAT_003c0b68,0x130,1);
    FUN_005c7828(auStack_284);
  }
  return auStack_b0;
}


