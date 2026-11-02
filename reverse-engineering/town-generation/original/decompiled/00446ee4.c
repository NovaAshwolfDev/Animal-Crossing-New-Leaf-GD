/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00446ee4. Provisional types; not original source or a verified portable implementation. */

int FUN_00446ee4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*DAT_00446f14 != 0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = 0x100000;
    iVar1 = *DAT_0044759c;
    software_interrupt(0x32);
    if (-1 < iVar1) {
      *param_1 = *(undefined4 *)(iVar2 + 0x8c);
      iVar1 = *(int *)(iVar2 + 0x84);
    }
    return iVar1;
  }
  if (*DAT_00446f18 != 0) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = 0x100000;
    iVar1 = *DAT_0044715c;
    software_interrupt(0x32);
    if (-1 < iVar1) {
      *param_1 = *(undefined4 *)(iVar2 + 0x8c);
      iVar1 = *(int *)(iVar2 + 0x84);
    }
    return iVar1;
  }
  return DAT_00446f1c;
}


