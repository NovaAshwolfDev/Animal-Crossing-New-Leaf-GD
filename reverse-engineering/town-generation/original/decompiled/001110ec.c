/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001110ec. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001110ec(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = DAT_00111144;
  FUN_0011f998(DAT_00111144);
  if (0 < *DAT_00111148) {
    *DAT_00111148 = *DAT_00111148 + 1;
    uVar2 = DAT_0011114c;
    FUN_0011fa98(uVar1);
    return uVar2;
  }
  uVar2 = FUN_001079ec(DAT_00111150);
  FUN_0011fa98(uVar1);
  return uVar2;
}


