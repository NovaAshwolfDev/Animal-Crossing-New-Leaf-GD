/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0065a34c. Provisional types; not original source or a verified portable implementation. */

void FUN_0065a34c(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x834) = param_2;
  iVar1 = param_2;
  if (param_2 != 0) {
    iVar1 = param_1 + 0x10;
  }
  *(int *)(param_1 + 0x24) = param_2;
  if (param_2 != 0) {
    *(int *)(param_2 + 4) = iVar1;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  FUN_00659ee8(*(undefined4 *)(param_1 + 0x1c));
  FUN_0065fa8c(*(undefined4 *)(param_1 + 0x14));
                    /* WARNING: Could not recover jumptable at 0x0065a398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x28) + 0x1c))(param_1 + 0x28);
  return;
}


