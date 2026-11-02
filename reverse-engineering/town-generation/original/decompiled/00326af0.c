/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00326af0. Provisional types; not original source or a verified portable implementation. */

void FUN_00326af0(int param_1)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  
  iVar2 = 0;
  do {
    iVar1 = param_1 + 0x10 + iVar2 * 0x10;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + 5) = 0x24;
    *(undefined1 *)(iVar1 + 6) = 0;
    *(undefined1 *)(iVar1 + 4) = 0x98;
  } while (iVar2 != 0x3c);
  iVar2 = 0;
  do {
    pbVar3 = (byte *)(param_1 + 0x3d0 + iVar2);
    iVar2 = iVar2 + 1;
    *pbVar3 = *pbVar3 & 0xfe;
  } while (iVar2 != 0x3c);
  return;
}


