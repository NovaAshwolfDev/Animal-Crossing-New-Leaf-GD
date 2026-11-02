/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061da90. Provisional types; not original source or a verified portable implementation. */

int FUN_0061da90(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x8ee;
  uVar2 = 0;
  do {
    iVar1 = FUN_007b8ef0(iVar3,param_2);
    if (iVar1 != 0) {
      if (0xf < uVar2) {
        return 0;
      }
      return param_1 + uVar2 * 0xf0 + 0x8ee;
    }
    uVar2 = uVar2 + 1;
    iVar3 = iVar3 + 0xf0;
  } while (uVar2 < 0x10);
  return 0;
}


