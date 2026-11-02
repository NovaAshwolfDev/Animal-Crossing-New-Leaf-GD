/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061871c. Provisional types; not original source or a verified portable implementation. */

void FUN_0061871c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_006188b0 + 0x234);
  if ((iVar3 != 0) && (iVar1 = FUN_005ee68c(0xd), iVar1 != 0)) {
    iVar1 = 0;
    do {
      iVar2 = FUN_007f3734(param_1);
      if (((iVar2 != 0) && (iVar2 = FUN_007e7160(param_1,iVar3 + 0x55a6), iVar2 != 0)) &&
         (*(char *)(iVar2 + 0xbc) < '\0')) {
        FUN_007f37b0(param_1);
                    /* WARNING: Subroutine does not return */
        FUN_0063653c();
      }
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 0x24f8;
    } while (iVar1 < 10);
    iVar3 = FUN_00582e64(0xffffffff);
    if (iVar3 != 0) {
      *(uint *)(iVar3 + 0x44) = *(uint *)(iVar3 + 0x44) | 0x80;
    }
  }
  return;
}


