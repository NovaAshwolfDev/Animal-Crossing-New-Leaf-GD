/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002d16f0. Provisional types; not original source or a verified portable implementation. */

void FUN_002d16f0(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_002d1724;
  param_1[1] = param_2;
  *param_1 = uVar1;
  uVar2 = param_2 & 0x1f;
  if (uVar2 != 0) {
    uVar2 = 1;
  }
  param_1[2] = uVar2 + ((int)(param_2 + ((uint)((int)param_2 >> 0x1f) >> 0x1b)) >> 5);
  param_1[4] = 0xffffffff;
  param_1[3] = param_3;
  return;
}


