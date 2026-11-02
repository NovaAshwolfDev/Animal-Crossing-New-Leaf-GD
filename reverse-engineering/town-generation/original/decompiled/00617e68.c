/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00617e68. Provisional types; not original source or a verified portable implementation. */

void FUN_00617e68(int param_1)

{
  int iVar1;
  int iVar2;
  
  FUN_006164ec(param_1,param_1 + DAT_00617f20);
  FUN_006164ec(param_1,param_1 + 0x17264);
  iVar2 = param_1 + DAT_00617f24;
  iVar1 = FUN_007eb480(iVar2);
  if (iVar1 != 0) {
    iVar1 = FUN_00636e3c();
    iVar1 = FUN_007b8ff8(iVar1 + 0x20,param_1 + 0x172b0);
    if (((iVar1 == 0) || (*(char *)(iVar2 + 9) != '\x04')) ||
       (iVar1 = FUN_00802710(param_1 + 0x17302), iVar1 != 0)) {
      FUN_00626fc4(param_1 + 0x172b0);
    }
  }
  FUN_005800b8();
  FUN_00326af0(*DAT_00617f28);
  *(undefined1 *)(DAT_00617f2c + 1) = 0;
  return;
}


