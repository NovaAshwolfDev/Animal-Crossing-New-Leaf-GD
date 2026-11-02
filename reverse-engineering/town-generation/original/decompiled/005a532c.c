/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005a532c. Provisional types; not original source or a verified portable implementation. */

void FUN_005a532c(int *param_1,int param_2,int param_3)

{
  if (((char)param_1[0x13] != '\0' && param_3 != 0) && param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x005a534c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x48))();
    return;
  }
  return;
}


