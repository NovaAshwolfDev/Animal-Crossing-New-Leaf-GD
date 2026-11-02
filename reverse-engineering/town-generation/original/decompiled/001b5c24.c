/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001b5c24. Provisional types; not original source or a verified portable implementation. */

void FUN_001b5c24(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_001b5c54;
  uVar3 = 0;
  do {
    iVar2 = FUN_0011df38(0x18);
    *(undefined1 *)(param_1 + uVar3) = *(undefined1 *)(iVar1 + iVar2);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 3);
  return;
}


