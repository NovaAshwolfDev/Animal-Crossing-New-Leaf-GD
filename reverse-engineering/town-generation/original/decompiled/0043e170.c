/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0043e170. Provisional types; not original source or a verified portable implementation. */

uint FUN_0043e170(uint *param_1)

{
  uint uVar1;
  
  uVar1 = (*param_1 & 0xffffff | (uint)*(byte *)((int)param_1 + 3) << 0x18) >> 8;
  if (uVar1 == 0) {
    uVar1 = param_1[1] & 0xffffff | (uint)*(byte *)((int)param_1 + 7) << 0x18;
  }
  return uVar1;
}


