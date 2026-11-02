/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003c82dc. Provisional types; not original source or a verified portable implementation. */

int FUN_003c82dc(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_20 = param_2;
  local_1c = param_3;
  if (((*DAT_003c83ac & 1) == 0) && (iVar1 = FUN_003025cc(DAT_003c83ac), iVar1 != 0)) {
    local_18 = 3;
    uStack_14 = 3;
    uVar2 = FUN_0059af60();
    FUN_0059b0e0(DAT_003c83b0,uVar2,&local_18);
  }
  iVar1 = FUN_007dca50(DAT_003c83b0,&local_20);
  if (iVar1 != 0) {
    return param_1 + local_1c * 8 + local_20 * 2 + 2;
  }
  return param_1 + 2;
}


