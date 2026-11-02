/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001b6218. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001b6218(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_001b5c88();
  uVar3 = 0;
  do {
    iVar1 = FUN_00802710(param_1 + uVar3 * 4);
    if (iVar1 != 0) {
      uVar2 = FUN_001b62bc(param_1,uVar3,param_2,param_3);
      return uVar2;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  return 0;
}


