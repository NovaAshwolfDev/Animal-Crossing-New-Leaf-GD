/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00100648. Provisional types; not original source or a verified portable implementation. */

int FUN_00100648(int param_1,code *param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = param_1;
  if (param_2 != (code *)0x0) {
    while (bVar2 = param_4 != 0, param_4 = param_4 + -1, bVar2) {
      (*param_2)(iVar1);
      iVar1 = iVar1 + param_3;
    }
  }
  return param_1;
}


