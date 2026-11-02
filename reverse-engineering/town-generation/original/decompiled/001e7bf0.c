/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001e7bf0. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001e7bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_358;
  int iStack_354;
  undefined4 *local_350;
  undefined4 *local_34c;
  int local_254;
  int iStack_250;
  undefined4 *local_24c;
  undefined4 *local_248;
  int local_150;
  int iStack_14c;
  undefined4 *local_148;
  undefined4 *local_144;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_008a150c(&local_150);
  FUN_008a150c(&local_254);
  FUN_008a150c(&local_358);
  uVar1 = FUN_005885ac();
  FUN_007dc9d8(auStack_48,uVar1);
  FUN_007dca10(auStack_38,uVar1);
  iVar2 = FUN_007dc980(auStack_38,auStack_48);
  while (iVar2 != 0) {
    FUN_0059afac(auStack_28,auStack_30);
    iVar2 = FUN_005886a8(auStack_28);
    puVar4 = local_144;
    puVar3 = local_248;
    if (iVar2 == 0) {
      if (local_254 < iStack_250) {
        if (local_248 != (undefined4 *)0x0) {
          local_248 = (undefined4 *)*local_248;
          puVar3 = (undefined4 *)FUN_0059afac(puVar3,auStack_28);
        }
        if (local_254 < iStack_250) {
          local_24c[local_254] = puVar3;
          local_254 = local_254 + 1;
        }
      }
    }
    else if (local_150 < iStack_14c) {
      puVar3 = local_144;
      if (local_144 != (undefined4 *)0x0) {
        local_144 = (undefined4 *)*local_144;
        puVar3 = (undefined4 *)FUN_0059afac(puVar4,auStack_28);
      }
      if (local_150 < iStack_14c) {
        local_148[local_150] = puVar3;
        local_150 = local_150 + 1;
      }
    }
    FUN_0059b024(auStack_38);
    iVar2 = FUN_007dc980(auStack_38,auStack_48);
  }
  do {
    if (local_254 < 1) {
      FUN_005a6734(&local_358,param_3);
      while( true ) {
        if (local_358 < 1) {
          return 0;
        }
        if (local_358 == 0) {
          uVar1 = 0;
        }
        else {
          uVar1 = *local_350;
        }
        iVar2 = FUN_00588808(uVar1,param_2,param_3);
        if (iVar2 != 0) break;
        if (0 < local_358) {
          puVar3 = (undefined4 *)*local_350;
          *puVar3 = local_34c;
          local_34c = puVar3;
        }
        FUN_005a66dc(&local_358,0,1);
      }
      return 1;
    }
    if (local_254 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *local_24c;
    }
    puVar4 = local_148 + local_150;
    for (puVar3 = local_148; puVar3 != puVar4; puVar3 = puVar3 + 1) {
      iVar2 = FUN_00588350(*puVar3,uVar1);
      if (iVar2 == 0) {
        FUN_0059afac(auStack_30,uVar1);
        puVar3 = local_34c;
        if (local_358 < iStack_354) {
          if (local_34c != (undefined4 *)0x0) {
            local_34c = (undefined4 *)*local_34c;
            puVar3 = (undefined4 *)FUN_0059afac(puVar3,auStack_30);
          }
          if (local_358 < iStack_354) {
            local_350[local_358] = puVar3;
            local_358 = local_358 + 1;
          }
        }
        break;
      }
    }
    if (0 < local_254) {
      puVar3 = (undefined4 *)*local_24c;
      *puVar3 = local_248;
      local_248 = puVar3;
    }
    FUN_005a66dc(&local_254,0,1);
  } while( true );
}


