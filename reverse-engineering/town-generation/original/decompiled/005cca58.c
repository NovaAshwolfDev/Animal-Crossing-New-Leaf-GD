/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cca58. Provisional types; not original source or a verified portable implementation. */

void FUN_005cca58(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((*(byte *)(DAT_005ccb60 + 2) & 8) != 0) {
    local_18 = *DAT_005ccb64;
    uStack_14 = DAT_005ccb64[1];
    uStack_10 = DAT_005ccb64[2];
    FUN_005cd238(&local_18);
    *param_1 = local_18;
    param_1[1] = uStack_14;
    param_1[2] = uStack_10;
    return;
  }
  if (*DAT_005ccb68 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  iVar1 = FUN_007edfa8(DAT_005ccb74);
  if (iVar1 == 0) {
    FUN_0063ac18(DAT_005ccb74,DAT_005ccb64);
    FUN_0063ac4c(DAT_005ccb74);
  }
  FUN_007edb08(param_1,DAT_005ccb74);
  return;
}


