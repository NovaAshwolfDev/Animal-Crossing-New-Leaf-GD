/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003c25c4. Provisional types; not original source or a verified portable implementation. */

void FUN_003c25c4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar2 = 0;
    iVar3 = param_1 + iVar4 * 0x70;
    iVar1 = 0;
    do {
      *(undefined1 *)(iVar3 + iVar2) = 0xff;
      iVar1 = iVar1 + 2;
      *(undefined1 *)(iVar3 + iVar2 + 1) = 0xff;
      iVar2 = iVar2 + 2;
    } while (iVar1 < 0x70);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x60);
  return;
}


