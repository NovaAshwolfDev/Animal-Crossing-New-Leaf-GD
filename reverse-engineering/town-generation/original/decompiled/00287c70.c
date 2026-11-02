/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00287c70. Provisional types; not original source or a verified portable implementation. */

void FUN_00287c70(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_50 [16];
  undefined1 local_40;
  undefined1 auStack_38 [24];
  undefined1 local_20 [12];
  
  FUN_007acd50(auStack_38,*DAT_00287ee8);
  FUN_007acdd0(auStack_50,*DAT_00287ee8);
  iVar1 = FUN_007acd1c(auStack_50,auStack_38);
  while (iVar1 != 0) {
    FUN_00592534(local_20,local_40,1,param_1);
    FUN_001cbd60(auStack_50);
    iVar1 = FUN_007acd1c(auStack_50,auStack_38);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0063653c(auStack_38);
}


