/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007a12e4. Provisional types; not original source or a verified portable implementation. */

int FUN_007a12e4(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar3 = FUN_007a0ea8();
  if (iVar3 - 2U < 0x18) {
    uVar1 = *(undefined1 *)(DAT_007a140c + iVar3);
    uVar2 = *(undefined1 *)(DAT_007a140c + -0x2a + iVar3);
    iVar3 = FUN_00636e3c();
    uVar4 = FUN_003c8434(iVar3 + 0x57e80,uVar1);
    iVar3 = FUN_00292604(uVar4,uVar2);
    return iVar3;
  }
  iVar3 = FUN_00611914(0x2000,param_1);
  if ((iVar3 != 0) && (uVar5 = param_1 - 0x56U & 0xff, uVar5 < 4)) {
    iVar3 = FUN_00636e3c();
    iVar3 = FUN_00757510(iVar3 + DAT_007a1410,uVar5);
    return iVar3 + 2;
  }
  iVar3 = FUN_00611914(0x4000,param_1);
  if (iVar3 != 0) {
    FUN_00611534();
    iVar3 = FUN_00768ba4();
    if (iVar3 != 0) {
      uVar4 = 0;
      switch(param_1) {
      case 0x93:
        uVar4 = 1;
        break;
      case 0x94:
        uVar4 = 2;
        break;
      case 0x95:
        uVar4 = 3;
        break;
      case 0x96:
        uVar4 = 4;
        break;
      case 0x97:
        uVar4 = 5;
      }
      iVar3 = FUN_00292604(iVar3 + 0x10,uVar4);
      return iVar3;
    }
  }
  return 0;
}


