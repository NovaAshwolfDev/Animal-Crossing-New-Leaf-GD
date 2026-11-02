/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007f37c0. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007f37c0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x2e);
  if ((bVar1 < 8) && (3 < bVar1)) {
    if (bVar1 < 8) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
    return uVar2;
  }
  return 0;
}


