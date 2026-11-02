/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ff424. Provisional types; not original source or a verified portable implementation. */

uint FUN_007ff424(ushort *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 & 0xffff7fff;
  if (0xfd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


