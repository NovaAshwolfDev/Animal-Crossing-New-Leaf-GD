/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cc750. Provisional types; not original source or a verified portable implementation. */

void FUN_005cc750(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar1 = *DAT_005cc7ac;
  local_18 = param_3;
  uStack_14 = param_4;
  local_20 = FUN_00119e54(&local_18,0x12,DAT_005cc7b0,DAT_005cc7b4,0x12);
  local_20 = local_20 + lVar1;
  FUN_0010de90(&local_2c,&local_20);
  *param_1 = local_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  return;
}


