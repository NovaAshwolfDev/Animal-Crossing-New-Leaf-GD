/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00636488. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00636488(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0xf8) &&
     (iVar1 = FUN_00301f24(&DAT_006364c0,*(undefined4 *)(DAT_006364bc + param_1 * 4)), iVar1 == 0))
  {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


