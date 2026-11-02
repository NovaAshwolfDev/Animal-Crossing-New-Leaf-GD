/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002928b8. Provisional types; not original source or a verified portable implementation. */

void FUN_002928b8(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_0023d63c(param_1 + 0x9c);
  FUN_00293dd4(param_1 + 18000);
  puVar1 = DAT_00292a2c;
  uVar3 = extraout_r1;
  if (((DAT_00292a2c[3] & 1) == 0) &&
     (uVar4 = FUN_003025cc(DAT_00292a2c + 3), uVar3 = (int)((ulonglong)uVar4 >> 0x20),
     (int)uVar4 != 0)) {
    FUN_00756d40(puVar1 + 4,DAT_00292a30);
    uVar3 = DAT_00292a38;
  }
  if (((puVar1[2] & 1) == 0) &&
     (uVar4 = FUN_003025cc(DAT_00292a3c,uVar3), uVar3 = (int)((ulonglong)uVar4 >> 0x20),
     (int)uVar4 != 0)) {
    FUN_00756d40(DAT_00292a44,DAT_00292a40);
    uVar3 = DAT_00292a38;
  }
  if (((puVar1[1] & 1) == 0) &&
     (uVar4 = FUN_003025cc(DAT_00292a48,uVar3), uVar3 = (int)((ulonglong)uVar4 >> 0x20),
     (int)uVar4 != 0)) {
    FUN_00756d40(DAT_00292a50,DAT_00292a4c);
    uVar3 = DAT_00292a38;
  }
  if (((*puVar1 & 1) == 0) && (iVar2 = FUN_003025cc(DAT_00292a2c,uVar3), iVar2 != 0)) {
    FUN_00756d40(DAT_00292a58,DAT_00292a54);
  }
  FUN_00756eb0(param_1 + 0x8b42,DAT_00292a5c);
  FUN_00756eb0(param_1 + 0x8b46,DAT_00292a44);
  FUN_00756eb0(param_1 + 0x8b4a,DAT_00292a50);
  FUN_00756eb0(param_1 + 0x8b4e,DAT_00292a58);
  return;
}


