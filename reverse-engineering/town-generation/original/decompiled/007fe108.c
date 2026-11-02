/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007fe108. Provisional types; not original source or a verified portable implementation. */

byte FUN_007fe108(void)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = FUN_005a20f8();
  if (iVar2 == 0) {
    bVar1 = 0x93;
  }
  else {
    bVar1 = *(byte *)(iVar2 + 10);
    if (0x92 < bVar1) {
      bVar1 = 0;
    }
  }
  return bVar1;
}


