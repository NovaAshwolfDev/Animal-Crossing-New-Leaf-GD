/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00444f04. Provisional types; not original source or a verified portable implementation. */

int FUN_00444f04(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_00444f64;
  iVar2 = 0;
  if (*DAT_00444f64 != '\0') {
    if (DAT_00444f64[1] != '\0') {
      iVar2 = FUN_0044bac8();
      if (iVar2 < 0) {
        return iVar2;
      }
      pcVar1[2] = '\0';
      pcVar1[1] = '\0';
    }
    iVar2 = FUN_00446de0();
    if (-1 < iVar2) {
      FUN_00446ba0();
      *pcVar1 = '\0';
    }
  }
  return iVar2;
}


