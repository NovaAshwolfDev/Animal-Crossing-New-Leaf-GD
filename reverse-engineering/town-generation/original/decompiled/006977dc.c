/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006977dc. Provisional types; not original source or a verified portable implementation. */

int FUN_006977dc(int param_1,uint param_2,uint param_3)

{
  if (param_2 < 5 && param_3 < 4) {
    param_1 = param_1 + param_3 * 0x1400 + param_2 * 0x400 + 0x58;
  }
  else {
    param_1 = param_1 + 0x58;
  }
  return param_1;
}


