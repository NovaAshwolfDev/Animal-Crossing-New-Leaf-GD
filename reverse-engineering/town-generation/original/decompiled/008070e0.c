/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 008070e0. Provisional types; not original source or a verified portable implementation. */

uint FUN_008070e0(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_007fedc4(param_2);
  if (-1 < (int)uVar1) {
    if ((uint)((int)uVar1 >> 5) < 0x8e) {
      return *(uint *)(param_1 + ((int)uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1;
    }
  }
  return 0;
}


