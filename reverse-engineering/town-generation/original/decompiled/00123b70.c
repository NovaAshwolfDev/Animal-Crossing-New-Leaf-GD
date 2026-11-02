/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00123b70. Provisional types; not original source or a verified portable implementation. */

void FUN_00123b70(uint param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  uVar1 = param_1 >> 0x1b;
  if ((param_1 & 0x80000000) != 0) {
    uVar1 = uVar1 - 0x20;
  }
  if ((*(byte *)(DAT_00123bd8 + 0x14) & 1) == 0 && *DAT_00123bdc == '\0') {
    if (uVar1 == 0xffffffff) {
      FUN_0010b5f4(param_1,0,in_lr);
    }
    FUN_0011afc4();
    return;
  }
  if (uVar1 != 0xfffffff9 && uVar1 != 1) {
    FUN_0010b5f4(param_1,0,in_lr);
    return;
  }
  return;
}


