/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00164374. Provisional types; not original source or a verified portable implementation. */

int * FUN_00164374(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  
  bVar2 = -1 < param_2;
  bVar3 = param_2 == 0;
  if (bVar2) {
    param_4 = *param_1;
  }
  piVar1 = (int *)0x0;
  if (bVar2) {
    bVar3 = param_4 == param_2;
  }
  if (!bVar3 && (bVar2 && param_2 <= param_4)) {
    piVar1 = param_1 + param_2 * 0x17 + 1;
  }
  return piVar1;
}


