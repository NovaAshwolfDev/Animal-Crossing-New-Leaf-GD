/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00294318. Provisional types; not original source or a verified portable implementation. */

void FUN_00294318(short *param_1,uint param_2,undefined1 param_3,undefined1 param_4)

{
  if ((*param_1 == 0xf8) && (param_2 < 0xf8)) {
    *(undefined1 *)(param_1 + 1) = param_3;
    *param_1 = (short)param_2;
    *(undefined1 *)((int)param_1 + 3) = param_4;
  }
  return;
}


