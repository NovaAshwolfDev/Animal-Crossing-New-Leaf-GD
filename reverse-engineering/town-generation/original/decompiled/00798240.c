/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00798240. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_00798240(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  puVar2 = (uint *)FUN_005a19a0(5);
  uVar3 = *puVar2;
  uVar9 = puVar2[1];
  FUN_00756d40(&uStack_20);
  iVar4 = FUN_005a20f8(&uStack_20);
  iVar5 = FUN_00636e3c();
  bVar1 = *(byte *)(iVar5 + DAT_00798300);
  uVar6 = 0;
  if (uVar9 != 0) {
    do {
      uVar7 = (uint)(*(byte *)(iVar4 + 0x1d) >> 4);
      if (0xd < uVar7) {
        uVar7 = 0;
      }
      if ((uVar7 == param_2) &&
         ((bVar1 >> 4 == 0 || (-1 < (int)((uint)*(byte *)(iVar4 + 0x1f) << 0x19))))) {
        uVar8 = ((uVar3 & 0xffff) + uVar6) - 0x2000;
        uVar7 = uVar8 >> 5;
        *(uint *)(param_1 + uVar7 * 4) = *(uint *)(param_1 + uVar7 * 4) | 1 << (uVar8 & 0x1f);
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x22;
    } while (uVar6 < uVar9);
  }
  return &uStack_20;
}


