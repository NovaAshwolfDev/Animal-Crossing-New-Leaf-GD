/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00767cd4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00767cd4(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  while ((*(byte *)(DAT_00767d14 + uVar1) != param_1 &&
         (*(byte *)(DAT_00767d14 + uVar1 + 1) != param_1))) {
    uVar1 = uVar1 + 2;
    if (9 < uVar1) {
      return 0;
    }
  }
  return 1;
}


