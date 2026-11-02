/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007fe604. Provisional types; not original source or a verified portable implementation. */

int FUN_007fe604(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_005a20f8();
  iVar3 = iVar2;
  if (iVar2 != 0) {
    iVar3 = FUN_007dcdcc();
    bVar1 = *(byte *)(iVar2 + 10);
    if ((bVar1 < 0x93) && ((bVar1 == 0x33 || bVar1 == 0x34 || (bVar1 == 0x75 || bVar1 == 0x76)))) {
                    /* WARNING: Subroutine does not return */
      FUN_0063653c();
    }
  }
  return iVar3;
}


