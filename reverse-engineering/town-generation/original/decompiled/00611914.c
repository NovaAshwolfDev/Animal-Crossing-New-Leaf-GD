/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00611914. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00611914(uint param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0x98) || ((param_1 & ~*(uint *)(DAT_00611938 + param_2 * 4)) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


