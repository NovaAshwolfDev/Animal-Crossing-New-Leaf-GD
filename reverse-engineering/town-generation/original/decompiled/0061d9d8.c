/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061d9d8. Provisional types; not original source or a verified portable implementation. */

void FUN_0061d9d8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = FUN_00802710(param_2);
  if (iVar2 != 0) {
    return;
  }
  FUN_0061fa50(param_1);
  uVar1 = DAT_0061da88;
  uVar4 = 0;
  iVar2 = param_1 + 0x8d6;
  do {
    iVar3 = FUN_007fdfa0(iVar2,uVar1);
    if (iVar3 != 0) {
      if (uVar4 < 4) {
        FUN_00756eb0(param_1 + uVar4 * 4 + 0x8d6,param_2);
        return;
      }
      break;
    }
    uVar4 = uVar4 + 1;
    iVar2 = iVar2 + 4;
  } while ((int)uVar4 < 4);
  FUN_00756eb0(param_1 + 0x8d6,DAT_0061da8c);
  FUN_0061fa50(param_1);
  FUN_00756eb0(param_1 + 0x8e2,param_2);
  return;
}


