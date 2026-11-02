/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00619c2c. Provisional types; not original source or a verified portable implementation. */

void FUN_00619c2c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x1750c) != -1) && (iVar1 = FUN_00582e64(), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x24) = 3;
  }
  iVar1 = FUN_005ee3a4();
  if ((((iVar1 == 0x25) && (*(int *)(*DAT_00619d90 + 0x668) != 0)) &&
      (*(int *)(DAT_00619d94 + 0x234) != 0)) &&
     (iVar1 = FUN_007eb480(*(int *)(DAT_00619d94 + 0x234) + 0x8acc), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  iVar1 = FUN_005ee3a4();
  if (((iVar1 == 0x25) && (iVar1 = FUN_005ee218(), iVar1 == 0x25)) &&
     ((iVar1 = FUN_007eb480(DAT_00619d98 + param_1), iVar1 == 0 &&
      (iVar1 = FUN_0011df34(100), iVar1 < 0x19)))) {
    FUN_00155a2c(param_2,0x12);
    return;
  }
  return;
}


