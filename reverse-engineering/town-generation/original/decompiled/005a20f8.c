/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005a20f8. Provisional types; not original source or a verified portable implementation. */

uint FUN_005a20f8(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  
  uVar1 = FUN_007fedc4();
  if (-1 < (int)uVar1) {
    bVar2 = *(int *)(DAT_005a2130 + 4) == 0;
    if (!bVar2) {
      param_3 = DAT_005a2134;
    }
    bVar3 = param_3 != uVar1;
    bVar4 = uVar1 <= param_3;
    if (!bVar2 && uVar1 < param_3) {
      uVar1 = *(int *)(DAT_005a2130 + 4) + uVar1 * 0x22;
    }
    if ((bVar2 || bVar4) && (!bVar2 && bVar3)) {
      return uVar1;
    }
  }
  return 0;
}


