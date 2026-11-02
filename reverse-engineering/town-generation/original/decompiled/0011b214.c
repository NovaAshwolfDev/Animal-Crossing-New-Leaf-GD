/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011b214. Provisional types; not original source or a verified portable implementation. */

undefined8 FUN_0011b214(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar5 = param_3 - 0x20;
  if (0x1f < param_3) {
    param_4 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    HintPreloadData(param_2 + 0x50);
    uVar10 = *(undefined4 *)(param_2 + 0x10);
    uVar11 = *(undefined4 *)(param_2 + 0x14);
    uVar12 = *(undefined4 *)(param_2 + 0x18);
    uVar13 = *(undefined4 *)(param_2 + 0x1c);
    param_2 = param_2 + 0x20;
    while( true ) {
      *param_1 = param_4;
      param_1[1] = uVar7;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      bVar14 = 0x1f < uVar5;
      uVar5 = uVar5 - 0x20;
      param_1[4] = uVar10;
      param_1[5] = uVar11;
      param_1[6] = uVar12;
      param_1[7] = uVar13;
      param_1 = param_1 + 8;
      if (bVar14) {
        param_4 = *(undefined4 *)param_2;
        uVar7 = *(undefined4 *)(param_2 + 4);
        uVar8 = *(undefined4 *)(param_2 + 8);
        uVar9 = *(undefined4 *)(param_2 + 0xc);
        param_2 = param_2 + 0x10;
      }
      HintPreloadData(param_2 + 0x40);
      if (!bVar14) break;
      uVar10 = *(undefined4 *)param_2;
      uVar11 = *(undefined4 *)(param_2 + 4);
      uVar12 = *(undefined4 *)(param_2 + 8);
      uVar13 = *(undefined4 *)(param_2 + 0xc);
      param_2 = param_2 + 0x10;
    }
  }
  if ((bool)((byte)(uVar5 >> 4) & 1)) {
    param_4 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)(param_2 + 4);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar9 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *param_1 = param_4;
    param_1[1] = uVar7;
    param_1[2] = uVar8;
    param_1[3] = uVar9;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar5 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar7 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *param_1 = param_4;
    param_1[1] = uVar7;
    param_1 = param_1 + 2;
  }
  puVar2 = param_1;
  pbVar3 = param_2;
  if ((bool)((byte)(uVar5 >> 2) & 1)) {
    pbVar3 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    puVar2 = param_1 + 1;
    *param_1 = param_4;
  }
  uVar6 = (undefined2)param_4;
  if ((uVar5 & 3) != 0) {
    bVar15 = (bool)((byte)(uVar5 >> 1) & 1);
    uVar5 = uVar5 << 0x1f;
    bVar14 = (int)uVar5 < 0;
    pbVar4 = pbVar3;
    if (bVar15) {
      pbVar4 = pbVar3 + 2;
      uVar6 = *(undefined2 *)pbVar3;
    }
    pbVar3 = pbVar4;
    if (bVar14) {
      pbVar3 = pbVar4 + 1;
      uVar5 = (uint)*pbVar4;
    }
    puVar1 = puVar2;
    if (bVar15) {
      puVar1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = uVar6;
    }
    puVar2 = puVar1;
    if (bVar14) {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)uVar5;
    }
    return CONCAT44(pbVar3,puVar2);
  }
  return CONCAT44(pbVar3,puVar2);
}


