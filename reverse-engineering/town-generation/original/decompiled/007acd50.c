/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007acd50. Provisional types; not original source or a verified portable implementation. */

void FUN_007acd50(uint *param_1,int *param_2)

{
  uint uVar1;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[1] = (uint)param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (*param_1 < uVar1) {
    (**(code **)(*(int *)param_1[1] + 0x14))(&local_20);
    param_1[2] = local_20;
    param_1[3] = uStack_1c;
    param_1[4] = uStack_18;
    param_1[5] = uStack_14;
  }
  return;
}


