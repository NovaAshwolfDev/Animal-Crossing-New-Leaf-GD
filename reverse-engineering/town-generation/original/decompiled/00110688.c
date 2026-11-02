/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00110688. Provisional types; not original source or a verified portable implementation. */

int FUN_00110688(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = DAT_001106c4;
  if (iVar1 != 0) {
    software_interrupt(0x23);
    if (iVar1 < 0) {
      FUN_0011afc4();
    }
    *param_1 = *DAT_001106c8;
    iVar2 = iVar1;
  }
  return iVar2;
}


