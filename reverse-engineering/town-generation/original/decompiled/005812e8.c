/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005812e8. Provisional types; not original source or a verified portable implementation. */

uint FUN_005812e8(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  while (((9 < uVar1 || (iVar2 = DAT_00581328 + 0xa8 + uVar1 * 0x50, iVar2 == 0)) ||
         ((*(uint *)(iVar2 + 0x44) & 0x20) == 0))) {
    uVar1 = uVar1 + 1;
    if (9 < (int)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}


