/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005a2164. Provisional types; not original source or a verified portable implementation. */

int FUN_005a2164(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_007fedc4();
  if (-1 < (int)uVar1) {
    iVar2 = *(int *)(DAT_005a21d0 + 4);
    if (iVar2 != 0) {
      param_3 = DAT_005a21d4;
    }
    if (iVar2 != 0 && uVar1 < param_3) {
      iVar2 = iVar2 + uVar1 * 0x22;
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != 0) {
      uVar1 = (uint)*(byte *)(iVar2 + 10);
      if (0x92 < uVar1) {
        uVar1 = 0;
      }
      if ((*(int *)(DAT_005a21d8 + 4) != 0) && (uVar1 < 0x93)) {
        return uVar1 * 3 + *(int *)(DAT_005a21d8 + 4);
      }
    }
  }
  return 0;
}


