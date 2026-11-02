/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00636ec8. Provisional types; not original source or a verified portable implementation. */

void FUN_00636ec8(undefined2 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)FUN_005cc158();
  local_1c = *puVar1;
  local_18 = puVar1[1];
  local_14 = puVar1[2];
  if (param_2 != 0) {
    FUN_005cd014(&local_1c,0,0xfffffffa,0,0);
  }
  *param_1 = (short)local_1c;
  *(undefined1 *)(param_1 + 1) = (undefined1)local_18;
  *(undefined1 *)((int)param_1 + 3) = local_18._1_1_;
  return;
}


