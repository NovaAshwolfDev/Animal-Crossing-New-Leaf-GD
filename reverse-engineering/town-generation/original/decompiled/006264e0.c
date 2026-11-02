/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006264e0. Provisional types; not original source or a verified portable implementation. */

void FUN_006264e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      iVar1 = param_1 + iVar3 * 0x80 + iVar2 * 0x40;
      *(undefined1 *)(iVar1 + 8) = 0x21;
      FUN_0063aca4(iVar1);
      *(undefined1 *)(iVar1 + 9) = 0xff;
      *(undefined1 *)(iVar1 + 10) = 9;
      FUN_0069805c(iVar1 + 0xc);
      *(undefined1 *)(iVar1 + 0x3d) = 0xff;
      iVar2 = iVar2 + 1;
      *(undefined1 *)(iVar1 + 0x3c) = 0xff;
      *(undefined1 *)(iVar1 + 0x3e) = 0xe;
    } while (iVar2 < 2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *(undefined1 *)(param_1 + 0x200) = 0xff;
  return;
}


