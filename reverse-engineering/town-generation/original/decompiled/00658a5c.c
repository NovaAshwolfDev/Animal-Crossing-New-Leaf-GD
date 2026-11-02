/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00658a5c. Provisional types; not original source or a verified portable implementation. */

void FUN_00658a5c(int param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20;
  
  local_20 = param_4;
  iVar1 = (**(code **)(*param_3 + 0xc))(param_3);
  iVar2 = (**(code **)(*param_3 + 0x10))(param_3);
  if ((param_2 != (int *)0x0 && iVar1 != 0) && (iVar2 != 0 && param_2 != param_3)) {
    iVar2 = (**(code **)(*param_2 + 8))(param_2);
    iVar3 = (**(code **)(*param_2 + 0x10))(param_2);
    if (iVar2 != 0 && iVar3 != 0) {
      (**(code **)(*param_2 + 0x1c))(param_2);
      *(int *)(param_1 + 100) = iVar2 + iVar3 * 2 + -2;
      *(int *)(param_1 + 0x60) = iVar2;
      *(undefined1 *)(param_1 + 0x68) = 0;
      local_20 = iVar1;
      FUN_0066ff2c(param_1,&local_20,DAT_00658b28);
      FUN_0066fd88(param_1,DAT_00658b28);
    }
  }
  return;
}


