/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0066ff2c. Provisional types; not original source or a verified portable implementation. */

void FUN_0066ff2c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0066ff90 + 0x14);
  param_1[1] = iVar1;
  param_1[2] = iVar1;
  while (param_1[0x17] != 0) {
    iVar1 = param_1[0x17];
    param_1[0x17] = iVar1 + -1;
    param_1[(iVar1 + -1) * 2 + 3] = 0;
    (param_1 + (iVar1 + -1) * 2 + 3)[1] = 0;
  }
  param_1[1] = *param_2;
  param_1[2] = *param_3;
                    /* WARNING: Could not recover jumptable at 0x0066ff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}


