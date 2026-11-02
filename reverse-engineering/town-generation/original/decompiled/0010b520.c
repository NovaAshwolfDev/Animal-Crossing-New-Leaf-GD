/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0010b520. Provisional types; not original source or a verified portable implementation. */

uint FUN_0010b520(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_0010b568;
  *(int *)(iVar3 + 0x84) = param_2;
  *(undefined4 *)(iVar3 + 0x88) = param_3;
  *(undefined4 *)(iVar3 + 0x90) = param_1;
  puVar1 = DAT_0010b56c;
  *(uint *)(iVar3 + 0x8c) = param_2 << 4 | 0xc;
  uVar2 = *puVar1;
  software_interrupt(0x32);
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = *(uint *)(iVar3 + 0x84);
  }
  return uVar2;
}


