/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002d7f88. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint town_candidate_step(void *arg0,uint arg1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte *pbVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint local_2c0;
  undefined4 local_2bc;
  ushort local_2b8;
  byte local_2b6 [6];
  undefined1 local_2b0 [8];
  char local_2a8 [8];
  undefined1 auStack_2a0 [8];
  undefined1 auStack_298 [16];
  undefined1 local_288;
  undefined4 local_20c;
  void *local_208;
  undefined4 local_1fc [102];
  void *local_64;
  undefined4 local_4c;
  uint *local_38;
  undefined1 auStack_34 [8];
  void *local_2c;
  uint uStack_28;
  
  local_2c = arg0;
  uStack_28 = arg1;
  iVar5 = FUN_0074702c(1);
  piVar4 = DAT_002d87b8;
  local_38 = DAT_002d87b4 + arg1;
  iVar6 = *DAT_002d87b8;
  if (iVar6 == 0) {
    puVar7 = DAT_002d87b4;
    if (arg1 < 4) {
      puVar7 = local_38;
    }
    rng_seed_u32(DAT_002d87bc,*puVar7);
    FUN_00285eb8();
    FUN_00285804(1);
    FUN_003c25c4();
    FUN_00697944(local_2c);
    iVar6 = FUN_00636e3c();
    FUN_0063aa5c(iVar6 + 0x49520);
    uVar13 = rng_next_u32(DAT_002d87bc);
    *(char *)((int)local_2c + 1) = (char)((ulonglong)uVar13 * 3 >> 0x20);
    uVar13 = rng_next_u32(DAT_002d87bc);
    *(char *)((int)local_2c + 2) = (char)((ulonglong)uVar13 * 3 >> 0x20);
    pbVar8 = DAT_002d87c0 + arg1;
    pbVar16 = DAT_002d87c0;
    if (arg1 < 4) {
      pbVar16 = pbVar8;
    }
    if (*pbVar16 == 0) {
      if (3 < arg1) {
        pbVar8 = DAT_002d87c0;
      }
      terrain_generate(local_2c,(void *)((int)DAT_002d87c8 + 0x1f8),(uint)*pbVar8,DAT_002d87c8);
    }
    else {
      pbVar16 = DAT_002d87c0;
      if (arg1 < 4) {
        pbVar16 = pbVar8;
      }
      terrain_generate(local_2c,(void *)((int)DAT_002d87c4 + 0xfc),(uint)*pbVar16,DAT_002d87c4);
    }
    uVar13 = 0;
    do {
      uVar17 = 0;
      do {
        puVar9 = (undefined2 *)FUN_007e23e0(iVar5,uVar17,uVar13);
        if (puVar9 != (undefined2 *)0x0) {
          puVar10 = (undefined2 *)FUN_007f3690(local_2c,uVar17,uVar13);
          *puVar9 = *puVar10;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < 7);
      uVar13 = uVar13 + 1;
    } while (uVar13 < 6);
    uVar13 = 0;
    do {
      uVar17 = 0;
      do {
        iVar6 = FUN_00697880(uVar17,uVar13);
        if (iVar6 != 0) {
          uVar14 = FUN_00697800(local_2c,uVar17,uVar13);
          iVar6 = FUN_007e23e0(iVar5,uVar17 + 1,uVar13 + 1);
          if (iVar6 != 0) {
            FUN_005dc588(iVar6,uVar14,0);
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < 5);
      uVar13 = uVar13 + 1;
    } while (uVar13 < 4);
    uVar14 = FUN_006978d4(local_2c);
    *(undefined4 *)(iVar5 + 0x28) = uVar14;
    FUN_007a14f4(1);
    uVar13 = 1;
    local_64 = local_2c;
    do {
      uVar17 = 1;
      do {
        local_4c = FUN_006977dc(local_64,uVar17 - 1,uVar13 - 1);
        puVar9 = (undefined2 *)FUN_007f3690(local_64,uVar17,uVar13);
        uVar11 = FUN_0078cff4(&local_2c0,600,*puVar9);
        uVar18 = 0;
        if (uVar11 != 0) {
          do {
            iVar5 = uVar18 * 6;
            uVar1 = *(undefined1 *)((int)&local_2bc + iVar5);
            uVar2 = *(undefined1 *)((int)&local_2bc + iVar5 + 1);
            uVar14 = FUN_00756d40(auStack_34,*(undefined2 *)((int)&local_2c0 + iVar5));
            FUN_00797688(local_4c,uVar14,uVar1,uVar2);
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar11);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < 6);
      uVar13 = uVar13 + 1;
    } while (uVar13 < 5);
    uVar13 = 1;
    local_208 = local_2c;
    local_1fc[0] = 0;
    local_20c = 0;
    do {
      uVar17 = 1;
      do {
        puVar9 = (undefined2 *)FUN_007f3690(local_208,uVar17,uVar13);
        uVar11 = FUN_001e9800(&local_2b8,0xa0,*puVar9);
        uVar18 = 0;
        if (uVar11 != 0) {
          do {
            iVar5 = uVar18 * 4;
            local_2bc = (uint)local_2b6[iVar5 + 1];
            local_2c0 = (uint)local_2b6[iVar5];
            uVar3 = *(ushort *)(local_2b6 + iVar5 + -2);
            FUN_00745ff8(local_1fc,&local_20c,uVar17,uVar13);
            FUN_002876dc(local_1fc[0],local_20c,uVar3 & 0xff);
            uVar18 = uVar18 + 1;
          } while (uVar18 < uVar11);
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < 6);
      uVar13 = uVar13 + 1;
    } while (uVar13 < 5);
    FUN_001e6910(&local_2c0,0,DAT_002d87bc);
    uVar14 = FUN_00285cac(0);
    iVar5 = 0;
    FUN_007acd50(auStack_298,uVar14);
    FUN_007acdd0(&local_2c0,uVar14);
    iVar6 = FUN_007acd1c(&local_2c0,auStack_298);
    while (iVar6 != 0) {
      iVar6 = FUN_0076994c(local_2b0[0]);
      if (iVar6 != 0) {
        iVar5 = iVar5 + 1;
      }
      FUN_001cbd60(&local_2c0);
      iVar6 = FUN_007acd1c(&local_2c0,auStack_298);
    }
    iVar6 = 0;
    FUN_007acd50(&local_2b8,uVar14);
    FUN_007acdd0(auStack_298,uVar14);
    iVar15 = FUN_007acd1c(auStack_298,&local_2b8);
    while (iVar15 != 0) {
      iVar15 = FUN_00769928(local_288);
      if (iVar15 != 0) {
        iVar6 = iVar6 + 1;
      }
      FUN_001cbd60(auStack_298);
      iVar15 = FUN_007acd1c(auStack_298,&local_2b8);
    }
    iVar15 = 0;
    FUN_007acd50(local_2a8,uVar14);
    FUN_007acdd0(&local_2c0,uVar14);
    iVar12 = FUN_007acd1c(&local_2c0,local_2a8);
    while (iVar12 != 0) {
      iVar12 = FUN_00769904(local_2b0[0]);
      if (iVar12 != 0) {
        iVar15 = iVar15 + 1;
      }
      FUN_001cbd60(&local_2c0);
      iVar12 = FUN_007acd1c(&local_2c0,local_2a8);
    }
    if (iVar15 == 1 && (iVar5 == 1 && iVar6 == 1)) {
      *DAT_002d87b8 = 1;
      return 0;
    }
    *DAT_002d87b8 = 0;
    uVar13 = FUN_0011df38(0x7fffffff);
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 == 2) {
        uVar14 = FUN_0060f010(local_2b0,DAT_002d87cc);
        for (iVar6 = *(int *)(DAT_002d87d0 + 0x13c); iVar6 != 0; iVar6 = *(int *)(iVar6 + 8)) {
          iVar15 = FUN_007e51bc(uVar14,iVar6 + 0xc);
          if (iVar15 != 0) {
            iVar6 = iVar6 + 0x14;
            goto LAB_002d8774;
          }
        }
        iVar6 = 0;
LAB_002d8774:
        FUN_007a0858(iVar5,iVar6);
        iVar5 = FUN_00636e3c(local_2b0);
        FUN_003c01a8(iVar5 + DAT_002d87d4,DAT_002d87bc);
      }
      *piVar4 = 0;
      return 1;
    }
    FUN_002865a8(5,DAT_002d87bc);
    FUN_001e93ac(&local_2c0,DAT_002d87bc);
    local_2bc = 0;
    local_2c0 = 0;
    FUN_007a1d28(&local_2bc,&local_2c0);
    FUN_002876dc(local_2bc,local_2c0,0x59);
    uVar14 = FUN_00285cac(0);
    iVar5 = 0;
    FUN_007acd50(auStack_2a0,uVar14);
    FUN_007acdd0(&local_2c0,uVar14);
    iVar6 = FUN_007acd1c(&local_2c0,auStack_2a0);
    while (iVar6 != 0) {
      iVar6 = FUN_00767cd4(local_2b0[0]);
      if (iVar6 != 0) {
        iVar5 = iVar5 + 1;
      }
      FUN_001cbd60(&local_2c0);
      iVar6 = FUN_007acd1c(&local_2c0,auStack_2a0);
    }
    iVar6 = 0;
    FUN_007acd50(auStack_2a0,uVar14);
    FUN_007acdd0(&local_2b8,uVar14);
    iVar15 = FUN_007acd1c(&local_2b8,auStack_2a0);
    while (iVar15 != 0) {
      if (local_2a8[0] == '\\') {
        iVar6 = iVar6 + 1;
      }
      FUN_001cbd60(&local_2b8);
      iVar15 = FUN_007acd1c(&local_2b8,auStack_2a0);
    }
    if (iVar6 == 1 && iVar5 == 5) {
      *piVar4 = 2;
      return 0;
    }
    *piVar4 = 0;
    uVar13 = FUN_0011df38(0x7fffffff);
  }
  puVar7 = DAT_002d87b4;
  if (arg1 < 4) {
    puVar7 = local_38;
  }
  *puVar7 = uVar13;
  return 0;
}


