/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007efdf0. Provisional types; not original source or a verified portable implementation. */

int FUN_007efdf0(int *param_1)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  psVar2 = (short *)(**(code **)(*param_1 + 0xc))(param_1);
  iVar3 = 0;
  iVar4 = (iVar1 * 2 + -2 >> 1) + 1;
  iVar1 = 1;
  if (1 < iVar4) {
    do {
      if (*psVar2 == 0) {
        return iVar3;
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 1;
    } while (iVar1 < iVar4);
  }
  return iVar3;
}


