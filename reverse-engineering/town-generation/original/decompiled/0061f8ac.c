/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061f8ac. Provisional types; not original source or a verified portable implementation. */

void FUN_0061f8ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0) {
    param_3 = *(int *)(DAT_0061f904 + 0x234);
  }
  if ((param_3 != 0) && (iVar1 = FUN_0061f908(param_1,param_2,param_3 + 0x55a6), 0 < iVar1)) {
    FUN_0023bed8(param_3,iVar1,1);
    return;
  }
  return;
}


