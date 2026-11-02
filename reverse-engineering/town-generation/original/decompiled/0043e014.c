/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0043e014. Provisional types; not original source or a verified portable implementation. */

void FUN_0043e014(uint *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  int unaff_r7;
  int iVar10;
  uint *puVar11;
  uint *puVar12;
  bool bVar13;
  
  bVar13 = (*param_1 & 0xf) != 0;
  if (bVar13) {
    unaff_r7 = 1;
  }
  uVar2 = (*param_1 & 0xffffff | (uint)*(byte *)((int)param_1 + 3) << 0x18) >> 8;
  if (!bVar13) {
    unaff_r7 = 0;
  }
  puVar11 = param_1 + 1;
  if (uVar2 == 0) {
    uVar2 = *puVar11;
    puVar11 = param_1 + 2;
    uVar2 = uVar2 & 0xffffff | (uint)*(byte *)((int)param_1 + 7) << 0x18;
    if (uVar2 == 0) {
      return;
    }
  }
  do {
    bVar9 = (byte)*puVar11;
    iVar10 = 0;
    pbVar5 = param_2;
    puVar12 = (uint *)((int)puVar11 + 1);
    do {
      if ((bVar9 & 0x80) == 0) {
        puVar11 = (uint *)((int)puVar12 + 1);
        uVar2 = uVar2 - 1;
        param_2 = pbVar5 + 1;
        *pbVar5 = (byte)*puVar12;
      }
      else {
        bVar1 = (byte)*puVar12;
        uVar8 = (uint)(bVar1 >> 4);
        if (unaff_r7 == 0) {
          uVar8 = uVar8 + 3;
        }
        else if (uVar8 == 1) {
          pbVar3 = (byte *)((int)puVar12 + 1);
          puVar12 = (uint *)((int)puVar12 + 2);
          uVar8 = (((uint)bVar1 << 0x1c) >> 0x10 | (uint)*pbVar3 << 4 |
                  (uint)(*(byte *)puVar12 >> 4)) + 0x111;
        }
        else if (uVar8 == 0) {
          puVar12 = (uint *)((int)puVar12 + 1);
          uVar8 = (((uint)bVar1 << 0x1c) >> 0x18 | (uint)(*(byte *)puVar12 >> 4)) + 0x11;
        }
        else {
          uVar8 = uVar8 + 1;
        }
        puVar11 = (uint *)((int)puVar12 + 2);
        if (uVar2 < uVar8) {
          uVar8 = uVar2;
        }
        uVar2 = uVar2 - uVar8;
        pbVar3 = pbVar5 + -(((uint)*(byte *)((int)puVar12 + 1) |
                            ((uint)(byte)*puVar12 << 0x1c) >> 0x14) + 1);
        param_2 = pbVar5;
        if (uVar8 != 0) {
          pbVar4 = pbVar3 + -1;
          pbVar6 = pbVar5 + -1;
          if ((uVar8 & 1) != 0) {
            *pbVar5 = *pbVar3;
            pbVar4 = pbVar3;
            pbVar6 = pbVar5;
          }
          for (uVar7 = uVar8 >> 1; uVar7 != 0; uVar7 = uVar7 - 1) {
            pbVar6[1] = pbVar4[1];
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
            *pbVar6 = *pbVar4;
          }
          param_2 = pbVar5 + uVar8;
        }
      }
      if (uVar2 == 0) {
        return;
      }
      iVar10 = iVar10 + 1;
      bVar9 = bVar9 << 1;
      pbVar5 = param_2;
      puVar12 = puVar11;
    } while (iVar10 < 8);
  } while( true );
}


