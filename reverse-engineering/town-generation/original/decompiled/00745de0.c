/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00745de0. Provisional types; not original source or a verified portable implementation. */

void FUN_00745de0(int *param_1,int *param_2,int param_3,int param_4)

{
  if (param_3 < 0) {
    param_3 = ((int)(param_3 + 1 + ((uint)(param_3 + 1 >> 0x1f) >> 0x1c)) >> 4) + -1;
  }
  else {
    param_3 = param_3 >> 4;
  }
  *param_1 = param_3;
  if (param_4 < 0) {
    param_4 = ((int)(param_4 + 1 + ((uint)(param_4 + 1 >> 0x1f) >> 0x1c)) >> 4) + -1;
  }
  else {
    param_4 = param_4 >> 4;
  }
  *param_2 = param_4;
  return;
}


