/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00100730. Provisional types; not original source or a verified portable implementation. */

int FUN_00100730(int param_1,code *param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_4 != 0) {
    iVar1 = param_4 * param_3 + param_1;
    do {
      iVar1 = iVar1 - param_3;
      (*param_2)(iVar1);
    } while (param_1 != iVar1);
  }
  return param_1 + -8;
}


