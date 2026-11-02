/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007edb08. Provisional types; not original source or a verified portable implementation. */

void FUN_007edb08(undefined4 *param_1)

{
  int local_30;
  uint uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  FUN_0011a3e0(&local_30);
  FUN_005cbf64(&local_1c);
  local_28 = local_1c;
  uStack_24 = uStack_18;
  uStack_20 = uStack_14;
  if ((local_30 != -1 || (uStack_2c ^ 0x7fffffff) != 0) && (local_30 != 0 || uStack_2c != 0)) {
    FUN_005cc750(&local_28,uStack_2c ^ 0x7fffffff,local_30,uStack_2c);
  }
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  return;
}


