/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079b55c. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0079b55c(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar8 = 0;
  uVar7 = 0;
  do {
    for (uVar2 = *(uint *)(param_1 + uVar7 * 4); uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        iVar8 = iVar8 + 1;
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x8e);
  iVar3 = FUN_00636e3c();
  FUN_001b5c6c(auStack_30,DAT_0079b75c + iVar3);
  uVar4 = FUN_0011df38(iVar8);
  uVar5 = FUN_008072dc(param_1,uVar4);
  FUN_00756d40(auStack_2c,0x2000);
  iVar8 = FUN_005a20f8(auStack_2c);
  uVar7 = DAT_0079b760;
  uVar9 = 0;
  uVar2 = param_2;
  do {
    bVar1 = *(byte *)(iVar8 + 10);
    if ((bVar1 < 0x93) && ((bVar1 == 3 || bVar1 == 4) || bVar1 == 5)) {
      if (param_2 == 5) {
        uVar2 = FUN_007aa3fc(auStack_30);
      }
      else if (param_2 == 6) {
        uVar2 = FUN_007aa4d4(auStack_30);
      }
      else if (param_2 == 7) {
        uVar2 = FUN_007aa388(auStack_30);
      }
      else {
        uVar2 = param_2;
        if (param_2 == 8) {
          uVar2 = FUN_007aa460(auStack_30);
        }
      }
      uVar6 = (uint)*(byte *)(iVar8 + 0xd);
      if (0xad < uVar6) {
        uVar6 = 0;
      }
      if (uVar6 != uVar2) {
LAB_0079b624:
        *(uint *)(param_1 + (uVar9 >> 5) * 4) =
             *(uint *)(param_1 + (uVar9 >> 5) * 4) & ~(1 << (uVar9 & 0x1f));
      }
    }
    else {
      uVar6 = (uint)*(byte *)(iVar8 + 0xd);
      if (0xad < uVar6) {
        uVar6 = 0;
      }
      if (uVar6 != uVar2) goto LAB_0079b624;
    }
    uVar9 = uVar9 + 1;
    iVar8 = iVar8 + 0x22;
    if (uVar7 <= uVar9) {
      iVar8 = 0;
      uVar7 = 0;
      do {
        for (uVar2 = *(uint *)(param_1 + uVar7 * 4); uVar2 != 0; uVar2 = uVar2 >> 1) {
          if ((uVar2 & 1) != 0) {
            iVar8 = iVar8 + 1;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0x8e);
      if (iVar8 != 0) {
        return 1;
      }
      *(uint *)(param_1 + (uVar5 >> 5) * 4) =
           *(uint *)(param_1 + (uVar5 >> 5) * 4) | 1 << (uVar5 & 0x1f);
      return 0;
    }
  } while( true );
}


