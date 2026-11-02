/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cd580. Provisional types; not original source or a verified portable implementation. */

void FUN_005cd580(undefined4 *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  uint local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  FUN_0010b7dc(&local_40,param_1);
  uVar2 = DAT_005cd708;
  uVar1 = DAT_005cd704;
  local_38._0_4_ = local_40;
  local_38._4_4_ = uStack_3c;
  lVar3 = CONCAT44(uStack_3c,local_40);
  if (param_2 != 0) {
    local_30 = (undefined4)((ulonglong)DAT_005cd70c * (ulonglong)param_2);
    iStack_2c = param_2 * DAT_005cd710 +
                ((int)param_2 >> 0x1f) * DAT_005cd70c +
                (int)((ulonglong)DAT_005cd70c * (ulonglong)param_2 >> 0x20);
    local_40 = 0x12;
    lVar3 = FUN_00119e54(&local_30,iStack_2c,DAT_005cd704,DAT_005cd708);
    lVar3 = lVar3 + CONCAT44(local_38._4_4_,(uint)local_38);
  }
  if (param_3 != 0) {
    local_30 = (undefined4)((ulonglong)DAT_005cd714 * (ulonglong)param_3);
    iStack_2c = param_3 * DAT_005cd718 +
                ((int)param_3 >> 0x1f) * DAT_005cd714 +
                (int)((ulonglong)DAT_005cd714 * (ulonglong)param_3 >> 0x20);
    local_40 = 0x12;
    local_38 = lVar3;
    lVar3 = FUN_00119e54(&local_30,iStack_2c,uVar1,uVar2);
    lVar3 = lVar3 + local_38;
  }
  if (param_4 != 0) {
    local_30 = (undefined4)((ulonglong)DAT_005cd71c * (ulonglong)param_4);
    iStack_2c = param_4 * 0xd +
                ((int)param_4 >> 0x1f) * DAT_005cd71c +
                (int)((ulonglong)DAT_005cd71c * (ulonglong)param_4 >> 0x20);
    local_40 = 0x12;
    local_38 = lVar3;
    lVar3 = FUN_00119e54(&local_30,iStack_2c,uVar1,uVar2);
    lVar3 = lVar3 + local_38;
  }
  if (param_5 != 0) {
    local_30 = (undefined4)((ulonglong)DAT_005cd720 * (ulonglong)param_5);
    iStack_2c = ((int)param_5 >> 0x1f) * DAT_005cd720 +
                (int)((ulonglong)DAT_005cd720 * (ulonglong)param_5 >> 0x20);
    local_40 = 0x12;
    local_38 = lVar3;
    lVar3 = FUN_00119e54(&local_30,iStack_2c,uVar1,uVar2);
    lVar3 = lVar3 + local_38;
  }
  local_38 = lVar3;
  FUN_0010de90(&local_30,&local_38);
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = uStack_28;
  FUN_005cd1cc(param_1);
  return;
}


