/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00362984. Provisional types; not original source or a verified portable implementation. */

int FUN_00362984(int param_1,uint param_2)

{
  if (param_2 < 3) {
    param_1 = param_1 + (int)(short)param_2 * (int)(short)DAT_003629ac * 0x80 + 0x2584;
  }
  else {
    param_1 = param_1 + 0x2584;
  }
  return param_1;
}


