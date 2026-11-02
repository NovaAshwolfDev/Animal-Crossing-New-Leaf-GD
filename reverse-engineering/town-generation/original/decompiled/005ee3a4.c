/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ee3a4. Provisional types; not original source or a verified portable implementation. */

char FUN_005ee3a4(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_006a905c();
  if ((iVar2 != 3) && (iVar2 = FUN_006a905c(), iVar2 != 3)) {
    iVar2 = *(int *)(DAT_005ee41c + 8);
    if (iVar2 == 0) {
      return '%';
    }
    while ((*(byte *)(iVar2 + 0x1a) & 3) != 0) {
      iVar2 = *(int *)(iVar2 + 4);
      if (iVar2 == 0) {
        return '%';
      }
    }
    cVar1 = *(char *)(iVar2 + 0x1b);
    if ((cVar1 != '\x04' && cVar1 != '\b') && (cVar1 != '\v' && cVar1 != '\x0e')) {
      return cVar1;
    }
  }
  return '%';
}


