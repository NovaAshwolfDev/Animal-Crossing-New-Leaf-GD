/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ca474. Provisional types; not original source or a verified portable implementation. */

int FUN_005ca474(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int local_10;
  
  uVar1 = DAT_005ca4c0;
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    local_10 = param_4;
    FUN_0011f990();
    local_10 = 0;
    FUN_005a532c(*(undefined4 *)(param_1 + 0x38),&local_10,param_1);
    iVar2 = local_10;
    FUN_001214d0(uVar1);
  }
  return iVar2;
}


