/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ca634. Provisional types; not original source or a verified portable implementation. */

void FUN_005ca634(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    param_3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x005ca64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),param_2 + param_3);
  return;
}


