/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0010b810. Provisional types; not original source or a verified portable implementation. */

void FUN_0010b810(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar4 = FUN_00110da4();
  lVar1 = (ulonglong)DAT_0010b868 * (uVar4 & 0xffffffff);
  local_20 = (undefined4)lVar1;
  local_1c = (int)(uVar4 >> 0x20) * DAT_0010b868 + (int)((ulonglong)lVar1 >> 0x20);
  local_18 = *DAT_0010b86c;
  uStack_14 = DAT_0010b86c[1];
  puVar2 = (undefined4 *)FUN_00110b90(&local_18,&local_20);
  uVar3 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar3;
  return;
}


