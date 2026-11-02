/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00626fc4. Provisional types; not original source or a verified portable implementation. */

void FUN_00626fc4(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  FUN_002d5734();
  FUN_0069805c(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x4e) = 0x21;
  FUN_0063aca4(param_1 + 0x46);
  *(undefined1 *)(param_1 + 0x4f) = 0xff;
  *(undefined1 *)(param_1 + 0x50) = 9;
  uVar1 = 0;
  do {
    uVar2 = uVar1 & 0xff;
    bVar3 = uVar2 < 3;
    if (bVar3) {
      uVar2 = uVar2 + param_1;
    }
    uVar1 = uVar1 + 1;
    if (bVar3) {
      *(undefined1 *)(uVar2 + 0x56) = 0xff;
    }
  } while ((int)uVar1 < 3);
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  FUN_00756eb0(param_1 + 0x52,DAT_00627040);
  return;
}


