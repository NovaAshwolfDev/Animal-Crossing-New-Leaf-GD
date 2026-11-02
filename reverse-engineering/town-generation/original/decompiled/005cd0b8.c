/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cd0b8. Provisional types; not original source or a verified portable implementation. */

void FUN_005cd0b8(undefined4 *param_1)

{
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined1 auStack_10 [8];
  
  local_20 = in_stack_00000000;
  uStack_1c = in_stack_00000004;
  uStack_18 = in_stack_00000008;
  local_14 = 0;
  FUN_00116d14(auStack_10);
  FUN_0010de90(&local_20,auStack_10);
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = uStack_18;
  return;
}


