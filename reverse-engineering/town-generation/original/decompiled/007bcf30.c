/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007bcf30. Provisional types; not original source or a verified portable implementation. */

uint FUN_007bcf30(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_007ecc40(param_1 + uVar2 * 0x280);
    if (iVar1 != 0) {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  return 0xffffffff;
}


