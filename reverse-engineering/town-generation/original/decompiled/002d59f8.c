/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002d59f8. Provisional types; not original source or a verified portable implementation. */

uint FUN_002d59f8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = FUN_007f3734(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    uVar3 = 0;
    if ((uVar2 & 0xff) < 4) {
      uVar3 = param_1 + (uVar2 & 0xff) * DAT_002d5ab0 * 0x10;
    }
    if ((uVar3 != 0) && (iVar1 = FUN_007f3734(param_2), iVar1 != 0)) {
      iVar4 = uVar3 + 0x8acc;
      iVar1 = FUN_007eb480(iVar4);
      if ((iVar1 != 0) &&
         ((*(byte *)(uVar3 + 0x8ad5) < 3 &&
          (iVar1 = FUN_007ebc30(iVar4,param_2), iVar1 != 0 && iVar4 != 0)))) {
        return uVar3;
      }
    }
    uVar2 = uVar2 + 1;
    if (3 < (int)uVar2) {
      return 0;
    }
  } while( true );
}


