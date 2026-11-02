/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061113c. Provisional types; not original source or a verified portable implementation. */

uint FUN_0061113c(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 != 0x98) && ((param_1 & ~*(uint *)(DAT_006111a4 + param_2 * 4)) == 0)) {
    uVar2 = 0;
    uVar3 = uVar2;
    do {
      uVar1 = uVar2 & 0xff;
      if (param_2 == uVar1) {
        return uVar3;
      }
      if ((uVar1 != 0x98) && ((param_1 & ~*(uint *)(DAT_006111a4 + uVar1 * 4)) == 0)) {
        uVar3 = uVar3 + 1;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 0x98);
  }
  return 0xffffffff;
}


