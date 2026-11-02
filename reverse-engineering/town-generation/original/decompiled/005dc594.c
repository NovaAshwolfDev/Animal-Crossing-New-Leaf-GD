/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005dc594. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_005dc594(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_20 = param_1;
  uStack_1c = param_2;
  if (((*DAT_005dc638 & 1) == 0) && (iVar1 = FUN_003025cc(DAT_005dc638), iVar1 != 0)) {
    local_18 = 0xf;
    uStack_14 = 0xf;
    uVar2 = FUN_0059af60();
    FUN_0059b0e0(DAT_005dc63c,uVar2,&local_18);
  }
  uVar2 = FUN_007dca50(DAT_005dc63c,&local_20);
  return uVar2;
}


