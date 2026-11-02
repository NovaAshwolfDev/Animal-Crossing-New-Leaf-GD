/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00629700. Provisional types; not original source or a verified portable implementation. */

void FUN_00629700(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_0063aca4(param_1);
  *(undefined1 *)(param_1 + 9) = 0xff;
  iVar1 = 0;
  *(undefined1 *)(param_1 + 10) = 9;
  do {
    FUN_0069805c(param_1 + iVar1 * 0x30 + 0xc);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  FUN_00756eb0(param_1 + 0x6c,DAT_00629764);
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x75) = 0;
  return;
}


