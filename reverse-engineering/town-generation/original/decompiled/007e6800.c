/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e6800. Provisional types; not original source or a verified portable implementation. */

uint FUN_007e6800(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((iVar1 = FUN_007f3734(param_1), iVar1 == 0 || (*(ushort *)(param_1 + 0x2c) != param_2))) {
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x24f8;
    if (9 < uVar2) {
      return 0xffffffff;
    }
  }
  return uVar2;
}


