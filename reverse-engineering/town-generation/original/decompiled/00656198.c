/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00656198. Provisional types; not original source or a verified portable implementation. */

int FUN_00656198(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int local_10;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  local_10 = param_4;
  local_10 = (**(code **)(*param_2 + 0xc))();
  if (local_10 != 0) {
    FUN_0066ff2c(param_1,&local_10,DAT_006561e8);
    FUN_0066fd88(param_1,DAT_006561e8);
  }
  return (int)*(char *)(param_1 + 0x60);
}


