/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079ae8c. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0079ae8c(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  uVar3 = 0;
  do {
    for (uVar1 = *(uint *)(param_1 + uVar3 * 4); uVar1 != 0; uVar1 = uVar1 >> 1) {
      if ((uVar1 & 1) != 0) {
        uVar2 = uVar2 + 1;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x8e);
  if (uVar2 < 2) {
    return 0;
  }
  uVar2 = FUN_007fedc4(param_2);
  if (-1 < (int)uVar2) {
    uVar3 = (int)uVar2 >> 5;
    if (uVar3 < 0x8e) {
      *(uint *)(param_1 + uVar3 * 4) = *(uint *)(param_1 + uVar3 * 4) & ~(1 << (uVar2 & 0x1f));
      return 1;
    }
  }
  return 0;
}


