/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00126238. Provisional types; not original source or a verified portable implementation. */

void FUN_00126238(int param_1)

{
  if ((param_1 != 0) && (*(int **)(DAT_00126260 + 4) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00126258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(DAT_00126260 + 4) + 4))();
    return;
  }
  return;
}


