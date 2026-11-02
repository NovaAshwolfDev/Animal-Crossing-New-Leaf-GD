/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002d5924. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_002d5924(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = FUN_007f3734(param_2);
  if (iVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar4 = 0;
    if ((uVar3 & 0xff) < 4) {
      uVar4 = param_1 + (uVar3 & 0xff) * DAT_002d59f4 * 0x10;
    }
    if ((uVar4 != 0) && (iVar1 = FUN_007f3734(param_2), iVar1 != 0)) {
      uVar2 = FUN_007eb480(uVar4 + 0x8abe);
      bVar5 = uVar2 != 0;
      if (bVar5) {
        uVar2 = (uint)*(byte *)(uVar4 + 0x8ac7);
      }
      if (bVar5 && uVar2 != 3) {
                    /* WARNING: Subroutine does not return */
        FUN_0063653c();
      }
    }
    uVar3 = uVar3 + 1;
    if (3 < (int)uVar3) {
      return 0;
    }
  } while( true );
}


