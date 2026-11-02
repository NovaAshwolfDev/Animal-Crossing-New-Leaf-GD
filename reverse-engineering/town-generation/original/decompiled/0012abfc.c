/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0012abfc. Provisional types; not original source or a verified portable implementation. */

void FUN_0012abfc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(DAT_0012ac28 + 4);
  if (puVar1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0012ac20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,param_1,param_2);
    return;
  }
  return;
}


