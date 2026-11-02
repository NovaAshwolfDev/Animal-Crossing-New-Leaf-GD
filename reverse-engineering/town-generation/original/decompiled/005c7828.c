/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005c7828. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_005c7828(undefined4 *param_1)

{
  *param_1 = DAT_005c7860;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0x10))();
    param_1[1] = 0;
  }
  return param_1;
}


