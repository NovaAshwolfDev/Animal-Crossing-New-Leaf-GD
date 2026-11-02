/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ca4c4. Provisional types; not original source or a verified portable implementation. */

bool FUN_005ca4c4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = DAT_005ca52c;
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_0011f990();
    iVar2 = FUN_005a7b58(*DAT_005ca530,param_1,param_2,0,0);
    bVar3 = iVar2 != 0;
    *(int *)(param_1 + 0x38) = iVar2;
    FUN_001214d0(uVar1);
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}


