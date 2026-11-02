/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007a2498. Provisional types; not original source or a verified portable implementation. */

undefined1 FUN_007a2498(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_00611914(0x80,param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_00611914(0x4000,param_1);
    if (iVar2 == 0) {
      return 6;
    }
    if (param_1 == 0x92) {
      uVar1 = 0;
    }
    else if (param_1 == 0x93) {
      uVar1 = 1;
    }
    else if (param_1 == 0x94) {
      uVar1 = 2;
    }
    else if (param_1 == 0x96) {
      uVar1 = 4;
    }
    else if (param_1 == 0x95) {
      uVar1 = 3;
    }
    else {
      if (param_1 != 0x97) {
        return 6;
      }
      uVar1 = 5;
    }
  }
  else {
    iVar2 = FUN_007a0ea8(param_1);
    uVar1 = *(undefined1 *)(DAT_007a2530 + iVar2);
  }
  return uVar1;
}


