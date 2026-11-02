/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002876dc. Provisional types; not original source or a verified portable implementation. */

void FUN_002876dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_20 = param_1;
  uStack_1c = param_2;
  FUN_00592534(&local_20,param_3,1);
  iVar1 = FUN_00636e3c(&local_20);
  uVar2 = FUN_0063a8a8(iVar1 + 0x49520,param_3,param_1,param_2);
  FUN_00592334(1,param_1,param_2,param_3,uVar2);
  iVar1 = FUN_00769904(param_3);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  return;
}


