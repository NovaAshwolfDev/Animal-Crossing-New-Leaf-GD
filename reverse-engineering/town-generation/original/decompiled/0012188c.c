/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0012188c. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_0012188c(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = DAT_001218e8;
  param_1[1] = param_2;
  piVar1 = DAT_001218ec;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*piVar1 != 0) {
    if (param_2 == 0) {
      iVar2 = FUN_001226fc(*piVar1,param_1);
      param_1[1] = iVar2;
      if (iVar2 == 0) {
        return param_1;
      }
    }
    FUN_0011dba0(param_1[1],param_1);
  }
  return param_1;
}


