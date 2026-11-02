/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e8000. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007e8000(int param_1)

{
  int iVar1;
  int unaff_r5;
  
  iVar1 = FUN_007f3734();
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = FUN_007e7244(param_1,0);
  if (iVar1 != 0) {
    unaff_r5 = *(int *)(DAT_007e8230 + 0x234);
  }
  if (((iVar1 != 0 && unaff_r5 != 0) &&
      (iVar1 = FUN_007e7160(param_1,unaff_r5 + 0x55a6), iVar1 != 0)) &&
     ((int)((uint)*(byte *)(iVar1 + 0xbb) << 0x1e) < 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  if (((*(ushort *)(DAT_007e8234 + param_1) & 1) == 0) &&
     ((*(ushort *)(DAT_007e8234 + param_1) & 2) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  return 1;
}


