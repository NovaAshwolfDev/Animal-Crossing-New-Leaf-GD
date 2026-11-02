/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005a5590. Provisional types; not original source or a verified portable implementation. */

void FUN_005a5590(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  if ((char)param_1[0x13] != '\0' && param_2 != 0) {
    *(undefined4 *)(param_2 + 0x34) = param_5;
    uVar1 = (**(code **)(*param_1 + 0x2c))(param_1,param_2);
    *(undefined4 *)(param_2 + 0x10) = uVar1;
  }
  return;
}


