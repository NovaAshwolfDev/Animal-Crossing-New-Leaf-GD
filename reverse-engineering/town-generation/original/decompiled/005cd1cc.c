/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cd1cc. Provisional types; not original source or a verified portable implementation. */

void FUN_005cd1cc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = DAT_005cd234;
  iVar3 = *param_1;
  iVar2 = DAT_005cd234 + -0x27;
  if (iVar3 < DAT_005cd234) {
    if (iVar2 <= iVar3) {
      return;
    }
    *param_1 = iVar3 + 0x27;
    if (iVar2 <= iVar3 + 0x27) {
      return;
    }
    iVar3 = iVar3 + 0x4e;
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    *param_1 = iVar3;
  }
  else {
    *param_1 = iVar3 + -0x27;
    if (iVar3 + -0x27 < iVar1) {
      return;
    }
    *param_1 = iVar3 + -0x4e;
    if (iVar3 + -0x4e < iVar1) {
      return;
    }
  }
  *param_1 = iVar2;
  return;
}


