/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0066fee4. Provisional types; not original source or a verified portable implementation. */

void FUN_0066fee4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  uVar1 = *(undefined4 *)(DAT_0066ff28 + 0x14);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar1;
  while (*(int *)(param_1 + 0x5c) != 0) {
    iVar2 = *(int *)(param_1 + 0x5c) + -1;
    *(int *)(param_1 + 0x5c) = iVar2;
    puVar3 = (undefined4 *)(param_1 + 0xc + iVar2 * 8);
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  return;
}


