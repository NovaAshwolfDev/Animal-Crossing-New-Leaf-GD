/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011f990. Provisional types; not original source or a verified portable implementation. */

void FUN_0011f990(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    FUN_001165e8(param_1 + 0x10);
    uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}


