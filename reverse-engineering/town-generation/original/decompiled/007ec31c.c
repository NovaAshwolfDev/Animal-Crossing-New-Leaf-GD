/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ec31c. Provisional types; not original source or a verified portable implementation. */

byte FUN_007ec31c(int param_1,uint param_2)

{
  byte bVar1;
  
  if (param_2 < 8) {
    bVar1 = *(byte *)(param_1 + 0x24) >> (param_2 & 0xff) & 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}


