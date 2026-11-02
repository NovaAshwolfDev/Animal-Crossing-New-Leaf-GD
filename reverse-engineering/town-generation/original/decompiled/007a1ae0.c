/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007a1ae0. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_007a1ae0(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [20];
  
  puVar1 = (undefined1 *)FUN_0074702c(1);
  if (puVar1 != (undefined1 *)0x0) {
    FUN_0059b104(auStack_48,puVar1);
    iVar2 = FUN_0074702c(1);
    FUN_007dca10(&local_78,auStack_48);
    FUN_007dc9d8(&local_58,auStack_48);
    local_68 = local_58;
    local_64 = local_54;
    FUN_0059afac(auStack_60,auStack_50);
    local_88 = local_78;
    local_84 = local_74;
    FUN_0059afac(&local_80,auStack_70);
    iVar3 = FUN_007dc980(&local_88,&local_68);
    local_98 = local_68;
    local_94 = local_64;
    while (local_68 = local_98, local_64 = local_94, iVar3 != 0) {
      if (((iVar2 != 0) &&
          (puVar4 = (undefined2 *)FUN_007e23e0(iVar2,local_80,uStack_7c),
          puVar4 != (undefined2 *)0x0)) && (iVar3 = FUN_00687d78(*puVar4), iVar3 == 1)) {
        local_98 = local_88;
        local_94 = local_84;
        FUN_0059afac(&local_90,&local_80);
        goto LAB_007a1c24;
      }
      FUN_0059b024(&local_88);
      iVar3 = FUN_007dc980(&local_88,&local_68);
      local_98 = local_68;
      local_94 = local_64;
    }
    FUN_0059afac(&local_90,auStack_60);
LAB_007a1c24:
    FUN_007dc9d8(auStack_30,auStack_48);
    iVar2 = FUN_007dc980(&local_98,auStack_30);
    if (iVar2 != 0) {
      *param_1 = local_90;
      *param_2 = local_8c;
    }
    puVar1 = auStack_48;
  }
  return puVar1;
}


