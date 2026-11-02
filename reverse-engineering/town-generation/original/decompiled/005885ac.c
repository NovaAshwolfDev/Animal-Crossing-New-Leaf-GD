/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005885ac. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_005885ac(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar1 = DAT_0058868c;
  if (((DAT_0058868c[2] & 1) == 0) &&
     (uVar4 = FUN_003025cc(DAT_0058868c + 2), param_2 = (undefined4)((ulonglong)uVar4 >> 0x20),
     (int)uVar4 != 0)) {
    puVar1[3] = 1;
    puVar1[4] = 1;
    param_2 = DAT_00588694;
  }
  if (((puVar1[1] & 1) == 0) &&
     (uVar4 = FUN_003025cc(DAT_00588698,param_2), puVar2 = DAT_0058869c,
     param_2 = (int)((ulonglong)uVar4 >> 0x20), (int)uVar4 != 0)) {
    *DAT_0058869c = 5;
    puVar2[1] = 4;
    param_2 = DAT_00588694;
  }
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003025cc(DAT_0058868c,param_2), iVar3 != 0)) {
    FUN_0059b0e0(DAT_005886a0,DAT_0058869c + -2);
  }
  return DAT_005886a0;
}


