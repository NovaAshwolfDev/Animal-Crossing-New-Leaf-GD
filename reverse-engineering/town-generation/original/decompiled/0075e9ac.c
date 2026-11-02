/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0075e9ac. Provisional types; not original source or a verified portable implementation. */

int FUN_0075e9ac(int param_1)

{
  int iVar1;
  
  if (param_1 == -1) {
    return -1;
  }
  if (param_1 < 0x40) {
    iVar1 = FUN_00699e40();
    return (int)(char)*(undefined2 *)(iVar1 + param_1 * 0x14 + 0x14);
  }
  return 0;
}


