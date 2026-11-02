/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0012902c. Provisional types; not original source or a verified portable implementation. */

uint FUN_0012902c(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 < 4) {
    iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(iVar2 + 0x80) = DAT_0012ac5c;
    *(int *)(iVar2 + 0x84) = 1 << (param_1 & 0xff);
    uVar1 = *DAT_0012ac60;
    software_interrupt(0x32);
    if ((uVar1 & 0x80000000) == 0) {
      uVar1 = *(uint *)(iVar2 + 0x84);
    }
    return uVar1;
  }
  return DAT_00129048;
}


