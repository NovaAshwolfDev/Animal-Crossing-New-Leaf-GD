/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e5844. Provisional types; not original source or a verified portable implementation. */

undefined1 FUN_007e5844(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = FUN_007f3734(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_00623f24(param_2,param_1,10);
    iVar3 = param_1 + DAT_007e5934;
    iVar1 = FUN_007eb480(iVar3 + 0x16);
    if ((((iVar1 != 0) && (iVar1 = FUN_007ec0b4(iVar3), iVar1 == 0)) &&
        (iVar1 = FUN_007eb494(iVar3 + 0x16), iVar1 == 8)) &&
       (((uint)(int)*(char *)(iVar3 + 0x21) < 10 && ((int)*(char *)(iVar3 + 0x21) == uVar2)))) {
      return *(undefined1 *)(iVar3 + 0x1e);
    }
    iVar3 = param_1 + DAT_007e5938;
    iVar1 = FUN_007eb480(iVar3);
    if (((iVar1 != 0) && (iVar1 = FUN_007ec0b4(param_1 + 0x17264), iVar1 == 0)) &&
       ((iVar1 = FUN_007eb494(iVar3), iVar1 == 7 &&
        (((uint)(int)*(char *)(param_1 + 0x17285) < 10 &&
         ((int)*(char *)(param_1 + 0x17285) == uVar2)))))) {
      return *(undefined1 *)(iVar3 + 8);
    }
  }
  return 0x21;
}


