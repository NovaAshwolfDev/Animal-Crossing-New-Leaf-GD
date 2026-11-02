/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006291bc. Provisional types; not original source or a verified portable implementation. */

uint FUN_006291bc(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (param_1 < *(int *)(DAT_006291f0 + uVar1 * 4)) {
      return uVar1 & 0xff;
    }
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0xc);
  return 0xc;
}


