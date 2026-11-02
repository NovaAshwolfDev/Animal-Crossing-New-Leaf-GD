/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079b454. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_0079b454(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  puVar2 = (uint *)FUN_005a19a0(param_2);
  uVar9 = puVar2[1];
  uVar10 = *puVar2 & 0xffff;
  uVar6 = (*puVar2 >> 0x10) - 0x2000;
  uVar4 = (int)(uVar10 - 0x2000) >> 5;
  uVar1 = (int)uVar6 >> 5;
  *(uint *)(param_1 + uVar4 * 4) = *(uint *)(param_1 + uVar4 * 4) | -1 << (uVar10 - 0x2000 & 0x1f);
  uVar8 = uVar4;
  while (uVar8 = uVar8 + 1, uVar8 < uVar1) {
    *(undefined4 *)(param_1 + uVar8 * 4) = 0xffffffff;
  }
  uVar7 = *(uint *)(param_1 + uVar1 * 4);
  uVar8 = 0xffffffff >> (0x1f - (uVar6 & 0x1f) & 0xff);
  if (uVar4 == uVar1) {
    uVar7 = uVar7 & uVar8;
  }
  else {
    uVar7 = uVar7 | uVar8;
  }
  *(uint *)(param_1 + uVar1 * 4) = uVar7;
  iVar3 = FUN_00636e3c();
  puVar5 = (undefined4 *)(uint)(*(byte *)(iVar3 + DAT_0079b558) >> 4);
  if (puVar5 == (undefined4 *)0x0) {
    FUN_00756d40(&uStack_20,uVar10);
    iVar3 = FUN_005a20f8(&uStack_20);
    uVar4 = 0;
    puVar5 = &uStack_20;
    if (uVar9 != 0) {
      do {
        if ((int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19) < 0) {
          uVar8 = (uVar10 + uVar4) - 0x2000;
          uVar1 = uVar8 >> 5;
          *(uint *)(param_1 + uVar1 * 4) = *(uint *)(param_1 + uVar1 * 4) & ~(1 << (uVar8 & 0x1f));
        }
        uVar4 = uVar4 + 1;
        iVar3 = iVar3 + 0x22;
      } while (uVar4 < uVar9);
    }
  }
  return puVar5;
}


