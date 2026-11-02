/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00505640. Provisional types; not original source or a verified portable implementation. */

void FUN_00505640(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_00505670;
  iVar2 = 0;
  do {
    if (*(int *)(iVar1 + iVar2 * 4) == param_1) {
      *(undefined4 *)(iVar1 + iVar2 * 4) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x18);
  return;
}


