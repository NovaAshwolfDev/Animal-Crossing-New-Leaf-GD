/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00111188. Provisional types; not original source or a verified portable implementation. */

int FUN_00111188(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_001111dc;
  FUN_0011a3e0(iVar3 + 0x84);
  piVar1 = DAT_001111e0;
  *(undefined4 *)(iVar3 + 0x8c) = param_3;
  *(undefined4 *)(iVar3 + 0x90) = param_4;
  iVar2 = *piVar1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_1 = *(undefined4 *)(iVar3 + 0x8c);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}


