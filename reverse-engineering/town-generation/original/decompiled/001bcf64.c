/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001bcf64. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001bcf64(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_007ecc64();
  if (iVar1 == 0) {
    iVar1 = FUN_007ecc0c(param_1);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0063653c();
    }
    iVar1 = FUN_007ecbac(param_1);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0063653c();
    }
  }
  return 0;
}


