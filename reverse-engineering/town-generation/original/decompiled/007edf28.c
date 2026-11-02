/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007edf28. Provisional types; not original source or a verified portable implementation. */

void FUN_007edf28(undefined4 param_1)

{
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_18 [8];
  int local_10;
  int in_stack_fffffff4;
  
  FUN_0011a3e0(&local_10,param_1);
  if (local_10 == -1 && in_stack_fffffff4 == 0x7fffffff || local_10 == 0 && in_stack_fffffff4 == 0)
  {
    local_38 = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    FUN_00116d14(auStack_18,DAT_005cc154,1,1);
    FUN_0010de90(&local_38,auStack_18);
    local_28 = local_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
    FUN_005cc318(&local_28);
    return;
  }
  return;
}


