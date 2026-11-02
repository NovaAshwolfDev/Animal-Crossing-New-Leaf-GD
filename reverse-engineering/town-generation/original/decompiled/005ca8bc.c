/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ca8bc. Provisional types; not original source or a verified portable implementation. */

void FUN_005ca8bc(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int local_48 [4];
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [4];
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(char *)(param_1 + 0xf7) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xf4) == '\x02') {
    if (*(int *)(param_1 + 0xd8) == 0) {
      FUN_005cabdc(param_1);
      if (*(char *)(param_1 + 0xf7) != '\0') {
        return;
      }
      if (*(int *)(param_1 + 0xd8) == 0) {
        return;
      }
    }
    uVar4 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xec);
    if (*(uint *)(param_1 + 0xe8) < uVar4) {
      uVar4 = *(uint *)(param_1 + 0xe8);
    }
    uVar2 = FUN_005ca534(param_1 + 0xc,*(int *)(param_1 + 0xec) + *(int *)(param_1 + 0xd8),uVar4);
    if (uVar2 != uVar4) {
      if (*(int *)(param_1 + 0x44) != 0) {
        FUN_0011df64(param_1);
      }
      *(undefined1 *)(param_1 + 0xf4) = 5;
      return;
    }
    *(uint *)(param_1 + 0xec) = uVar2 + *(int *)(param_1 + 0xec);
    if (*(char *)(param_1 + 0xf7) != '\0') {
      return;
    }
    if (*(uint *)(param_1 + 0xe0) <= *(uint *)(param_1 + 0xec)) {
      if (*(int *)(param_1 + 0x44) != 0) {
        FUN_0011df64(param_1);
      }
      if (*(char *)(param_1 + 0xf6) == '\0') goto LAB_005cab78;
      *(undefined1 *)(param_1 + 0xf4) = 4;
    }
  }
  if (*(char *)(param_1 + 0xf4) != '\x04') {
    return;
  }
  if ((*(int *)(param_1 + 0xdc) == 0) && (FUN_005cabdc(param_1), *(char *)(param_1 + 0xf7) != '\0'))
  {
    return;
  }
  if (*(int *)(param_1 + 0xdc) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0xf5) == '\0') {
    FUN_0043e014(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc));
  }
  else {
    piVar3 = (int *)FUN_0011e654(*DAT_005caba4 + 0x24);
    local_48[0] = DAT_005caba8 + 8;
    local_48[1] = 0;
    local_48[2] = 0;
    local_38 = DAT_005caba8 & 0xff000000;
    local_34 = 0;
    local_30 = 0;
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_1c = DAT_005caba8 & 0xff000000;
    local_18 = 0;
    local_14 = 0;
    local_2c[0] = local_48[0];
    FUN_004445ac(local_48);
    FUN_004445ac(local_2c);
    iVar1 = DAT_005cabac;
    FUN_00444634(local_2c,*(undefined4 *)(DAT_005cabac + 0x40),0,0,
                 *(undefined4 *)(DAT_005cabac + 0x40),*(undefined4 *)(DAT_005cabac + 0x44),
                 DAT_005cabb0,piVar3);
    FUN_00444634(local_48,*(undefined4 *)(iVar1 + 0x44),*(undefined4 *)(iVar1 + 0x38),
                 *(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(iVar1 + 0x40),
                 *(undefined4 *)(iVar1 + 0x44),DAT_005cabb4,piVar3);
    FUN_0043e014(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc));
    FUN_004446e8(local_48);
    FUN_004446e8(local_2c);
    FUN_00444834(local_48);
    FUN_00444834(local_2c);
    (**(code **)(*piVar3 + 0x28))(piVar3,*(undefined4 *)(iVar1 + 0x1c));
    FUN_00444870(local_2c);
    FUN_00444870(local_48);
  }
  (**(code **)(**(int **)(param_1 + 0xd4) + 0x1c))
            (*(int **)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd8));
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xe4);
LAB_005cab78:
  FUN_005c78b8(*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
  *(undefined1 *)(param_1 + 0xf4) = 3;
  return;
}


