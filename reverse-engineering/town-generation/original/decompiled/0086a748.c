/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0086a748. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_0086a748(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int local_24;
  
  FUN_007acdd0(&local_38);
  FUN_007acd50(&local_58,param_2);
  iVar1 = FUN_007acd1c(&local_38,&local_58);
  while ((uVar2 = local_58, uVar3 = uStack_54, uVar4 = uStack_50, uVar5 = uStack_4c,
         uVar6 = uStack_48, iVar7 = iStack_44, iVar1 != 0 &&
         (uVar2 = local_38, uVar3 = uStack_34, uVar4 = uStack_30, uVar5 = uStack_2c,
         uVar6 = uStack_28, iVar7 = local_24, param_3 != local_24))) {
    FUN_001cbd60(&local_38);
    iVar1 = FUN_007acd1c(&local_38,&local_58);
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  param_1[5] = iVar7;
  return &local_38;
}


