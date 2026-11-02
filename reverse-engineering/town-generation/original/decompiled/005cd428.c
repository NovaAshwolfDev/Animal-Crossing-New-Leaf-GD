/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cd428. Provisional types; not original source or a verified portable implementation. */

void FUN_005cd428(undefined4 *param_1,uint param_2)

{
  longlong lVar1;
  uint local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (param_2 == 0) {
    return;
  }
  local_20 = (undefined4)((ulonglong)DAT_005cd4c4 * (ulonglong)param_2);
  local_1c = param_2 * DAT_005cd4c8 +
             ((int)param_2 >> 0x1f) * DAT_005cd4c4 +
             (int)((ulonglong)DAT_005cd4c4 * (ulonglong)param_2 >> 0x20);
  FUN_0010b7dc(&local_30,param_1);
  local_28._0_4_ = local_30;
  local_28._4_4_ = uStack_2c;
  local_30 = 0x12;
  lVar1 = FUN_00119e54(&local_20,0x12,DAT_005cd4cc,DAT_005cd4d0);
  local_28 = lVar1 + CONCAT44(local_28._4_4_,(uint)local_28);
  FUN_0010de90(&local_18,&local_28);
  *param_1 = local_18;
  param_1[1] = uStack_14;
  param_1[2] = uStack_10;
  FUN_005cd1cc(param_1);
  return;
}


