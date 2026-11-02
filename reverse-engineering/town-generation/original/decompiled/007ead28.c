/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ead28. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007ead28(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  iVar2 = 0;
  do {
    iVar1 = 0;
    do {
      if (0x20 < *(byte *)(param_1 + iVar2 * 0x80 + iVar1 * 0x40 + 8)) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return 0;
}


