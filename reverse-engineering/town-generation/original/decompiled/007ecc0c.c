/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ecc0c. Provisional types; not original source or a verified portable implementation. */

int FUN_007ecc0c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x30);
  iVar2 = 0;
  if ((cVar1 == '\x01' || cVar1 == '\x03') || cVar1 == '\x06') {
    iVar2 = param_1;
  }
  return iVar2;
}


