/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007f0be0. Provisional types; not original source or a verified portable implementation. */

int FUN_007f0be0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_20 [12];
  
  FUN_0066c0fc(auStack_20);
  iVar1 = FUN_007f0d38(param_1,auStack_20,param_3,param_4);
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x1c))(param_2);
  }
  else {
    (**(code **)(*param_2 + 0x14))(param_2,auStack_20);
  }
  return iVar1;
}


