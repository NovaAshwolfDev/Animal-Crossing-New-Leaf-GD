/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005a7b58. Provisional types; not original source or a verified portable implementation. */

void FUN_005a7b58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 local_124;
  undefined1 *local_120;
  undefined4 uStack_11c;
  undefined1 local_118 [255];
  undefined1 uStack_19;
  
  local_120 = local_118;
  uStack_11c = 0x100;
  uStack_19 = 0;
  local_118[0] = 0;
  local_124 = DAT_005a7bd8;
  iVar1 = FUN_007ddae0(param_1,param_3,&local_124);
  if (iVar1 != 0) {
    FUN_005a5590(iVar1,param_2,&local_124,param_4,param_5);
  }
  return;
}


