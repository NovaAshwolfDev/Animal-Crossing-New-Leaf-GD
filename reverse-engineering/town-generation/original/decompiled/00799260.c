/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00799260. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00799260(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uStack_28;
  
  iVar4 = 0;
  uVar5 = 0;
  do {
    for (uVar1 = *(uint *)(param_1 + uVar5 * 4); uVar1 != 0; uVar1 = uVar1 >> 1) {
      if ((uVar1 & 1) != 0) {
        iVar4 = iVar4 + 1;
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x8e);
  uStack_28 = param_4;
  uVar2 = FUN_0011df38(iVar4);
  uVar1 = FUN_008072dc(param_1,uVar2);
  FUN_00756d40(&uStack_28,0x2000);
  iVar4 = FUN_005a20f8(&uStack_28);
  uVar5 = DAT_00799380;
  uVar6 = 0;
  do {
    uVar3 = FUN_007dcdcc(iVar4);
    if (param_2 <= uVar3) {
      *(uint *)(param_1 + (uVar6 >> 5) * 4) =
           *(uint *)(param_1 + (uVar6 >> 5) * 4) & ~(1 << (uVar6 & 0x1f));
    }
    uVar6 = uVar6 + 1;
    iVar4 = iVar4 + 0x22;
  } while (uVar6 < uVar5);
  iVar4 = 0;
  uVar5 = 0;
  do {
    for (uVar6 = *(uint *)(param_1 + uVar5 * 4); uVar6 != 0; uVar6 = uVar6 >> 1) {
      if ((uVar6 & 1) != 0) {
        iVar4 = iVar4 + 1;
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x8e);
  if (iVar4 == 0) {
    *(uint *)(param_1 + (uVar1 >> 5) * 4) =
         *(uint *)(param_1 + (uVar1 >> 5) * 4) | 1 << (uVar1 & 0x1f);
    return 0;
  }
  return 1;
}


