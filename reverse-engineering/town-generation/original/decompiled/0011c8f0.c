/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011c8f0. Provisional types; not original source or a verified portable implementation. */

void FUN_0011c8f0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)*param_1;
  if (iVar1 == 0x20000009) {
                    /* WARNING: Could not recover jumptable at 0x0011c948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)DAT_0011c958[1])();
    return;
  }
  if (iVar1 < 0x2000000a) {
    if (iVar1 == 0x20000002) {
                    /* WARNING: Could not recover jumptable at 0x0011c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)DAT_0011c958[3])();
      return;
    }
    if (iVar1 == 0x20000004) {
                    /* WARNING: Could not recover jumptable at 0x0011c91c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)DAT_0011c958[2])();
      return;
    }
  }
  else {
    if (iVar1 == 0x20000011) {
                    /* WARNING: Could not recover jumptable at 0x0011c940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*DAT_0011c958)();
      return;
    }
    if (iVar1 == 0x20000021) {
      (*(code *)DAT_0011c958[4])();
      return;
    }
  }
  return;
}


