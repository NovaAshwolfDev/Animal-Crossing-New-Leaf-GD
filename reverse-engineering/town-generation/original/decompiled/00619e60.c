/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00619e60. Provisional types; not original source or a verified portable implementation. */

void FUN_00619e60(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_2 != 0) {
    iVar3 = 0;
    do {
      iVar1 = FUN_007f3734(param_1);
      if (iVar1 != 0) {
        uVar2 = 0;
        do {
          iVar1 = param_1 + uVar2 * 0xf0;
          if (iVar1 != -0x8ee) {
            *(byte *)(iVar1 + 0x9ab) = *(byte *)(iVar1 + 0x9ab) & 0xf7;
          }
          do {
            uVar2 = uVar2 + 1;
            if (0xf < uVar2) goto LAB_00619ec8;
          } while (0xf < uVar2);
        } while( true );
      }
LAB_00619ec8:
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 0x24f8;
    } while (iVar3 < 10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0063653c();
}


