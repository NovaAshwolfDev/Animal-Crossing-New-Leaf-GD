/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061fa50. Provisional types; not original source or a verified portable implementation. */

void FUN_0061fa50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = FUN_00802710();
    iVar2 = iVar3;
    if (iVar1 != 0) {
      do {
        iVar2 = iVar2 + 1;
        if (3 < iVar2) {
          return;
        }
        iVar1 = FUN_00802710(param_1 + iVar2 * 4 + 0x8d6);
      } while (iVar1 != 0);
      iVar2 = param_1 + iVar2 * 4 + 0x8d6;
      FUN_00756eb0(param_1 + iVar3 * 4 + 0x8d6,iVar2);
      FUN_00756eb0(iVar2,DAT_0061fae8);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}


