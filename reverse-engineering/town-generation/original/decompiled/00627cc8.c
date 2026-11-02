/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00627cc8. Provisional types; not original source or a verified portable implementation. */

void FUN_00627cc8(int param_1)

{
  int iVar1;
  
  FUN_0063ac18();
  iVar1 = 0;
  do {
    FUN_002d5734(param_1 + iVar1 * 0x16 + 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  iVar1 = 0;
  do {
    FUN_002d5734(param_1 + iVar1 * 0x16 + 0x4a);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  *(undefined2 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0xff;
  *(undefined1 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0xaa) = 2;
  *(undefined1 *)(param_1 + 0xab) = 3;
  return;
}


