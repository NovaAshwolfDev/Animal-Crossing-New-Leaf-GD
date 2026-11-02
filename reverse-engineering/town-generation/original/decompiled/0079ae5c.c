/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079ae5c. Provisional types; not original source or a verified portable implementation. */

void FUN_0079ae5c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_00802674(param_2);
  uVar1 = iVar2 - 0x2000U >> 5;
  *(uint *)(param_1 + uVar1 * 4) = *(uint *)(param_1 + uVar1 * 4) | 1 << (iVar2 - 0x2000U & 0x1f);
  return;
}


