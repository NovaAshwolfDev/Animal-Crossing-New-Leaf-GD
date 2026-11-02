/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001b5c88. Provisional types; not original source or a verified portable implementation. */

void FUN_001b5c88(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  do {
    iVar4 = param_1 + uVar3 * 4;
    iVar2 = FUN_00802710(iVar4);
    uVar1 = uVar3;
    if (iVar2 != 0) {
      do {
        uVar1 = uVar1 + 1;
        if (0xf < uVar1) {
          return;
        }
        iVar2 = FUN_00802710(param_1 + uVar1 * 4);
      } while (iVar2 != 0);
      iVar2 = param_1 + uVar1 * 4;
      FUN_00756eb0(iVar4,iVar2);
      *(undefined1 *)(param_1 + uVar3 + 0x40) = *(undefined1 *)(uVar1 + param_1 + 0x40);
      FUN_00756eb0(iVar2,DAT_001b5d20);
      *(undefined1 *)(uVar1 + param_1 + 0x40) = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  return;
}


