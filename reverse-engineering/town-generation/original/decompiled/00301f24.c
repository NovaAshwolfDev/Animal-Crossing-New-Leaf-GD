/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00301f24. Provisional types; not original source or a verified portable implementation. */

uint FUN_00301f24(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  
  if (((uint)param_1 & 3) != 0 || ((uint)param_2 & 3) != 0) {
    do {
      pbVar3 = (byte *)((int)param_1 + 1);
      uVar6 = (uint)(byte)*param_1;
      pbVar5 = (byte *)((int)param_2 + 1);
      uVar7 = (uint)(byte)*param_2;
      bVar11 = uVar6 == 1;
      if (uVar6 != 0) {
        bVar11 = uVar6 == uVar7;
      }
      if (!bVar11) break;
      param_1 = (uint *)((int)param_1 + 2);
      uVar6 = (uint)*pbVar3;
      param_2 = (uint *)((int)param_2 + 2);
      uVar7 = (uint)*pbVar5;
      bVar11 = uVar6 == 1;
      if (uVar6 != 0) {
        bVar11 = uVar6 == uVar7;
      }
    } while (bVar11);
    return uVar6 - uVar7;
  }
  do {
    puVar1 = param_1 + 1;
    uVar6 = *param_1;
    puVar4 = param_2 + 1;
    uVar7 = *param_2;
    uVar8 = uVar6 - DAT_00301fdc & ~uVar6 & DAT_00301fdc << 7;
    if (uVar8 != 0 || uVar6 != uVar7) break;
    param_1 = param_1 + 2;
    uVar6 = *puVar1;
    param_2 = param_2 + 2;
    uVar7 = *puVar4;
    uVar8 = uVar6 - DAT_00301fdc & ~uVar6 & DAT_00301fdc << 7;
  } while (uVar8 == 0 && uVar6 == uVar7);
  uVar2 = uVar7 * 0x1000000 + uVar6 * -0x1000000;
  bVar9 = uVar2 == 0;
  bVar12 = !bVar9 && uVar6 * 0x1000000 <= uVar7 * 0x1000000;
  bVar10 = (uVar8 & 0xff0) == 0;
  bVar11 = bVar9 && bVar10;
  if (bVar9 && bVar10) {
    uVar2 = uVar7 * 0x10000 + uVar6 * -0x10000;
    bVar9 = uVar2 == 0;
    bVar12 = !bVar9 && uVar6 * 0x10000 <= uVar7 * 0x10000;
    bVar10 = (uVar8 & 0xff00) == 0;
    bVar11 = bVar9 && bVar10;
    if (bVar9 && bVar10) {
      uVar2 = uVar7 * 0x100 + uVar6 * -0x100;
      bVar9 = uVar2 == 0;
      bVar12 = !bVar9 && uVar6 * 0x100 <= uVar7 * 0x100;
      bVar10 = (uVar8 & 0xff0000) == 0;
      bVar11 = bVar9 && bVar10;
      if (bVar9 && bVar10) {
        bVar12 = uVar6 <= uVar7;
        uVar2 = uVar7 - uVar6;
        bVar11 = uVar2 == 0;
      }
    }
  }
  if (!bVar11) {
    uVar2 = (uint)bVar12 << 0x1f | uVar2 >> 1;
  }
  return uVar2;
}


