/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061dc68. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0061dc68(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = FUN_00802710(param_2);
  if (iVar1 == 0) {
    uVar2 = FUN_00802674(param_2);
    iVar1 = param_1 + 0x8d6;
    uVar4 = 0;
    do {
      iVar3 = FUN_007fdfa0(iVar1,uVar2);
      if (iVar3 != 0) {
        if (3 < uVar4) {
          return 0;
        }
        FUN_00756eb0(param_1 + uVar4 * 4 + 0x8d6,DAT_0061dcfc);
        FUN_0061fa50(param_1);
        return 1;
      }
      uVar4 = uVar4 + 1;
      iVar1 = iVar1 + 4;
    } while ((int)uVar4 < 4);
  }
  return 0;
}


