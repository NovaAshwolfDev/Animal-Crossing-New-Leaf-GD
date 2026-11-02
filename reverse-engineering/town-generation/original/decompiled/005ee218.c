/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ee218. Provisional types; not original source or a verified portable implementation. */

undefined1 FUN_005ee218(void)

{
  int iVar1;
  
  iVar1 = FUN_006a905c();
  if (iVar1 != 3) {
    for (iVar1 = *(int *)(DAT_005ee268 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      if ((*(byte *)(iVar1 + 0x1a) & 3) == 1) {
        return *(undefined1 *)(iVar1 + 0x1b);
      }
    }
  }
  return 0x25;
}


