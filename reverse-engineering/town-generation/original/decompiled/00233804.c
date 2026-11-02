/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00233804. Provisional types; not original source or a verified portable implementation. */

void FUN_00233804(int param_1)

{
  int iVar1;
  int extraout_r1;
  uint uVar2;
  uint uVar3;
  
  FUN_0080c13c();
  iVar1 = -0x18;
  uVar3 = 0;
  do {
    FUN_0054a360(param_1 + uVar3 * 0x10 + 8,iVar1);
    FUN_0080c170(param_1 + uVar3 * 0x20 + 0x2c8);
    uVar2 = uVar3 + 1;
    iVar1 = uVar3 - 0x17;
    uVar3 = uVar2;
  } while (uVar2 < 0x18);
  uVar3 = 0;
  do {
    FUN_0054a360(param_1 + uVar3 * 0x10 + 0x1c8,iVar1);
    FUN_0080c170(param_1 + uVar3 * 0x20 + 0x648);
    uVar3 = uVar3 + 1;
    iVar1 = extraout_r1;
  } while (uVar3 < 10);
  uVar3 = 0;
  do {
    FUN_0054a360(param_1 + uVar3 * 0x10 + 0x188);
    FUN_0080c170(param_1 + uVar3 * 0x20 + 0x5c8);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  uVar3 = 0;
  do {
    FUN_0054a360(param_1 + uVar3 * 0x10 + 0x268);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 6);
  return;
}


