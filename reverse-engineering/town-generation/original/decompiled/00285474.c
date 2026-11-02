/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00285474. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_00285474(uint *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint in_r12;
  undefined1 auStack_a8 [8];
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint local_94;
  undefined1 auStack_88 [8];
  uint local_80;
  uint uStack_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint local_6c;
  undefined1 auStack_68 [8];
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  undefined1 auStack_40 [28];
  
  puVar1 = (undefined1 *)0x0;
  uVar8 = 0;
  piVar6 = DAT_00285788;
  if (param_4 < 4) {
    piVar6 = DAT_00285788 + param_4;
  }
  uVar14 = in_r12 & 0xffffff00 | 0xf8;
  uVar10 = 0;
  uVar12 = 0xffffffff;
  if (*piVar6 != 0) {
    puVar1 = (undefined1 *)FUN_007c0020();
  }
  uVar9 = uVar8;
  uVar11 = uVar10;
  uVar13 = uVar12;
  uVar15 = uVar14;
  if (param_4 == 1) {
LAB_002854f8:
    uVar7 = 0;
  }
  else if (param_4 == 2) {
LAB_00285524:
    uVar7 = 3;
  }
  else if (param_4 == 3) {
LAB_00285544:
    uVar7 = 4;
  }
  else {
    puVar5 = puVar1;
    if (param_4 != 0) goto LAB_002856d0;
    iVar2 = FUN_00610c2c();
    iVar3 = FUN_00611914(0x20,iVar2);
    if (iVar3 != 0) goto LAB_002854f8;
    if (iVar2 == 1) {
      uVar7 = 2;
    }
    else {
      iVar3 = FUN_00611914(0x40000,iVar2);
      if (iVar3 != 0) goto LAB_00285524;
      iVar3 = FUN_00611914(0x80000,iVar2);
      if (iVar3 != 0) goto LAB_00285544;
      if (iVar2 == 0x8e) {
        uVar7 = 5;
      }
      else if (iVar2 == 0x8f) {
        uVar7 = 6;
      }
      else if (iVar2 == 0x90) {
        uVar7 = 7;
      }
      else {
        if (iVar2 != 0x91) {
          puVar5 = (undefined1 *)0x0;
          goto LAB_002856d0;
        }
        uVar7 = 8;
      }
    }
  }
  puVar4 = DAT_0028578c;
  if (uVar7 < 0xc) {
    puVar4 = DAT_0028578c + uVar7;
  }
  uVar16 = *puVar4;
  FUN_0086a748(auStack_a8,uVar16,puVar1);
  FUN_007acd50(auStack_40,uVar16);
  iVar2 = FUN_007acd1c(auStack_a8,auStack_40);
  puVar5 = auStack_a8;
  uVar9 = local_a0;
  uVar11 = uStack_9c;
  uVar13 = local_94;
  uVar15 = uStack_98;
  if (iVar2 != 0) goto LAB_002856d0;
  if (uVar7 == 0) {
    uVar16 = *DAT_00285790;
    FUN_0086a748(auStack_88,uVar16,puVar1);
    FUN_007acd50(auStack_68,uVar16);
    iVar2 = FUN_007acd1c(auStack_88,auStack_68);
  }
  else {
    if (uVar7 == 6) {
      uVar16 = *DAT_00285794;
      FUN_0086a748(auStack_68,uVar16,puVar1);
      FUN_007acd50(&local_80,uVar16);
      iVar2 = FUN_007acd1c(auStack_68,&local_80);
      puVar5 = auStack_a8;
      uVar9 = uVar8;
      uVar11 = uVar10;
      uVar13 = uVar12;
      uVar15 = uVar14;
      if (iVar2 != 0) {
        puVar5 = auStack_a8;
        uVar9 = local_60;
        uVar11 = uStack_5c;
        uVar13 = local_54;
        uVar15 = uStack_58;
      }
      goto LAB_002856d0;
    }
    if (uVar7 != 7) {
      puVar5 = auStack_a8;
      uVar9 = uVar8;
      uVar11 = uVar10;
      uVar13 = uVar12;
      uVar15 = uVar14;
      if (uVar7 == 8) {
        uVar16 = *DAT_0028579c;
        FUN_0086a748(&local_80,uVar16,puVar1);
        FUN_007acd50(auStack_68,uVar16);
        iVar2 = FUN_007acd1c(&local_80,auStack_68);
        puVar5 = auStack_a8;
        if (iVar2 != 0) {
          puVar5 = auStack_a8;
          uVar9 = local_78;
          uVar11 = local_74;
          uVar13 = local_6c;
          uVar15 = uStack_70;
        }
      }
      goto LAB_002856d0;
    }
    uVar16 = *DAT_00285798;
    FUN_0086a748(auStack_88,uVar16,puVar1);
    FUN_007acd50(auStack_68,uVar16);
    iVar2 = FUN_007acd1c(auStack_88,auStack_68);
  }
  puVar5 = auStack_a8;
  uVar9 = uVar8;
  uVar11 = uVar10;
  uVar13 = uVar12;
  uVar15 = uVar14;
  if (iVar2 != 0) {
    puVar5 = auStack_a8;
    uVar9 = local_80;
    uVar11 = uStack_7c;
    uVar13 = local_74;
    uVar15 = local_78;
  }
LAB_002856d0:
  param_1[3] = uVar13;
  *param_1 = uVar9;
  param_1[1] = uVar11;
  param_1[2] = uVar15;
  return puVar5;
}


