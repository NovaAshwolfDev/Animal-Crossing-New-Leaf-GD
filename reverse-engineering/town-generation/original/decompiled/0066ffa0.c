/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0066ffa0. Provisional types; not original source or a verified portable implementation. */

int FUN_0066ffa0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  *param_1 = DAT_0066fff0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = FUN_00100648(param_1 + 3,DAT_0066fff4,8,10);
  uVar2 = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0;
  do {
    puVar3 = (undefined4 *)(iVar1 + uVar2 * 8);
    uVar2 = uVar2 + 1;
    *puVar3 = 0;
    puVar3[1] = 0;
  } while (uVar2 < 10);
  return iVar1 + -0xc;
}


