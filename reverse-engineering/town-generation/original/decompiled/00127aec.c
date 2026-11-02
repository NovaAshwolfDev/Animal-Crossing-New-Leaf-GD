/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00127aec. Provisional types; not original source or a verified portable implementation. */

uint FUN_00127aec(int *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x13);
  if (uVar1 != 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x20))(param_1);
      if ((uVar1 != 0) && (uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2), uVar1 != 0)) {
        *(undefined4 *)(param_2 + 0x10) = 0;
      }
    }
  }
  return uVar1;
}


