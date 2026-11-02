/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007f3a98. Provisional types; not original source or a verified portable implementation. */

undefined1 FUN_007f3a98(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = param_1 + 0x13100;
  bVar3 = *(char *)(param_1 + 0x1316c) != '\0';
  if (bVar3) {
    uVar2 = (uint)*(byte *)(param_1 + 0x1316e);
  }
  if (bVar3 && uVar2 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x13128);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


