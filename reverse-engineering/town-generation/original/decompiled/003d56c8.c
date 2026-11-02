/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003d56c8. Provisional types; not original source or a verified portable implementation. */

void FUN_003d56c8(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 0xd8);
  bVar2 = uVar1 != 0;
  if (bVar2) {
    uVar1 = *(uint *)(param_1 + 0xf8);
  }
  if (!bVar2 || uVar1 <= param_3) {
    return;
  }
  FUN_002febf4(param_2,*(int *)(param_1 + 0xd8) + param_3 * 0x28,0x28);
  return;
}


