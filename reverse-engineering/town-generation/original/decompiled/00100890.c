/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00100890. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00100890(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  
  local_14 = param_1;
  if (param_2 != 0) {
    local_14 = param_1 + param_2 + -1;
  }
  local_18 = param_1;
  uVar1 = FUN_002fe5da(param_3,&local_18,param_4,DAT_001008c4 + 0x1008a8);
  if (param_2 != 0) {
    FUN_002fe600(0,&local_18);
  }
  return uVar1;
}


