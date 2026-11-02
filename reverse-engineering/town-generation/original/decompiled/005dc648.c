/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005dc648. Provisional types; not original source or a verified portable implementation. */

int FUN_005dc648(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00689660();
  if (((iVar1 == 0) && (iVar1 = FUN_00689d10(), iVar1 == 0)) && (iVar1 = FUN_006896a0(), iVar1 == 0)
     ) {
    uVar2 = 0;
    do {
      iVar1 = FUN_006898f4(uVar2 & 0xff);
      if (iVar1 != 0) goto LAB_005dc69c;
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 4);
    iVar1 = FUN_007e1f78(param_1,param_3,param_4,param_5);
    if (iVar1 != 0) {
      FUN_00756eb0(iVar1,param_2);
      return 1;
    }
  }
  else {
LAB_005dc69c:
    iVar1 = 0;
  }
  return iVar1;
}


