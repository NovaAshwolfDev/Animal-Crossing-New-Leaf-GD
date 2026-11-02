/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061c4a8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0061c4a8(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  bVar4 = *(byte *)(param_1 + 0x17262);
  bVar7 = (bVar4 & 0xf) != 0;
  if (bVar7) {
    bVar4 = bVar4 & 0xf;
  }
  if ((((bVar7 && bVar4 != 1) || (9 < (uint)(int)*(char *)(param_1 + 0x1725e))) ||
      (param_1 + *(char *)(param_1 + 0x1725e) * DAT_0061c644 * 8 == 0)) ||
     (iVar1 = FUN_007f3768(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = param_1 + 0x171b8;
  if ((*(byte *)(param_1 + 0x17262) & 0xf) == 1) {
    FUN_006276cc(iVar1);
    FUN_00627cc8(iVar1,param_2);
    return 0;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x17263);
  if (*(char *)(param_1 + 0x1725f) == '\0') {
    iVar6 = FUN_007eb870(iVar1);
    if ((iVar6 != 0) && (iVar6 = FUN_007b8ee0(), iVar6 != 0)) {
      uVar5 = uVar5 - 1;
    }
  }
  else {
    uVar5 = uVar5 - 1;
  }
  if ((int)uVar5 < 0) {
    *(undefined1 *)(param_1 + 0x17262) = 1;
    *(undefined1 *)(param_1 + 0x17263) = 3;
  }
  else {
    *(char *)(param_1 + 0x17263) = (char)uVar5;
    FUN_00627d9c(iVar1);
  }
  FUN_00636e3c();
  iVar1 = FUN_006378a0();
  uVar5 = 0;
  do {
    if (uVar5 < 10) {
      iVar6 = iVar1 + 4 + uVar5 * DAT_0061c644 * 8;
      if ((iVar6 != 0) && (iVar2 = FUN_007f3768(iVar6), iVar2 != 0)) goto LAB_0061c5ec;
    }
    else {
      iVar6 = 0;
LAB_0061c5ec:
      if (iVar6 != 0) {
        uVar3 = 0;
        do {
          iVar2 = iVar6 + uVar3 * 0xf0;
          if (iVar2 != -0x8ee) {
            *(byte *)(iVar2 + 0x9aa) = *(byte *)(iVar2 + 0x9aa) & 0xef;
          }
          do {
            uVar3 = uVar3 + 1;
            if (0xf < uVar3) goto LAB_0061c630;
          } while (0xf < uVar3);
        } while( true );
      }
    }
LAB_0061c630:
    uVar5 = uVar5 + 1;
    if (9 < (int)uVar5) {
      return 1;
    }
  } while( true );
}


