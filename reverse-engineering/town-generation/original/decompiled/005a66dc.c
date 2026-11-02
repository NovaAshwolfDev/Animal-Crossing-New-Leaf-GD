/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005a66dc. Provisional types; not original source or a verified portable implementation. */

void FUN_005a66dc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0 || param_3 < 0) {
    return;
  }
  iVar2 = *param_1;
  iVar1 = param_2 + param_3;
  if (iVar1 <= iVar2) {
    if (iVar1 < iVar2) {
      FUN_00115538(param_1[2] + param_2 * 4,param_1[2] + iVar1 * 4,(iVar2 - iVar1) * 4);
    }
    *param_1 = *param_1 - param_3;
  }
  return;
}


