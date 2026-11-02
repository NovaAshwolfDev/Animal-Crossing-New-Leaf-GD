/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006a8b24. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Removing unreachable block (ram,0x006a8b8c) */

void FUN_006a8b24(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *DAT_006a8b90 + 0x10;
  FUN_006ac054(iVar1);
  if ((param_3 != 0) && (param_4 != 0)) {
    FUN_006abe20(iVar1,param_3,param_4);
  }
  FUN_006ac0fc(iVar1,param_1,param_2);
  return;
}


