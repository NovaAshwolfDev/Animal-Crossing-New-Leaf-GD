/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00623ec0. Provisional types; not original source or a verified portable implementation. */

uint FUN_00623ec0(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (*(byte *)(DAT_00623f0c + uVar1) <= param_1) {
      return uVar1 & 0xff;
    }
    if (*(byte *)(DAT_00623f0c + uVar1 + 1) <= param_1) break;
    uVar1 = uVar1 + 2;
    if (5 < (int)uVar1) {
      return 5;
    }
  }
  return uVar1 + 1 & 0xff;
}


