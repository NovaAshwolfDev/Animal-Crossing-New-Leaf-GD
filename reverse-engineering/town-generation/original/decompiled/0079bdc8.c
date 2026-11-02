/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079bdc8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0079bdc8(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uStack_28;
  
  iVar4 = 0;
  uVar6 = 0;
  do {
    for (uVar2 = *(uint *)(param_1 + uVar6 * 4); uVar2 != 0; uVar2 = uVar2 >> 1) {
      if ((uVar2 & 1) != 0) {
        iVar4 = iVar4 + 1;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x8e);
  uStack_28 = param_4;
  uVar3 = FUN_0011df38(iVar4);
  uVar2 = FUN_008072dc(param_1,uVar3);
  FUN_00756d40(&uStack_28,0x2000);
  iVar4 = FUN_005a20f8(&uStack_28);
  uVar6 = DAT_0079bf4c;
  uVar5 = 0;
  if (param_3 == 0) {
    do {
      uVar7 = (uint)(*(byte *)(iVar4 + 0x19) >> 4);
      if (6 < uVar7) {
        uVar7 = 0;
      }
      if (uVar7 != param_2) {
        *(uint *)(param_1 + (uVar5 >> 5) * 4) =
             *(uint *)(param_1 + (uVar5 >> 5) * 4) & ~(1 << (uVar5 & 0x1f));
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x22;
    } while (uVar5 < uVar6);
  }
  else {
    do {
      bVar1 = *(byte *)(iVar4 + 0x19);
      if (bVar1 >> 4 < 7) {
        uVar7 = (uint)(bVar1 >> 4);
      }
      else {
        uVar7 = 0;
      }
      if ((uVar7 != param_2) && ((6 < bVar1 >> 4 || (bVar1 >> 4 != 4)))) {
        *(uint *)(param_1 + (uVar5 >> 5) * 4) =
             *(uint *)(param_1 + (uVar5 >> 5) * 4) & ~(1 << (uVar5 & 0x1f));
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x22;
    } while (uVar5 < uVar6);
  }
  iVar4 = 0;
  uVar6 = 0;
  do {
    for (uVar5 = *(uint *)(param_1 + uVar6 * 4); uVar5 != 0; uVar5 = uVar5 >> 1) {
      if ((uVar5 & 1) != 0) {
        iVar4 = iVar4 + 1;
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x8e);
  if (iVar4 == 0) {
    *(uint *)(param_1 + (uVar2 >> 5) * 4) =
         *(uint *)(param_1 + (uVar2 >> 5) * 4) | 1 << (uVar2 & 0x1f);
    return 0;
  }
  return 1;
}


