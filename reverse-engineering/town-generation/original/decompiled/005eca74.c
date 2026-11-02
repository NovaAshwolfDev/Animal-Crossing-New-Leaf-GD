/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005eca74. Provisional types; not original source or a verified portable implementation. */

void FUN_005eca74(void)

{
  uint uVar1;
  
  uVar1 = *(uint *)(DAT_005ecad0 + 0xc);
  if (((*(uint *)(DAT_005ecad0 + 0xc) & 1) == 0) && (uVar1 = FUN_003025cc(DAT_005ecad4), uVar1 != 0)
     ) {
    uVar1 = DAT_005ecad4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0063653c(uVar1);
}


