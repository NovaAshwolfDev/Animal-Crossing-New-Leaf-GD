/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00802840. Provisional types; not original source or a verified portable implementation. */

byte FUN_00802840(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a20f8();
  if ((iVar1 != 0) && (iVar1 = FUN_007dcdac(), iVar1 != 0)) {
    iVar1 = FUN_005a20f8(param_1);
    return *(byte *)(iVar1 + 0x1f) & 1;
  }
  return 1;
}


