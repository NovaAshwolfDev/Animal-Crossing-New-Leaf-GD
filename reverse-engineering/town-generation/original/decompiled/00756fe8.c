/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00756fe8. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_00756fe8(ushort *param_1,undefined4 *param_2,undefined1 param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  int local_30 [3];
  undefined1 auStack_24 [16];
  
  uVar1 = FUN_0011df38(DAT_007570b0);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 10) = 10;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)(param_1 + 3) = param_2[1];
  *(undefined4 *)(param_1 + 5) = param_2[2];
  *(undefined4 *)(param_1 + 7) = param_2[3];
  param_1[9] = *(ushort *)(param_2 + 4);
  FUN_0066d1a0(auStack_24,param_2,9);
  puVar2 = (undefined4 *)FUN_0066c09c(local_30,param_1 + 1,9);
  *puVar2 = DAT_007570b4;
  (**(code **)(local_30[0] + 0x14))(local_30,auStack_24);
  *param_1 = uVar1 | 0x8000;
  *(undefined1 *)(param_1 + 10) = param_3;
  return auStack_24;
}


