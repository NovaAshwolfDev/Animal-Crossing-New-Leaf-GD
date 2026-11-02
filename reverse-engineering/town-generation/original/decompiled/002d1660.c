/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002d1660. Provisional types; not original source or a verified portable implementation. */

void FUN_002d1660(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 0xc) + ((int)param_2 >> 5) * 4);
  uVar1 = 1 << (param_2 & 0x1f);
  if ((uVar2 & uVar1) != 0) {
    *(uint *)(*(int *)(param_1 + 0xc) + ((int)param_2 >> 5) * 4) = uVar2 & ~uVar1;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  }
  return;
}


