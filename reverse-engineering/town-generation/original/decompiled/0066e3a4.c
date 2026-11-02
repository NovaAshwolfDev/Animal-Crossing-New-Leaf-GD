/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0066e3a4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0066e3a4(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  if (param_2 != param_3) {
    local_20 = param_4;
    iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
    iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    iVar5 = -1;
    if (iVar1 != 0 && iVar2 != 0) {
      local_20 = iVar1;
      FUN_0066ff2c(param_1,&local_20,DAT_0066e4b8);
      FUN_0066fd88(param_1,DAT_0066e4b8);
      iVar5 = *(int *)(param_1 + 4) - iVar1 >> 1;
    }
    iVar3 = (**(code **)(*param_3 + 0xc))(param_3);
    iVar4 = (**(code **)(*param_3 + 0x10))(param_3);
    iVar2 = -1;
    if (iVar3 != 0 && iVar4 != 0) {
      local_20 = iVar3;
      FUN_0066ff2c(param_1,&local_20,DAT_0066e4b8);
      FUN_0066fd88(param_1,DAT_0066e4b8);
      iVar2 = *(int *)(param_1 + 4) - iVar3 >> 1;
    }
    if (iVar5 != iVar2) {
      return 0;
    }
    if (iVar5 < 0) {
      return 0;
    }
    iVar5 = FUN_001011c4(iVar1,iVar3,iVar5 << 1);
    if (iVar5 != 0) {
      return 0;
    }
  }
  return 1;
}


