/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00444c0c. Provisional types; not original source or a verified portable implementation. */

int FUN_00444c0c(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  
  FUN_00446b90();
  pcVar1 = DAT_00444c78;
  iVar3 = 0;
  if ((*DAT_00444c78 == '\0') && (iVar3 = FUN_00446e40(), -1 < iVar3)) {
    FUN_00446e04();
    iVar3 = FUN_0010785c();
    if (-1 < iVar3) {
      pcVar1[1] = '\x01';
      FUN_00104df8();
      cVar2 = FUN_0010563c();
      pcVar1[4] = cVar2;
      thunk_FUN_00116964();
      *pcVar1 = '\x01';
    }
  }
  return iVar3;
}


