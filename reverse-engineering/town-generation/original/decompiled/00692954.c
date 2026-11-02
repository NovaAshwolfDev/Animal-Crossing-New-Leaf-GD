/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00692954. Provisional types; not original source or a verified portable implementation. */

void FUN_00692954(int param_1,byte param_2)

{
  *(byte *)(param_1 + 9) = (*(byte *)(param_1 + 9) & 0xfc) + (param_2 & 3);
  return;
}


