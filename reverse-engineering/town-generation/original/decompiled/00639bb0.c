/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00639bb0. Provisional types; not original source or a verified portable implementation. */

void FUN_00639bb0(void)

{
  int iVar1;
  
  iVar1 = FUN_00636e3c();
  FUN_0063a228(iVar1 + DAT_00639bfc,0);
  FUN_00636e3c();
  iVar1 = FUN_006378a0();
  FUN_00617118(iVar1 + 4);
  iVar1 = FUN_0062ef88();
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 0x5702) = *(byte *)(iVar1 + 0x5702) | 2;
  }
  return;
}


