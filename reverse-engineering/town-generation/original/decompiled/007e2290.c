/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e2290. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007e2290(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int local_40;
  int iStack_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  piVar4 = &local_40;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c[0] = 0;
  local_40 = param_2;
  iStack_3c = param_3;
  FUN_00746028(&local_38,&local_34,&local_30,local_2c);
  uVar2 = local_2c[0];
  uVar6 = local_30;
  iVar1 = local_34;
  iVar5 = local_38;
  local_40 = local_38;
  iStack_3c = local_34;
  iVar3 = FUN_007dca50(param_1,&local_40);
  if (iVar3 != 0) {
    piVar4 = *(int **)(param_1 + 0x20);
  }
  if (iVar3 != 0 && piVar4 != (int *)0x0) {
    iVar3 = FUN_007dca3c(param_1);
    iVar5 = *(int *)(param_1 + 0x20) + (iVar1 * iVar3 + iVar5) * 0xc;
    if (iVar5 != 0) {
      uVar6 = FUN_007e1f74(iVar5,uVar6,uVar2,param_4);
      return uVar6;
    }
  }
  return 0;
}


