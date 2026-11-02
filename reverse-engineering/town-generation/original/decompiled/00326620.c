/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00326620. Provisional types; not original source or a verified portable implementation. */

void FUN_00326620(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 auStack_30 [16];
  
  FUN_00757d44(auStack_30);
  FUN_0066c088(param_1 + 0xb0,auStack_30);
  if (param_6 == 0) {
    (**(code **)(*(int *)(param_1 + 0xbc) + 0x1c))(param_1 + 0xbc);
  }
  else {
    (**(code **)(*(int *)(param_1 + 0xbc) + 0x14))(param_1 + 0xbc,param_6);
  }
  FUN_00757c18(param_2,param_5);
  FUN_0064cd84(param_1,param_1 + 0xb0,param_3,param_4);
  FUN_00664428(*DAT_0032671c);
  iVar1 = FUN_007ef588(param_1);
  if (iVar1 == 0) {
    FUN_00757d00(param_2);
    return;
  }
  FUN_00757b9c(param_2,param_6);
  FUN_00757b34(param_2,param_7);
  iVar1 = FUN_0010d818();
  if (iVar1 == 0 || iVar1 == 3) {
    FUN_00757d64(param_2);
  }
  return;
}


