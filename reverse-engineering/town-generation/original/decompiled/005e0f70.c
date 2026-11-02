/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005e0f70. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_005e0f70(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int local_48;
  int iStack_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34 [4];
  
  piVar4 = &local_48;
  local_34[0] = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_48 = param_3;
  iStack_44 = param_4;
  FUN_00746028(&local_40,&local_3c,&local_38,local_34);
  uVar2 = local_34[0];
  uVar6 = local_38;
  iVar1 = local_3c;
  iVar5 = local_40;
  local_48 = local_40;
  iStack_44 = local_3c;
  iVar3 = FUN_007dca50(param_1,&local_48);
  if (iVar3 != 0) {
    piVar4 = *(int **)(param_1 + 0x20);
  }
  if (iVar3 != 0 && piVar4 != (int *)0x0) {
    iVar3 = FUN_007dca3c(param_1);
    iVar5 = *(int *)(param_1 + 0x20) + (iVar1 * iVar3 + iVar5) * 0xc;
    if (iVar5 != 0) {
      local_48 = param_5;
      uVar6 = FUN_005dc648(iVar5,param_2,uVar6,uVar2);
      return uVar6;
    }
  }
  return 0;
}


