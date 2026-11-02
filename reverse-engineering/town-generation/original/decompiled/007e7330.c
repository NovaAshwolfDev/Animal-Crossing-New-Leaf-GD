/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e7330. Provisional types; not original source or a verified portable implementation. */

void FUN_007e7330(undefined4 param_1,int param_2,uint param_3)

{
  if (0xf < param_3) {
    FUN_00756da4(param_1,DAT_007e737c);
    return;
  }
  if ((int)param_3 < 10) {
    FUN_007ea814();
    return;
  }
  if (param_3 == 10) {
    FUN_00756da4(param_1,param_2 + 0x24c6);
    return;
  }
  if (param_3 != 0xb) {
    FUN_007e7104(param_1,param_2,param_3 - 0xc);
    return;
  }
  FUN_00756da4(param_1,param_2 + 0x24ca);
  return;
}


