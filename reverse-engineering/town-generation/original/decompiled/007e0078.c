/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e0078. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007e0078(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  if (param_2 == 0) {
    iVar1 = FUN_005cc1fc(DAT_007e0108,param_1,1);
  }
  else {
    local_20 = *DAT_007e0108;
    uStack_1c = DAT_007e0108[1];
    uStack_18 = DAT_007e0108[2];
    local_14 = *param_1;
    uStack_10 = param_1[1];
    local_c = param_1[2];
    FUN_005cd238(&local_20);
    FUN_005cd238(&local_14);
    iVar1 = FUN_005cc1fc(&local_20,&local_14,1);
  }
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}


