/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002fe6a0. Provisional types; not original source or a verified portable implementation. */

void FUN_002fe6a0(uint *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[6];
  if ((*param_1 & 1) == 0) {
    return;
  }
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    (*(code *)param_1[1])(0x20,param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  return;
}


