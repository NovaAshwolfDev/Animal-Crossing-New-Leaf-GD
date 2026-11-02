/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007bfff8. Provisional types; not original source or a verified portable implementation. */

bool FUN_007bfff8(char *param_1,uint param_2,uint param_3)

{
  if (param_3 < 0x60) {
    param_1 = param_1 + param_3 * 0x70;
  }
  if (param_2 < 0x70) {
    param_1 = param_1 + param_2;
  }
  return *param_1 != -1;
}


