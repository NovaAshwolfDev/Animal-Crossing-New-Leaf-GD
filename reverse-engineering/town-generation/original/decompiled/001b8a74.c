/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001b8a74. Provisional types; not original source or a verified portable implementation. */

undefined1 *
FUN_001b8a74(undefined2 *param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4,
            int param_5)

{
  undefined1 *puVar1;
  int local_30 [3];
  undefined1 auStack_24 [16];
  
  *param_1 = param_3;
  FUN_0066d1a0(auStack_24,param_2,9);
  FUN_00672614(local_30,param_1 + 1,9);
  (**(code **)(local_30[0] + 0x14))(local_30,auStack_24);
  *(undefined1 *)(param_1 + 10) = param_4;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  if (param_5 != 0) {
    puVar1 = (undefined1 *)FUN_00756ef4(param_1 + 0xb,param_5);
    return puVar1;
  }
  return auStack_24;
}


