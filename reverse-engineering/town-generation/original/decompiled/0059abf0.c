/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0059abf0. Provisional types; not original source or a verified portable implementation. */

void FUN_0059abf0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  if (iVar2 < 0) {
    iVar2 = (iVar2 + 1) % 0x10 + 0xf;
  }
  else {
    iVar2 = iVar2 % 0x10;
  }
  iVar1 = param_2[1];
  if (iVar1 < 0) {
    iVar1 = (iVar1 + 1) % 0x10 + 0xf;
  }
  else {
    iVar1 = iVar1 % 0x10;
  }
  param_1[1] = iVar1;
  *param_1 = iVar2;
  return;
}


