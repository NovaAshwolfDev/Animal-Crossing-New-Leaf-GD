/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 004445ac. Provisional types; not original source or a verified portable implementation. */

void FUN_004445ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 local_18;
  
  piVar1 = DAT_0044462c;
  uVar2 = DAT_00444630;
  local_18 = param_4;
  if (*DAT_0044462c != 0) {
    local_18 = 0;
    uVar2 = FUN_00136cfc(&local_18);
    if (-1 < (int)uVar2) {
      *(undefined4 *)(param_1 + 0x18) = local_18;
      uVar2 = 0;
    }
    if (((uVar2 & 0x7e00000) != 0x600000) && ((int)uVar2 < 0)) {
      FUN_00123b70(uVar2);
    }
    *(int *)(param_1 + 0x14) = *piVar1;
  }
  if ((int)uVar2 < 0) {
    FUN_00123b70();
    return;
  }
  return;
}


