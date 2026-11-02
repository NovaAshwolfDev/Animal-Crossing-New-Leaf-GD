/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007fe37c. Provisional types; not original source or a verified portable implementation. */

uint FUN_007fe37c(ushort *param_1)

{
  uint uVar1;
  
  if ((*param_1 & 0x7fff) < 0xfe) {
    uVar1 = FUN_005f2ff4(param_1);
    if ((uVar1 != 0) && (uVar1 = (uint)*(byte *)(uVar1 + 8), 0x1c < uVar1)) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x1d;
  }
  return uVar1;
}


