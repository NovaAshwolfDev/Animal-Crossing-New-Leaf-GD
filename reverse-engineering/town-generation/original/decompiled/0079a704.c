/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079a704. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_0079a704(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  if (param_3 == 2 || param_3 == 1) {
    if (param_4 != 0) {
      puVar2 = (undefined1 *)FUN_0079aa00();
      return puVar2;
    }
    puVar2 = (undefined1 *)FUN_00798db8();
    return puVar2;
  }
  if (param_3 == 4) {
    FUN_0079a704(param_1,param_2,5,param_4,param_5);
    FUN_0079a704(param_1,param_2,6,param_4,param_5);
  }
  else {
    if (param_3 != 3) {
      iVar1 = FUN_00636e3c();
      FUN_001b5c6c(auStack_2c,DAT_0079a9f8 + iVar1);
      if (param_3 == 5) {
        param_3 = FUN_007aa3fc(auStack_2c,param_2);
      }
      else if (param_3 == 6) {
        param_3 = FUN_007aa4d4(auStack_2c,param_2);
      }
      else if (param_3 == 7) {
        param_3 = FUN_007aa388(auStack_2c,param_2);
      }
      else if (param_3 == 8) {
        param_3 = FUN_007aa460(auStack_2c,param_2);
      }
      puVar3 = (uint *)FUN_005a19a0(param_2);
      uVar4 = *puVar3;
      uVar9 = puVar3[1];
      FUN_00756d40(auStack_28);
      iVar1 = FUN_005a20f8(auStack_28);
      iVar5 = FUN_00636e3c();
      bVar10 = (param_5 - 1U & (uint)(*(byte *)(iVar5 + DAT_0079a9fc) >> 4)) == 0;
      if (param_4 == 0) {
        uVar8 = 0;
        if (uVar9 != 0) {
          do {
            uVar6 = (uint)*(byte *)(iVar1 + 0xd);
            if (0xad < uVar6) {
              uVar6 = 0;
            }
            if ((uVar6 == param_3) &&
               ((bVar10 || (-1 < (int)((uint)*(byte *)(iVar1 + 0x1f) << 0x19))))) {
              uVar7 = ((uVar4 & 0xffff) + uVar8) - 0x2000;
              uVar6 = uVar7 >> 5;
              *(uint *)(param_1 + uVar6 * 4) = *(uint *)(param_1 + uVar6 * 4) | 1 << (uVar7 & 0x1f);
            }
            uVar8 = uVar8 + 1;
            iVar1 = iVar1 + 0x22;
          } while (uVar8 < uVar9);
        }
      }
      else {
        uVar8 = 0;
        if (uVar9 != 0) {
          do {
            uVar6 = (uint)*(byte *)(iVar1 + 0xd);
            if (0xad < uVar6) {
              uVar6 = 0;
            }
            if (((uVar6 == param_3) && (iVar5 = FUN_007dcca4(iVar1), iVar5 == 0)) &&
               ((bVar10 || (-1 < (int)((uint)*(byte *)(iVar1 + 0x1f) << 0x19))))) {
              uVar7 = ((uVar4 & 0xffff) + uVar8) - 0x2000;
              uVar6 = uVar7 >> 5;
              *(uint *)(param_1 + uVar6 * 4) = *(uint *)(param_1 + uVar6 * 4) | 1 << (uVar7 & 0x1f);
            }
            uVar8 = uVar8 + 1;
            iVar1 = iVar1 + 0x22;
          } while (uVar8 < uVar9);
        }
      }
      return auStack_2c;
    }
    puVar2 = (undefined1 *)FUN_0011df38(3);
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = (undefined1 *)FUN_0079a704(param_1,param_2,5,param_4,param_5);
      return puVar2;
    }
    if (puVar2 == (undefined1 *)0x1) {
      puVar2 = (undefined1 *)FUN_0079a704(param_1,param_2,6,param_4,param_5);
      return puVar2;
    }
    if (puVar2 != &SUB_00000002) {
      return puVar2;
    }
  }
  puVar2 = (undefined1 *)FUN_0079a704(param_1,param_2,7,param_4,param_5);
  return puVar2;
}


