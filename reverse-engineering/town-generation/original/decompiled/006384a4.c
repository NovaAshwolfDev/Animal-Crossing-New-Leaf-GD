/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006384a4. Provisional types; not original source or a verified portable implementation. */

void FUN_006384a4(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x270) = *(byte *)(param_1 + 0x270) & 0xf8 | param_2 & 7;
  return;
}


