/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00622390. Provisional types; not original source or a verified portable implementation. */

void FUN_00622390(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int local_20 [3];
  
  FUN_001b8b00();
  puVar1 = (undefined4 *)FUN_0066c09c(local_20,param_1 + 0x2e,0x11);
  *puVar1 = DAT_006224ac;
  (**(code **)(local_20[0] + 0x1c))(local_20);
  uVar2 = 0;
  do {
    FUN_00756eb0(param_1 + 0x62 + uVar2 * 4,DAT_006224b0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  uVar2 = 0;
  do {
    FUN_00756eb0(param_1 + 0x82 + uVar2 * 4,DAT_006224b0);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  FUN_00756eb0(param_1 + 0xa2,DAT_006224b0);
  puVar1 = DAT_006224b4;
  *(undefined4 *)(param_1 + 0xa6) = *DAT_006224b4;
  *(undefined4 *)(param_1 + 0xaa) = *puVar1;
  *(undefined4 *)(param_1 + 0xae) = *puVar1;
  *(undefined4 *)(param_1 + 0xb2) = *puVar1;
  FUN_001eb644(param_1 + 0xb6);
  FUN_007570b8(param_1 + 0xbe);
  FUN_0063aca4(param_1 + 0xd4);
  *(undefined2 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xde) = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(undefined2 *)(param_1 + 0xe0) = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  *(undefined2 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0xe6) = 0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  *(undefined2 *)(param_1 + 0xe8) = 0;
  *(undefined1 *)(param_1 + 0xea) = 0;
  *(undefined1 *)(param_1 + 0xeb) = 0;
  *(undefined2 *)(param_1 + 0xec) = 0xffff;
  *(undefined1 *)(param_1 + 0xee) = 0x31;
  return;
}


