/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00444870. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_00444870(undefined4 *param_1)

{
  *param_1 = DAT_004448b8;
  if ((int)(param_1[4] << 8) >> 0x18 != 0) {
    FUN_00123b70(DAT_004448bc);
  }
  if (param_1[6] != 0) {
    software_interrupt(0x23);
    param_1[6] = 0;
  }
  return param_1;
}


