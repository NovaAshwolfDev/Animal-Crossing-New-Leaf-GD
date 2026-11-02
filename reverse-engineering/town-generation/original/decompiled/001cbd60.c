/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001cbd60. Provisional types; not original source or a verified portable implementation. */

uint * FUN_001cbd60(uint *param_1)

{
  uint uVar1;
  uint local_18;
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  if ((int *)param_1[1] != (int *)0x0) {
    *param_1 = *param_1 + 1;
    uVar1 = (**(code **)(*(int *)param_1[1] + 0x10))();
    if (*param_1 < uVar1) {
      (**(code **)(*(int *)param_1[1] + 0x14))(&local_18);
      param_1[2] = local_18;
      param_1[3] = uStack_14;
      param_1[4] = uStack_10;
      param_1[5] = uStack_c;
    }
  }
  return param_1;
}


