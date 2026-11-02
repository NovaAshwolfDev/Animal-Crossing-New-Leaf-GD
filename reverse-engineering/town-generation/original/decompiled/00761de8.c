/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00761de8. Provisional types; not original source or a verified portable implementation. */

uint FUN_00761de8(uint param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  
  local_24[0] = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_38 = param_1;
  uStack_34 = param_2;
  FUN_00746028(&local_30,&local_2c,&local_28,local_24);
  uVar3 = local_24[0];
  uVar2 = local_28;
  uVar1 = local_2c;
  uVar5 = local_30;
  iVar4 = FUN_0074702c(param_3);
  if ((iVar4 != 0) && (iVar4 = FUN_007e206c(iVar4,uVar5,uVar1), iVar4 != 0)) {
    uVar5 = FUN_007f32bc(iVar4,uVar2,uVar3);
    FUN_0063aef4(&local_38,uVar5);
    uVar6 = FUN_0063b048(local_38 & 0xff);
    uVar7 = FUN_0063b048(local_38._2_1_);
    uVar7 = uVar7 | uVar6;
    if (uVar7 != 0) {
      uVar7 = 1;
    }
    return uVar7;
  }
  return 0;
}


