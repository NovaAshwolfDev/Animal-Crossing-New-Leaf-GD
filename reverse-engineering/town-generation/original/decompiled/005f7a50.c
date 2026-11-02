/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005f7a50. Provisional types; not original source or a verified portable implementation. */

void FUN_005f7a50(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_005f7ac4;
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 5;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + iVar3 + 2) = 0x98;
    iVar1 = DAT_005f7ac8;
  } while (iVar2 < 0x20);
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    iVar3 = iVar1 + iVar3 * 0x16;
    *(undefined1 *)(iVar3 + 0x10) = 0;
    *(undefined1 *)(iVar3 + 0x11) = 0;
    iVar3 = iVar2;
  } while (iVar2 < 0x20);
  FUN_002fff30(DAT_005f7acc,0x500);
  iVar3 = DAT_005f7ad0;
  *(undefined4 *)(DAT_005f7ad0 + 0x10) = 0xffffffff;
  *(undefined4 *)(iVar3 + 0x14) = 0xffffffff;
  return;
}


