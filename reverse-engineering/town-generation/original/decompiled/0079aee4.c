/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079aee4. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_0079aee4(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  if (param_2 == 4) {
    FUN_0079a704(param_1,3,5,0,0);
    FUN_0079a704(param_1,3,6,0,0);
    FUN_0079a704(param_1,3,7,0,0);
    FUN_0079a704(param_1,4,5,0,0);
    FUN_0079a704(param_1,4,6,0,0);
    FUN_0079a704(param_1,4,7,0,0);
    FUN_0079a704(param_1,5,5,0,0);
    FUN_0079a704(param_1,5,6,0,0);
    puVar6 = (undefined1 *)FUN_0079a704(param_1,5,7,0,0);
  }
  else {
    if (param_2 != 3) {
      if (param_2 == 1 || param_2 == 2) {
        FUN_0079a704(param_1,3,param_2,0,0);
        FUN_0079a704(param_1,4,param_2,0,0);
        puVar6 = (undefined1 *)FUN_0079a704(param_1,5,param_2,0,0);
        return puVar6;
      }
      iVar3 = FUN_00636e3c();
      FUN_001b5c6c(auStack_24,DAT_0079b448 + iVar3);
      if (param_2 == 5) {
        uVar7 = FUN_007aa3fc(auStack_24,3);
        FUN_0079a704(param_1,3,uVar7,0,0);
        uVar7 = FUN_007aa3fc(auStack_24,4);
        FUN_0079a704(param_1,4,uVar7,0,0);
        uVar7 = FUN_007aa3fc(auStack_24,5);
        FUN_0079a704(param_1,5,uVar7,0,0);
        return auStack_24;
      }
      if (param_2 == 6) {
        uVar7 = FUN_007aa4d4(auStack_24,3);
        FUN_0079a704(param_1,3,uVar7,0,0);
        uVar7 = FUN_007aa4d4(auStack_24,4);
        FUN_0079a704(param_1,4,uVar7,0,0);
        uVar7 = FUN_007aa4d4(auStack_24,5);
        FUN_0079a704(param_1,5,uVar7,0,0);
        return auStack_24;
      }
      if (param_2 != 7) {
        if (param_2 == 8) {
          uVar7 = FUN_007aa460(auStack_24,3);
          FUN_0079a704(param_1,3,uVar7,0,0);
          uVar7 = FUN_007aa460(auStack_24,4);
          FUN_0079a704(param_1,4,uVar7,0,0);
          uVar7 = FUN_007aa460(auStack_24,5);
          FUN_0079a704(param_1,5,uVar7,0,0);
          return auStack_24;
        }
        FUN_00756d40(auStack_20,0x2000);
        iVar3 = FUN_005a20f8(auStack_20);
        iVar4 = FUN_00636e3c();
        uVar2 = DAT_0079b450;
        bVar1 = *(byte *)(iVar4 + DAT_0079b44c);
        uVar5 = 0;
        do {
          uVar8 = (uint)*(byte *)(iVar3 + 0xd);
          if (0xad < uVar8) {
            uVar8 = 0;
          }
          if ((uVar8 == param_2) &&
             ((bVar1 >> 4 == 0 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
            *(uint *)(param_1 + (uVar5 >> 5) * 4) =
                 *(uint *)(param_1 + (uVar5 >> 5) * 4) | 1 << (uVar5 & 0x1f);
          }
          uVar5 = uVar5 + 1;
          iVar3 = iVar3 + 0x22;
        } while (uVar5 < uVar2);
        return auStack_24;
      }
      uVar7 = FUN_007aa388(auStack_24,3);
      FUN_0079a704(param_1,3,uVar7,0,0);
      uVar7 = FUN_007aa388(auStack_24,4);
      FUN_0079a704(param_1,4,uVar7,0,0);
      uVar7 = FUN_007aa388(auStack_24,5);
      FUN_0079a704(param_1,5,uVar7,0,0);
      return auStack_24;
    }
    puVar6 = (undefined1 *)FUN_0011df38(3);
    if (puVar6 == (undefined1 *)0x0) {
      FUN_0079a704(param_1,3,5,0,0);
      FUN_0079a704(param_1,4,5,0,0);
      puVar6 = (undefined1 *)FUN_0079a704(param_1,5,5,0,0);
      return puVar6;
    }
    if (puVar6 == (undefined1 *)0x1) {
      FUN_0079a704(param_1,3,6,0,0);
      FUN_0079a704(param_1,4,6,0,0);
      puVar6 = (undefined1 *)FUN_0079a704(param_1,5,6,0,0);
      return puVar6;
    }
    if (puVar6 == &SUB_00000002) {
      FUN_0079a704(param_1,3,7,0,0);
      FUN_0079a704(param_1,4,7,0,0);
      puVar6 = (undefined1 *)FUN_0079a704(param_1,5,7,0,0);
      return puVar6;
    }
  }
  return puVar6;
}


