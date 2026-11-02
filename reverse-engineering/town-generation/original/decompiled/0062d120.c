/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062d120. Provisional types; not original source or a verified portable implementation. */

int FUN_0062d120(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00689d10();
  if (iVar1 == 0) {
    iVar1 = FUN_002d5e74(param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_00636e3c();
      iVar1 = FUN_002d57dc(iVar1 + 0x20,param_1);
      return iVar1;
    }
    iVar1 = FUN_002d5e58(param_1);
    if ((iVar1 != 0) && (uVar2 = FUN_002d589c(param_1), uVar2 < 4)) {
      return DAT_0062d1a0 + uVar2 * DAT_0062d19c * 0x10;
    }
  }
  return 0;
}


