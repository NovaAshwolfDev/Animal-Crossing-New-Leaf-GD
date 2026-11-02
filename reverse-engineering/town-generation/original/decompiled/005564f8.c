/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005564f8. Provisional types; not original source or a verified portable implementation. */

int FUN_005564f8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005ca878(param_1 + 0x24);
  if ((iVar1 != 0) && (*(int *)(param_1 + 4) == 0)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xfc);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xfc);
  }
  return iVar1;
}


