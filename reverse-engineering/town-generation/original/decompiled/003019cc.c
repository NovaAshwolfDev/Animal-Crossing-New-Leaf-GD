/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003019cc. Provisional types; not original source or a verified portable implementation. */

void FUN_003019cc(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = DAT_00301a4c;
  if (param_2 == 0) {
    return;
  }
  if ((((*DAT_00301a48 == '\0') || (iVar2 = FUN_0011a378(*DAT_00301a4c), iVar2 == 0)) ||
      (piVar3 = (int *)FUN_00121530(iVar2,param_2), piVar3 == (int *)0x0)) &&
     (piVar3 = (int *)FUN_001226fc(*puVar1,param_2), piVar3 == (int *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00301a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x1c))(piVar3,param_2);
  return;
}


