/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011fa98. Provisional types; not original source or a verified portable implementation. */

void FUN_0011fa98(int *param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + -1;
  if (iVar2 + -1 != 0) {
    return;
  }
  param_1[1] = 0;
  do {
    iVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = -iVar2;
  if (iVar2 < -1) {
    FUN_001229b4(*DAT_001165e4,param_1,0,1,0,0);
  }
  return;
}


