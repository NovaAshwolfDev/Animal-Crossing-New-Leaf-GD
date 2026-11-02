/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001249fc. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_001249fc(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_00124a40;
  *param_1 = DAT_00124a3c;
  iVar2 = param_1[1];
  if (iVar2 != *piVar1) {
    if (iVar2 != 0) {
      FUN_00127c30(iVar2,param_1);
    }
    param_1[1] = *piVar1;
  }
  return param_1;
}


