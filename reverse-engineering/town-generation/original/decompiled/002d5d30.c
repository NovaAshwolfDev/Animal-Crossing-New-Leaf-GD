/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002d5d30. Provisional types; not original source or a verified portable implementation. */

uint FUN_002d5d30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  iVar1 = FUN_007f3734(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    uVar3 = 0;
    if ((uVar2 & 0xff) < 4) {
      uVar3 = param_1 + (uVar2 & 0xff) * DAT_002d5db8 * 0x10;
    }
    if (uVar3 != 0) {
      iVar1 = FUN_00804038(uVar3,param_2,param_3);
      bVar4 = iVar1 != 0;
      if (bVar4) {
        iVar1 = uVar3 + 0x8800;
      }
      if (bVar4 && iVar1 != -0x248) {
        return uVar3;
      }
    }
    uVar2 = uVar2 + 1;
    if (3 < (int)uVar2) {
      return 0;
    }
  } while( true );
}


