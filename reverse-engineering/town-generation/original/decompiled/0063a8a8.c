/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0063a8a8. Provisional types; not original source or a verified portable implementation. */

uint FUN_0063a8a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_007b6e30(param_1 + uVar2 * 4 + 8);
    if (iVar1 != 0) {
      FUN_00294318(param_1 + uVar2 * 4 + 8,param_2,param_3,param_4);
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x38);
  return 0;
}


