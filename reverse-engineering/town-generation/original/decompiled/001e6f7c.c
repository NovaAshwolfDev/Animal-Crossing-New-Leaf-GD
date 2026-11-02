/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001e6f7c. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001e6f7c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_14c;
  int iStack_148;
  undefined4 *local_144;
  undefined4 *local_140;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_008a150c(&local_14c);
  uVar1 = FUN_005885ac();
  FUN_007dc9d8(auStack_48,uVar1);
  FUN_007dca10(auStack_38,uVar1);
  iVar2 = FUN_007dc980(auStack_38,auStack_48);
  while (iVar2 != 0) {
    iVar2 = FUN_005886a8(auStack_30);
    if (iVar2 != 0) {
      FUN_0059afac(auStack_28,auStack_30);
      puVar3 = local_140;
      if (local_14c < iStack_148) {
        if (local_140 != (undefined4 *)0x0) {
          local_140 = (undefined4 *)*local_140;
          puVar3 = (undefined4 *)FUN_0059afac(puVar3,auStack_28);
        }
        if (local_14c < iStack_148) {
          local_144[local_14c] = puVar3;
          local_14c = local_14c + 1;
        }
      }
    }
    FUN_0059b024(auStack_38);
    iVar2 = FUN_007dc980(auStack_38,auStack_48);
  }
  FUN_005a6734(&local_14c,param_3);
  while( true ) {
    if (local_14c < 1) {
      return 0;
    }
    if (local_14c == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *local_144;
    }
    iVar2 = FUN_00588808(uVar1,param_2,param_3);
    if (iVar2 != 0) break;
    if (0 < local_14c) {
      puVar3 = (undefined4 *)*local_144;
      *puVar3 = local_140;
      local_140 = puVar3;
    }
    FUN_005a66dc(&local_14c,0,1);
  }
  return 1;
}


