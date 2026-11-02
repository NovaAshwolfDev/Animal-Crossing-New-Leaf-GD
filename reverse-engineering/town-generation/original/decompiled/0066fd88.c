/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0066fd88. Provisional types; not original source or a verified portable implementation. */

void FUN_0066fd88(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [4];
  int local_34;
  uint local_2c;
  undefined1 auStack_28 [20];
  uint local_14;
  
  if (param_1[1] == 0) {
    return;
  }
  while (param_1[1] != *param_2) {
    iVar1 = (**(code **)(*param_1 + 0x10))(param_1);
    if (iVar1 == 0) {
      return;
    }
    FUN_0065be1c(auStack_38,param_1[1]);
    if ((local_34 == 0) || (iVar1 = param_1[1], iVar1 == param_1[2])) {
      iVar1 = param_1[0x17];
      if (iVar1 == 0) break;
      iVar2 = param_1[iVar1 * 2 + 2];
      param_1[1] = param_1[iVar1 * 2 + 1];
      param_1[2] = iVar2;
      iVar1 = param_1[0x17];
      param_1[0x17] = iVar1 + -1;
      param_1[(iVar1 + -1) * 2 + 3] = 0;
      (param_1 + (iVar1 + -1) * 2 + 3)[1] = 0;
    }
    else if (local_34 == 0xe) {
      FUN_00647f6c(auStack_28,param_1 + 1);
      param_1[1] = param_1[1] + (local_14 & 0xfffffffe);
      (**(code **)(*param_1 + 0x18))(param_1,auStack_28);
    }
    else if (local_34 == 0xf) {
      param_1[1] = iVar1 + 6;
    }
    else {
      param_1[1] = iVar1 + (local_2c & 0xfffffffe);
      (**(code **)(*param_1 + 0x14))(param_1,auStack_38);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0066fe54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))(param_1);
  return;
}


