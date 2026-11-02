/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0080c1ac. Provisional types; not original source or a verified portable implementation. */

void FUN_0080c1ac(uint *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 0xff | (param_2 & 0xff) << 8;
  uVar1 = uVar1 | uVar1 << 0x10;
  *param_1 = uVar1;
  param_1[1] = uVar1;
  return;
}


