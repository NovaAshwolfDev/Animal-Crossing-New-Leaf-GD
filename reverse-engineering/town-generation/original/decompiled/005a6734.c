/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005a6734. Provisional types; not original source or a verified portable implementation. */

void FUN_005a6734(uint *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  while (1 < (int)uVar4) {
    uVar1 = rng_next_u32(param_2);
    iVar2 = (int)((ulonglong)uVar4 * (ulonglong)uVar1 >> 0x20);
    uVar1 = param_1[2];
    uVar4 = uVar4 - 1;
    uVar3 = *(undefined4 *)(uVar1 + uVar4 * 4);
    *(undefined4 *)(uVar1 + uVar4 * 4) = *(undefined4 *)(uVar1 + iVar2 * 4);
    *(undefined4 *)(param_1[2] + iVar2 * 4) = uVar3;
  }
  return;
}


