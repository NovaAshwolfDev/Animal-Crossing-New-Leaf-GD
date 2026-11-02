/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00616cb4. Provisional types; not original source or a verified portable implementation. */

int FUN_00616cb4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = param_1;
  while ((iVar1 = FUN_007f3734(iVar2), iVar1 == 0 || (*(ushort *)(iVar2 + 0x2c) != param_2))) {
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x24f8;
    if (9 < uVar3) {
      return 0;
    }
  }
  if (9 < uVar3) {
    return 0;
  }
  return param_1 + uVar3 * DAT_00616d20 * 8;
}


