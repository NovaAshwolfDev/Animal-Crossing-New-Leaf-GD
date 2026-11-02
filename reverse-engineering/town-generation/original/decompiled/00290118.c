/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00290118. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00290118(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_007fedc4(param_2);
  if (-1 < (int)uVar2) {
    uVar1 = (int)uVar2 >> 5;
    if (uVar1 < 0x8e) {
      *(uint *)(param_1 + uVar1 * 4) = *(uint *)(param_1 + uVar1 * 4) | 1 << (uVar2 & 0x1f);
      return 1;
    }
  }
  return 0;
}


