/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061aad8. Provisional types; not original source or a verified portable implementation. */

void FUN_0061aad8(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_2b8 [640];
  undefined1 auStack_38 [8];
  int iStack_30;
  int local_2c;
  undefined4 local_28;
  
  iVar2 = DAT_0061ae58;
  *(undefined1 *)(DAT_0061ae58 + 2) = 0;
  iVar3 = DAT_0061ae5c;
  if ((*(char *)(iVar2 + 1) != '\0') && (param_2 == 0)) {
    return;
  }
  *(undefined1 *)(iVar2 + 1) = 1;
  iStack_30 = param_1;
  local_2c = param_2;
  local_28 = param_3;
  FUN_006164ec(param_1);
  FUN_006164ec(param_1);
  iVar6 = param_1 + 0x172b0;
  iVar8 = param_1 + DAT_0061ae60;
  iVar2 = FUN_007eb480(iVar8);
  if (iVar2 != 0) {
    iVar2 = FUN_00636e3c();
    iVar2 = FUN_007b8ff8(iVar2 + 0x20,iVar6);
    if (((iVar2 == 0) || (*(char *)(iVar8 + 9) != '\x04')) ||
       (iVar2 = FUN_00802710(param_1 + 0x17302), iVar2 != 0)) {
      FUN_00626fc4(iVar6);
    }
  }
  iVar2 = local_2c;
  FUN_00614d40(param_1,local_2c);
  FUN_00628b10(iVar3 + param_1,iVar2);
  FUN_00628b10(param_1 + 0x17264,iVar2);
  FUN_00627044(iVar6,iVar2);
  FUN_0062738c(DAT_0061ae64 + param_1);
  uVar7 = 0;
  do {
    iVar3 = FUN_0062d120(uVar7 & 0xff);
    if ((iVar3 != 0) && (iVar6 = FUN_007aae1c(iVar3 + 0x55a6), iVar6 != 0)) {
      FUN_0062841c(iVar3 + 0x8a10,iVar2);
      if (iVar2 != 0) {
        FUN_00628ffc(iVar3 + 0x8a30);
      }
      FUN_00628614(iVar3 + 0x8a20,iVar2);
      FUN_00629768(iVar3 + 0x8a48,iVar3,iVar2);
      FUN_0061f74c(iVar3 + 0x8abe,iVar2,uVar7);
      FUN_00628000(iVar3 + 0x8acc,iVar2,iVar3);
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 4);
  FUN_0061a8a4(param_1,local_2c);
  FUN_0061925c(param_1);
  iVar3 = 0;
  iVar2 = param_1;
  while ((iVar6 = FUN_007f3734(iVar2), iVar6 == 0 || (iVar6 = FUN_007e7244(iVar2,0), iVar6 != 0))) {
LAB_0061ae04:
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x24f8;
    if (9 < iVar3) {
      FUN_00615854(param_1,local_28);
      FUN_00613c78(param_1);
      FUN_00619e60(param_1,local_2c);
      FUN_00326af0(*DAT_0061ae6c);
      return;
    }
  }
  uVar7 = 0;
  do {
    iVar6 = iVar2 + uVar7 * 0xf0;
    iVar8 = iVar6 + 0x8ee;
    if (((iVar8 != 0) && (iVar4 = FUN_007aae1c(iVar8), iVar4 != 0)) &&
       (bVar1 = *(byte *)(iVar6 + 0x9a9) >> 6, 1 < bVar1)) {
      FUN_00638fa4(auStack_2b8);
      if (bVar1 < 3) {
        uVar5 = FUN_00756da4(auStack_38,DAT_0061ae68);
        FUN_00625c20(auStack_2b8,*(undefined2 *)(iVar2 + 0x2c),iVar8,6,uVar5,1);
      }
      else {
        uVar5 = FUN_00756da4(auStack_38,DAT_0061ae68);
        FUN_00625c20(auStack_2b8,*(undefined2 *)(iVar2 + 0x2c),iVar8,6,uVar5,0);
      }
      iVar8 = FUN_0061ddf8(iVar2,auStack_2b8,iVar8,3,*(byte *)(iVar6 + 0x9ab) >> 3 & 2,0);
      if (iVar8 == 0) {
        bVar1 = *(byte *)(iVar6 + 0x9ab) | 0x10;
      }
      else {
        bVar1 = *(byte *)(iVar6 + 0x9ab) & 0xef;
        *(byte *)(iVar6 + 0x9a9) = *(byte *)(iVar6 + 0x9a9) & 0x3f;
      }
      *(byte *)(iVar6 + 0x9ab) = bVar1;
      FUN_0011e268(auStack_2b8);
    }
    do {
      uVar7 = uVar7 + 1;
      if (0xf < uVar7) goto LAB_0061ae04;
    } while (0xf < uVar7);
  } while( true );
}


