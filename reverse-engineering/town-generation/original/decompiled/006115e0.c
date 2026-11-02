/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006115e0. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_006115e0(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_00789368();
  if (iVar1 != 0) {
    iVar1 = *DAT_00611638;
    if (iVar1 != 0) {
      param_3 = 0x100000;
    }
    if (((iVar1 != 0 && param_1 != 0x98) &&
        ((param_3 & ~*(uint *)(DAT_0061163c + param_1 * 4)) == 0)) &&
       (iVar1 = FUN_0075e9ac((int)*(char *)(iVar1 + 0x1c)), iVar1 == 0xb)) {
      return 1;
    }
  }
  return 0;
}


