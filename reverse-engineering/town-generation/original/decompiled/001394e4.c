/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001394e4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001394e4(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_001229f4();
  if (iVar1 == 0) {
    return 1;
  }
  if (param_2 == 0) {
    if (99 < param_3) {
      return 2;
    }
    iVar1 = FUN_0015639c(param_3,1);
  }
  else {
    if (param_2 != 2) {
      return 8;
    }
    if (5 < param_3) {
      return 2;
    }
    iVar1 = (**(code **)(DAT_00139588 + 4))(DAT_00139584,param_3);
  }
  if (iVar1 == 0) {
    return 8;
  }
  FUN_0011f23c(param_1,iVar1,1,iVar1 + 0x48);
  return 0;
}


