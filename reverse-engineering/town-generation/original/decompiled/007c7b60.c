/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007c7b60. Provisional types; not original source or a verified portable implementation. */

int FUN_007c7b60(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int local_14;
  
  if (param_3 == 0) {
    return DAT_007c7be8;
  }
  local_14 = 0;
  FUN_002fff30(param_2,0x60);
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1,param_2,0x60,&local_14,param_3,2,0x12);
  if ((DAT_007c7bec != iVar1 * 0x400000) && (local_14 == 0)) {
    iVar1 = DAT_007c7bf0;
  }
  return iVar1;
}


