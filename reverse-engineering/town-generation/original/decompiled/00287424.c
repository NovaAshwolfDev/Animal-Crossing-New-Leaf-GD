/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00287424. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_00287424(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  
  piVar1 = DAT_002876b4;
  uVar4 = 0;
  do {
    piVar2 = DAT_002876b4;
    if (uVar4 < 4) {
      piVar2 = piVar1 + uVar4;
    }
    if (*piVar2 != 0) {
      piVar2 = DAT_002876b4;
      if (uVar4 < 4) {
        piVar2 = piVar1 + uVar4;
      }
      FUN_003c25c4(*piVar2);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  uVar5 = *DAT_002876b8;
  FUN_007acd50(&local_48,uVar5);
  FUN_007acdd0(&local_30,uVar5);
  iVar3 = FUN_007acd1c(&local_30,&local_48);
  while (iVar3 != 0) {
    FUN_00592334(1,local_28,local_24,local_20 & 0xff,local_1c);
    FUN_001cbd60(&local_30);
    iVar3 = FUN_007acd1c(&local_30,&local_48);
  }
  uVar5 = *DAT_002876bc;
  FUN_007acd50(&local_60,uVar5);
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = local_58;
  uStack_3c = local_54;
  uStack_38 = local_50;
  uStack_34 = local_4c;
  FUN_007acdd0(&local_60,uVar5);
  local_30 = local_60;
  uStack_2c = uStack_5c;
  local_28 = local_58;
  local_24 = local_54;
  local_20 = local_50;
  local_1c = local_4c;
  iVar3 = FUN_007acd1c(&local_30,&local_48);
  while (iVar3 != 0) {
    FUN_00592334(1,local_28,local_24,local_20 & 0xff,local_1c);
    FUN_001cbd60(&local_30);
    iVar3 = FUN_007acd1c(&local_30,&local_48);
  }
  uVar5 = *DAT_002876c0;
  FUN_007acd50(&local_48,uVar5);
  FUN_007acdd0(&local_60,uVar5);
  iVar3 = FUN_007acd1c(&local_60,&local_48);
  while (iVar3 != 0) {
    FUN_00592334(2,local_58,local_54,local_50 & 0xff,local_4c);
    FUN_001cbd60(&local_60);
    iVar3 = FUN_007acd1c(&local_60,&local_48);
  }
  return &local_48;
}


