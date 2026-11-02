/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00292d00. Provisional types; not original source or a verified portable implementation. */

void FUN_00292d00(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  undefined1 auStack_260 [568];
  undefined1 auStack_28 [8];
  
  FUN_002fff30(param_1,0xec);
  iVar6 = 0;
  do {
    FUN_00756eb0(param_1 + iVar6 * 4,DAT_002931e8);
    FUN_001b8b00(param_1 + iVar6 * 0x2e + 0x14);
    FUN_00697eec(param_1 + iVar6 * 8 + 0xcc,0);
    iVar2 = param_1 + iVar6;
    iVar6 = iVar6 + 1;
    *(undefined1 *)(iVar2 + 0x10) = 0;
    puVar1 = DAT_002931ec;
  } while (iVar6 < 4);
  if (((*DAT_002931ec & 1) == 0) && (iVar6 = FUN_003025cc(DAT_002931ec), iVar6 != 0)) {
    iVar6 = FUN_007a746c();
    puVar1[1] = (uint)*(ushort *)(iVar6 + 2);
  }
  iVar6 = FUN_0011df38(100);
  cVar9 = iVar6 < (int)puVar1[1];
  uVar7 = (uint)((int)puVar1[1] <= iVar6);
  if (((puVar1[2] & 1) == 0) && (iVar6 = FUN_003025cc(DAT_002931f0), iVar6 != 0)) {
    iVar6 = FUN_007a7460();
    puVar1[3] = (uint)*(ushort *)(iVar6 + 2);
  }
  iVar6 = FUN_0011df38(100);
  if (iVar6 < (int)puVar1[3]) {
    cVar9 = cVar9 + '\x01';
  }
  else {
    uVar7 = uVar7 + 1;
  }
  if (((puVar1[4] & 1) == 0) && (iVar6 = FUN_003025cc(DAT_002931f4), iVar6 != 0)) {
    iVar6 = FUN_007a7460();
    puVar1[5] = ((uint)*(ushort *)(iVar6 + 2) * DAT_002931f8 >> 0x13) + 0x19;
  }
  iVar6 = FUN_0011df38(100);
  if (iVar6 < (int)puVar1[5]) {
    cVar9 = cVar9 + '\x01';
  }
  else {
    uVar7 = uVar7 + 1;
  }
  iVar6 = FUN_0011df38(100);
  if (iVar6 < 0x32) {
    cVar9 = cVar9 + '\x01';
  }
  else {
    uVar7 = uVar7 + 1;
  }
  if (cVar9 == '\0') {
    cVar9 = '\x01';
    uVar7 = uVar7 - 1;
  }
  FUN_0079c070(auStack_260);
  FUN_0079aee4(auStack_260,0x32);
  FUN_001aea7c(param_1,uVar7,auStack_260);
  FUN_0079c070(auStack_260);
  FUN_0079aee4(auStack_260,0x31);
  uVar10 = DAT_002931fc + 0x18;
  uVar8 = DAT_002931fc;
  do {
    FUN_00756d40(auStack_28,uVar8 & 0xffff);
    iVar6 = 0;
    if (0 < (int)uVar7) {
      do {
        iVar2 = FUN_008027cc(auStack_28);
        iVar3 = FUN_008027cc(param_1 + iVar6 * 4);
        if (iVar2 == iVar3) {
          FUN_0079ae8c(auStack_260,auStack_28);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar7);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 <= uVar10);
  uVar10 = DAT_00293200 + 7;
  uVar8 = DAT_00293200;
  do {
    FUN_00756d40(auStack_28,uVar8 & 0xffff);
    iVar6 = 0;
    if (0 < (int)uVar7) {
      do {
        iVar2 = FUN_008027cc(auStack_28);
        iVar3 = FUN_008027cc(param_1 + iVar6 * 4);
        if (iVar2 == iVar3) {
          FUN_0079ae8c(auStack_260,auStack_28);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)uVar7);
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 <= uVar10);
  FUN_001aea7c(param_1 + uVar7 * 4,cVar9,auStack_260);
  uVar7 = 0;
  uVar8 = 1;
  do {
    do {
      iVar6 = FUN_0011df38(100);
      if (iVar6 < 0x32) {
        iVar2 = param_1 + uVar7 * 4;
        FUN_00756da4(auStack_260,iVar2);
        iVar6 = param_1 + uVar8 * 4;
        FUN_00756eb0(iVar2,iVar6);
        FUN_00756eb0(iVar6,auStack_260);
      }
      uVar8 = uVar8 + 1;
      uVar10 = uVar7;
    } while (uVar8 < 4);
    do {
      uVar7 = uVar10 + 1;
      if (3 < uVar7) {
        uVar7 = 0;
        do {
          iVar6 = param_1 + uVar7 * 4;
          iVar2 = FUN_007fddc0();
          if (iVar2 == 1) {
            FUN_00756da4(auStack_260,iVar6);
            FUN_00756eb0(iVar6,param_1 + 0xc);
            FUN_00756eb0(param_1 + 0xc,auStack_260);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 4);
        uVar7 = 0;
        do {
          iVar6 = param_1 + uVar7 * 4;
          iVar2 = FUN_007fddc0();
          if (iVar2 == 2) {
            iVar2 = FUN_0011df38(100);
            if (iVar2 < 0x32) {
              FUN_00756da4(auStack_260,iVar6);
              FUN_00756eb0(iVar6,param_1);
              FUN_00756eb0(param_1,auStack_260);
            }
            else {
              FUN_00756da4(auStack_260,iVar6);
              FUN_00756eb0(iVar6,param_1 + 8);
              FUN_00756eb0(param_1 + 8,auStack_260);
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 4);
        FUN_00754fc8(param_1,1);
        FUN_00754fc8(param_1 + 4,0);
        FUN_00754fc8(param_1 + 8,1);
        FUN_00754fc8(param_1 + 0xc,3);
        iVar2 = DAT_00293208;
        iVar6 = DAT_00293204;
        uVar7 = 0;
        do {
          puVar4 = (ushort *)FUN_007a7454();
          iVar3 = FUN_0011df38(5);
          iVar5 = (int)((ulonglong)((longlong)iVar6 * (longlong)(int)((iVar3 + 8) * (uint)*puVar4))
                       >> 0x20);
          iVar3 = FUN_007fe604(param_1 + uVar7 * 4);
          iVar3 = (int)((ulonglong)
                        ((longlong)iVar6 *
                        (longlong)((iVar3 - ((iVar5 >> 2) - (iVar5 >> 0x1f))) + -1)) >> 0x20);
          iVar3 = ((iVar3 >> 2) - (iVar3 >> 0x1f)) * 10 + 10;
          if (iVar3 < iVar2) {
            iVar3 = iVar2;
          }
          FUN_00697eec(param_1 + uVar7 * 8 + 0xcc,iVar3);
          uVar7 = uVar7 + 1;
        } while (uVar7 < 4);
        return;
      }
      uVar8 = uVar10 + 2;
      uVar10 = uVar7;
    } while (3 < uVar8);
  } while( true );
}


