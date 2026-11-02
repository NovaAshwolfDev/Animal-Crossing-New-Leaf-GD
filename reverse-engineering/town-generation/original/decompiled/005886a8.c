/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005886a8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_005886a8(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c [4];
  
  uVar1 = FUN_00285cac(0);
  FUN_007acdd0(&local_60,uVar1);
  FUN_007acd50(&local_78,uVar1);
  local_90 = local_60;
  uStack_8c = uStack_5c;
  local_88 = uStack_58;
  uStack_84 = uStack_54;
  local_80 = uStack_50;
  uStack_7c = uStack_4c;
  local_a8 = local_78;
  uStack_a4 = uStack_74;
  uStack_a0 = uStack_70;
  uStack_9c = uStack_6c;
  uStack_98 = local_68;
  uStack_94 = uStack_64;
  iVar3 = *param_1;
  iVar4 = param_1[1];
  iVar2 = FUN_007acd1c(&local_90,&local_a8);
  do {
    local_48 = local_a8;
    uStack_44 = uStack_a4;
    uStack_40 = uStack_a0;
    uStack_3c = uStack_9c;
    uStack_38 = uStack_98;
    uStack_34 = uStack_94;
    if (iVar2 == 0) {
LAB_005887b4:
      uVar1 = FUN_007acd1c(&local_78,&local_48);
      return uVar1;
    }
    iVar2 = FUN_00767cd4(local_80 & 0xff);
    if (iVar2 != 0) {
      local_30 = 0;
      local_2c[0] = 0;
      FUN_00745de0(&local_30,local_2c,local_88,uStack_84);
      if ((iVar3 == local_30) && (iVar4 == local_2c[0])) {
        local_48 = local_90;
        uStack_44 = uStack_8c;
        uStack_40 = local_88;
        uStack_3c = uStack_84;
        uStack_38 = local_80;
        uStack_34 = uStack_7c;
        goto LAB_005887b4;
      }
    }
    FUN_001cbd60(&local_90);
    iVar2 = FUN_007acd1c(&local_90,&local_a8);
  } while( true );
}


