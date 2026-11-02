/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cdb78. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_005cdb78(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = DAT_005cdc14;
  uVar3 = FUN_00610c2c();
  iVar4 = FUN_00611914(0x20000,uVar3);
  if (iVar4 != 0) {
    return 1;
  }
  cVar1 = *(char *)(iVar2 + 4);
  if (cVar1 == '\x02') {
    if (*(char *)(iVar2 + 5) < '\x19') {
      return 3;
    }
  }
  else if ((cVar1 != '\x03' && cVar1 != '\x04') && cVar1 != '\x05') {
    if ((cVar1 == '\x06' || cVar1 == '\a') || cVar1 == '\b') {
      return 1;
    }
    if ((cVar1 != '\t' && cVar1 != '\n') && ((cVar1 != '\v' || ('\x19' < *(char *)(iVar2 + 5))))) {
      return 3;
    }
    return 2;
  }
  return 0;
}


