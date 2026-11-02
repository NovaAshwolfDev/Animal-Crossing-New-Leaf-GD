/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00110754. Provisional types; not original source or a verified portable implementation. */

void thunk_FUN_00116964(void)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  
  pcVar1 = DAT_001169c4;
  iVar3 = *(int *)(DAT_001169c4 + 4);
  if (0 < iVar3) {
    iVar3 = iVar3 + -1;
    *(int *)(DAT_001169c4 + 4) = iVar3;
  }
  piVar2 = DAT_001169c8;
  if (iVar3 == 0) {
    if (*pcVar1 != '\0') {
      *pcVar1 = '\0';
      iVar3 = *piVar2;
      if (iVar3 != 0) {
        software_interrupt(0x23);
        if (iVar3 < 0) {
          FUN_0011afc4();
        }
        *piVar2 = *DAT_001169cc;
      }
      return;
    }
    return;
  }
  return;
}


