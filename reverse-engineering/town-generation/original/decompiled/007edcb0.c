/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007edcb0. Provisional types; not original source or a verified portable implementation. */

void FUN_007edcb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined1 auStack_48 [4];
  undefined8 local_44;
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  undefined4 uStack_20;
  
  puVar2 = (undefined8 *)&local_60;
  if (param_5 == 0) {
    FUN_005cc750(auStack_48);
    FUN_007edb08(&local_54,param_1);
    local_60 = local_54;
    local_5c = CONCAT44(local_50._4_4_,(undefined4)local_50);
    puVar1 = (undefined8 *)auStack_48;
  }
  else {
    local_50 = FUN_007edf28(param_1);
    FUN_0080c0b0(auStack_38);
    FUN_0011a3e0(auStack_38,&local_50);
    local_50._0_4_ = param_3;
    local_50._4_4_ = param_4;
    FUN_0080c0b0(auStack_30);
    FUN_0011a3e0(auStack_30,&local_50);
    FUN_007edb08(&local_28,auStack_38);
    local_50._0_4_ = (undefined4)local_28;
    local_50._4_4_ = local_28._4_4_;
    auStack_48 = (undefined1  [4])uStack_20;
    FUN_005cd238(&local_50);
    local_28 = FUN_005cc318(&local_50);
    FUN_0080c0b0(auStack_38);
    FUN_0011a3e0(auStack_38,&local_28);
    FUN_007edb08(&local_28,auStack_30);
    auStack_48 = (undefined1  [4])uStack_20;
    local_50 = local_28;
    FUN_005cd238(&local_50);
    uVar3 = FUN_005cc318(&local_50);
    local_28 = uVar3;
    FUN_0080c0b0(auStack_30);
    FUN_0011a3e0(auStack_30,&local_28);
    FUN_007edb08(&local_28,auStack_38);
    local_54 = uStack_20;
    local_5c = local_28;
    FUN_007edb08(&local_50,auStack_30);
    uStack_3c = auStack_48;
    puVar2 = &local_5c;
    puVar1 = &local_44;
    local_44 = local_50;
  }
  FUN_005cc1fc(puVar1,puVar2,param_6);
  return;
}


