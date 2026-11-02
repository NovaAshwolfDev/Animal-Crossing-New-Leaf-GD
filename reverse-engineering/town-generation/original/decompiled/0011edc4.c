/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011edc4. Provisional types; not original source or a verified portable implementation. */

uint FUN_0011edc4(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = DAT_0011edf0;
  if (*(int *)(DAT_0011edec + 0x10) != 0) {
    puVar2 = (uint *)(*(int *)(DAT_0011edec + 0x10) + 0xc4);
  }
  uVar1 = *puVar2 & 1 << (param_1 & 0xff);
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  return uVar1;
}


