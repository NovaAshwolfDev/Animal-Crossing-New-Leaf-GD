/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00756f28. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_00756f28(undefined2 *param_1,undefined4 *param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int local_28 [3];
  undefined1 auStack_1c [12];
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[9] = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 10) = 10;
  uVar1 = DAT_00756fe0;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)(param_1 + 3) = param_2[1];
  *(undefined4 *)(param_1 + 5) = param_2[2];
  *(undefined4 *)(param_1 + 7) = param_2[3];
  param_1[9] = *(undefined2 *)(param_2 + 4);
  FUN_0066d1a0(auStack_1c,param_2,9);
  puVar2 = (undefined4 *)FUN_0066c09c(local_28,param_1 + 1,9);
  *puVar2 = DAT_00756fe4;
  (**(code **)(local_28[0] + 0x14))(local_28,auStack_1c);
  *param_1 = (short)uVar1;
  *(undefined1 *)(param_1 + 10) = param_3;
  return auStack_1c;
}


