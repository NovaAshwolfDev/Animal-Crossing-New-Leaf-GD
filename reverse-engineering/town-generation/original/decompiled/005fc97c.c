/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005fc97c. Provisional types; not original source or a verified portable implementation. */

void FUN_005fc97c(int param_1,int *param_2,int param_3)

{
  int iVar1;
  
  FUN_00600500(param_1 + 0x360c,param_2[10],param_2[0xb]);
  if (param_3 == 0) {
    iVar1 = param_1 + 0x35dc;
  }
  else {
    iVar1 = param_1 + 0x35e8;
  }
  FUN_00124ab0(iVar1,param_2);
  iVar1 = FUN_0011dfac(param_1 + 0x35f4,param_2 + 3);
  if (iVar1 != 0) {
    FUN_00124ab0(param_1 + 0x35f4,param_2 + 3);
  }
  iVar1 = FUN_0011dfac(param_1 + 0x3600,param_2 + 3);
  if (iVar1 != 0) {
    FUN_00124ab0(param_1 + 0x3600,param_2 + 3);
  }
                    /* WARNING: Could not recover jumptable at 0x005fca1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x14))(param_2);
  return;
}


