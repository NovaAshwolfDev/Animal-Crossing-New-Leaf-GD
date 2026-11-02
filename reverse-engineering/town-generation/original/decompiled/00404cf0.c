/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00404cf0. Provisional types; not original source or a verified portable implementation. */

void FUN_00404cf0(uint param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = param_1 + 0x40;
  puVar1 = (undefined1 *)(param_1 + 0x40);
  if (param_1 < uVar2) {
    do {
      FUN_00756eb0(param_1,DAT_00404d2c);
      param_1 = param_1 + 4;
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    } while (param_1 < uVar2);
  }
  return;
}


