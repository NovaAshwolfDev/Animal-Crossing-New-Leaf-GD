/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0059b024. Provisional types; not original source or a verified portable implementation. */

void FUN_0059b024(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    param_3 = (int *)param_1[1];
  }
  if (piVar1 != (int *)0x0 && param_3 != (int *)0x0) {
    if (param_1[2] < *param_3) {
      param_1[2] = param_1[2] + 1;
    }
    else {
      param_1[2] = *piVar1;
      param_1[3] = param_1[3] + 1;
    }
  }
  return;
}


