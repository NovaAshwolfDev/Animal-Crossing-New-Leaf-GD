/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ddae0. Provisional types; not original source or a verified portable implementation. */

int FUN_007ddae0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined4 uStack_38;
  undefined1 local_34 [31];
  undefined1 uStack_15;
  
  local_3c = local_34;
  uStack_38 = 0x20;
  uStack_15 = 0;
  local_34[0] = 0;
  local_40 = DAT_007ddb78;
  iVar1 = FUN_005b0334(&local_40,param_2);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_007dda3c(param_1,&local_40);
  }
  if (param_3 != 0) {
    FUN_005b0448(param_3,param_2);
  }
  return iVar1;
}


