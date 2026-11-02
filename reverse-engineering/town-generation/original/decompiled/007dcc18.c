/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007dcc18. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007dcc18(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if ((((*(byte *)(param_1 + 0x14) < 0x4b) && (*(byte *)(param_1 + 0x14) != 0)) &&
      (bVar1 = *(byte *)(param_1 + 0x1c) & 0xf, bVar1 < 6)) && (bVar1 == 4 || bVar1 == 5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


