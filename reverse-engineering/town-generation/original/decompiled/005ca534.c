/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ca534. Provisional types; not original source or a verified portable implementation. */

int FUN_005ca534(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int local_1c [2];
  
  uVar1 = DAT_005ca598;
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    FUN_0011f990();
    local_1c[0] = 0;
    FUN_005a55cc(*(undefined4 *)(param_1 + 0x38),local_1c,param_1,param_2,param_3);
    iVar2 = local_1c[0];
    FUN_001214d0(uVar1);
  }
  return iVar2;
}


