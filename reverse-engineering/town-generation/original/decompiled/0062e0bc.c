/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062e0bc. Provisional types; not original source or a verified portable implementation. */

int FUN_0062e0bc(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_002d5e74();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  iVar1 = FUN_002d5e58(param_1);
  if ((iVar1 != 0) && (uVar2 = FUN_002d589c(param_1), uVar2 < 4)) {
    return DAT_0062e12c + uVar2 * DAT_0062e128 * 0x10;
  }
  return 0;
}


