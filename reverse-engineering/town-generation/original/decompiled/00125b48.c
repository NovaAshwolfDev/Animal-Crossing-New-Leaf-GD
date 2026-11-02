/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00125b48. Provisional types; not original source or a verified portable implementation. */

void FUN_00125b48(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 & 0xff | (param_3 & 0xff) << 8;
  FUN_0012841c(param_1,param_2,uVar1 | uVar1 << 0x10);
  return;
}


