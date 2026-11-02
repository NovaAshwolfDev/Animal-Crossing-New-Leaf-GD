/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003c8120. Provisional types; not original source or a verified portable implementation. */

int FUN_003c8120(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = SBORROW4(param_2,2);
  iVar1 = param_2 + -2;
  if (param_2 < 2) {
    bVar2 = SBORROW4(param_3,2);
    iVar1 = param_3 + -2;
  }
  if (iVar1 < 0 != bVar2) {
    param_1 = param_1 + param_3 * 0x800 + param_2 * 0x400;
  }
  return param_1 + 0x22;
}


