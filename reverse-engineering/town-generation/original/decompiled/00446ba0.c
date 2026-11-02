/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00446ba0. Provisional types; not original source or a verified portable implementation. */

void FUN_00446ba0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = DAT_00446bfc;
  pcVar1 = DAT_00446bf8;
  if (*DAT_00446bf8 != '\0') {
    *(undefined4 *)(DAT_00446bfc + 4) = 0;
    *(char *)(iVar2 + 8) = (char)param_2;
    *(char *)(iVar2 + 9) = (char)((uint)param_2 >> 8);
    *(char *)(iVar2 + 10) = (char)((uint)param_2 >> 0x10);
    *(undefined4 *)(iVar2 + -4) = 0xffffffff;
    FUN_0011bea0();
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
    *pcVar1 = '\0';
  }
  return;
}


