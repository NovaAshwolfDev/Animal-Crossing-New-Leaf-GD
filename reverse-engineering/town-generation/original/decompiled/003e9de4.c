/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003e9de4. Provisional types; not original source or a verified portable implementation. */

void FUN_003e9de4(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while (((iVar1 = FUN_0062d120(uVar2 & 0xff), iVar1 == 0 ||
          ((int)((uint)*(byte *)(DAT_003e9f38 + iVar1) << 0x1d) < 0)) ||
         (-1 < (int)((uint)*(byte *)(DAT_003e9f3c + iVar1) << 0x1e)))) {
    uVar2 = uVar2 + 1;
    if (3 < (int)uVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0063653c();
}


