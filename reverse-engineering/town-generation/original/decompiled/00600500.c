/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00600500. Provisional types; not original source or a verified portable implementation. */

void FUN_00600500(int param_1,uint param_2,uint param_3)

{
  if ((-1 < (int)param_2 && -1 < (int)param_3) && (param_2 < 0x70 && param_3 < 0x60)) {
    param_2 = param_2 + param_3 * 0x70;
    param_1 = param_1 + ((int)param_2 >> 5) * 4;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & ~(1 << (param_2 & 0x1f));
  }
  return;
}


