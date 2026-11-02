/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007b8ef0. Provisional types; not original source or a verified portable implementation. */

int FUN_007b8ef0(short *param_1,short *param_2)

{
  int iVar1;
  
  if (*param_1 == *param_2) {
    if ((char)((char)param_1[10] * -0x80) == (char)((char)param_2[10] * -0x80)) {
      iVar1 = FUN_007b19c8(param_1 + 1,param_2 + 1);
      if (iVar1 != 0) {
        iVar1 = 1;
      }
      return iVar1;
    }
  }
  return 0;
}


