/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00444834. Provisional types; not original source or a verified portable implementation. */

void FUN_00444834(int param_1)

{
  if ((*(int *)(param_1 + 0x10) << 8) >> 0x18 != 0) {
    FUN_00123b70(DAT_0044486c);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x18) = 0;
  }
  return;
}


