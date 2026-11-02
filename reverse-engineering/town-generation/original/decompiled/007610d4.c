/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007610d4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007610d4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14 [2];
  
  local_14[0] = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  FUN_00746028(&local_20,&local_1c,&local_18,local_14,param_1,param_2);
  iVar1 = FUN_00761248(local_20,local_1c,local_18,local_14[0],param_3);
  if ((((iVar1 == 2 || iVar1 == 0xf8) || (iVar1 == 4 || iVar1 == 3)) ||
      (iVar1 == 0xa2 || iVar1 == 0xa3)) || (iVar1 == 0xa4 || iVar1 == 0xa5)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


