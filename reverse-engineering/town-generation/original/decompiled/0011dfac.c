/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011dfac. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0011dfac(int param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = *(int *)(param_1 + 4);
  }
  if (param_2 != 0 && param_1 != 0) {
    do {
      if (param_1 == param_2) {
        return 1;
      }
      param_1 = *(int *)(param_1 + 8);
    } while (param_1 != 0);
  }
  return 0;
}


