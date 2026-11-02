/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cd238. Provisional types; not original source or a verified portable implementation. */

void FUN_005cd238(uint *param_1)

{
  longlong lVar1;
  uint local_30;
  uint local_2c;
  uint uStack_28;
  uint uStack_24;
  undefined8 local_20;
  undefined4 local_18;
  int local_14;
  
  local_18 = (undefined4)((ulonglong)DAT_005cd3cc * 0xfffffffa);
  local_14 = ((int)((ulonglong)DAT_005cd3cc * 0xfffffffa >> 0x20) - DAT_005cd3cc) + -0x13a4;
  FUN_0010b7dc(&local_30,param_1);
  local_20._0_4_ = local_30;
  local_20._4_4_ = local_2c;
  local_30 = 0x12;
  lVar1 = FUN_00119e54(&local_18,0x12,DAT_005cd3d0,DAT_005cd3d4);
  local_20 = lVar1 + CONCAT44(local_20._4_4_,(uint)local_20);
  FUN_0010de90(&local_30,&local_20);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = uStack_28;
  FUN_005cd1cc(param_1);
  uStack_24 = (uint)*(short *)((int)param_1 + 10);
  uStack_28 = (uint)*(char *)((int)param_1 + 9);
  local_2c = (uint)(char)param_1[2];
  local_30 = 6;
  FUN_00116d14(&local_18,*param_1,(int)(char)param_1[1],(int)*(char *)((int)param_1 + 5));
  FUN_0010de90(&local_2c,&local_18);
  *param_1 = local_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  uStack_24 = (uint)*(short *)((int)param_1 + 10);
  uStack_28 = (uint)*(char *)((int)param_1 + 9);
  local_30 = (uint)*(char *)((int)param_1 + 7);
  local_2c = 0;
  FUN_00116d14(&local_18,*param_1,(int)(char)param_1[1],(int)*(char *)((int)param_1 + 5));
  FUN_0010de90(&local_2c,&local_18);
  *param_1 = local_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  uStack_24 = (uint)*(short *)((int)param_1 + 10);
  local_2c = (uint)(char)param_1[2];
  local_30 = (uint)*(char *)((int)param_1 + 7);
  uStack_28 = 0;
  FUN_00116d14(&local_18,*param_1,(int)(char)param_1[1],(int)*(char *)((int)param_1 + 5));
  FUN_0010de90(&local_2c,&local_18);
  *param_1 = local_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  uStack_28 = (uint)*(char *)((int)param_1 + 9);
  local_2c = (uint)(char)param_1[2];
  local_30 = (uint)*(char *)((int)param_1 + 7);
  uStack_24 = 0;
  FUN_00116d14(&local_18,*param_1,(int)(char)param_1[1],(int)*(char *)((int)param_1 + 5));
  FUN_0010de90(&local_2c,&local_18);
  *param_1 = local_2c;
  param_1[1] = uStack_28;
  param_1[2] = uStack_24;
  return;
}


