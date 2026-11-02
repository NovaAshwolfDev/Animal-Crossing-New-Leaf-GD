/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002d686c. Provisional types; not original source or a verified portable implementation. */

void FUN_002d686c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_258 [584];
  
  iVar2 = 0;
  do {
    FUN_00756eb0(param_1 + iVar2 * 4 + 2,DAT_002d6c14);
    iVar1 = param_1 + iVar2;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + 0xe) = 0;
  } while (iVar2 < 3);
  FUN_0079c070(auStack_258);
  FUN_0079822c(auStack_258,5,0x30,0);
  FUN_001aea7c(param_1 + 2,1,auStack_258);
  FUN_0079c070(auStack_258);
                    /* WARNING: Subroutine does not return */
  FUN_0063653c();
}


