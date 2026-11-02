/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ec0b4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007ec0b4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1e);
  if (cVar1 == '\x0e' || cVar1 == '\x0f') {
    if (*(byte *)(param_1 + 0x1f) < 2) {
      return 0;
    }
  }
  else {
    if (cVar1 != '\x10' && cVar1 != '\x11') {
      return 1;
    }
    if (*(byte *)(param_1 + 0x1f) < 3) {
      return 0;
    }
  }
  return 1;
}


