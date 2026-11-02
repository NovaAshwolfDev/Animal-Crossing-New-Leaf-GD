/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00768ba4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00768ba4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = param_1 - 0x12;
  if ((uVar3 < 0x30) && (iVar1 = thunk_FUN_00396730(), iVar1 != 0)) {
    if (uVar3 < 0x10) {
      uVar2 = 0;
    }
    else if (param_1 - 0x22U < 0x10) {
      uVar2 = 1;
    }
    else if (param_1 - 0x32U < 0x10) {
      uVar2 = 2;
    }
    else {
      uVar2 = 3;
    }
    if (uVar3 < 0x10) {
      param_1 = param_1 + -0x12;
    }
    else if (param_1 - 0x22U < 0x10) {
      param_1 = param_1 + -0x22;
    }
    else if (param_1 - 0x32U < 0x10) {
      param_1 = param_1 + -0x32;
    }
    else {
      param_1 = 3;
    }
    uVar2 = FUN_00362984(iVar1,uVar2);
    uVar2 = FUN_003624d8(uVar2,param_1);
    return uVar2;
  }
  return 0;
}


