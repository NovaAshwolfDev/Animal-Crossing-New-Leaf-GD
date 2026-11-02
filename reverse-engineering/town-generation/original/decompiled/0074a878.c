/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0074a878. Provisional types; not original source or a verified portable implementation. */

void FUN_0074a878(int param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  
  uVar3 = DAT_0074aa68;
  piVar2 = DAT_0074aa64;
  puVar9 = (uint *)0x0;
  bVar1 = false;
  piVar7 = (int *)*DAT_0074aa64;
  if (piVar7 != DAT_0074aa64) {
    puVar10 = (uint *)0x0;
    do {
      if (piVar7[2] == param_1) {
        iVar5 = *(int *)(piVar7[-0x45] + 0x28);
        puVar4 = puVar10;
        if (iVar5 != 0) {
          puVar4 = (uint *)(piVar7[-0x45] + 0x28 + iVar5);
        }
        if (puVar4 == (uint *)0x0) {
          puVar8 = (uint *)0x0;
        }
        else {
          uVar6 = puVar4[10];
          puVar8 = puVar10;
          if (uVar6 != 0) {
            puVar8 = (uint *)(uVar6 + (int)(puVar4 + 10));
          }
        }
        if ((puVar8 == (uint *)0x0) || (puVar4 = puVar8, (~*puVar8 & 0x20000001) != 0)) {
          puVar4 = (uint *)0x0;
        }
        if (puVar4[6] == 0x80) {
          if (!bVar1 || puVar9 == (uint *)0x0) {
            FUN_007aac60(param_1,puVar8,0);
            bVar1 = true;
            if ((puVar8 != (uint *)0x0) && ((uVar3 & ~*puVar8) != 0)) {
              puVar8 = (uint *)0x0;
            }
            uVar6 = puVar8[0xe];
            puVar4 = puVar10;
            if (uVar6 != 0) {
              puVar4 = (uint *)(uVar6 + (int)(puVar8 + 0xe));
            }
            puVar4 = puVar4 + 3;
            uVar6 = *puVar4;
            goto joined_r0x0074a9fc;
          }
          if ((puVar8 != (uint *)0x0) && ((uVar3 & ~*puVar8) != 0)) {
            puVar8 = (uint *)0x0;
          }
          uVar6 = puVar8[0xe];
          puVar4 = puVar10;
          if (uVar6 != 0) {
            puVar4 = (uint *)(uVar6 + (int)(puVar8 + 0xe));
          }
          uVar6 = puVar4[3];
          puVar8 = puVar10;
          if (uVar6 != 0) {
            puVar8 = (uint *)((int)(puVar4 + 3) + uVar6);
          }
          FUN_002febf4(puVar8,puVar9,0x2000);
        }
        else if (puVar9 == (uint *)0x0) {
          FUN_007aac60(param_1,puVar8,1);
          if ((puVar8 != (uint *)0x0) && ((uVar3 & ~*puVar8) != 0)) {
            puVar8 = (uint *)0x0;
          }
          uVar6 = puVar8[0xe];
          puVar4 = puVar10;
          if (uVar6 != 0) {
            puVar4 = (uint *)(uVar6 + (int)(puVar8 + 0xe));
          }
          puVar4 = puVar4 + 3;
          uVar6 = *puVar4;
joined_r0x0074a9fc:
          puVar9 = puVar10;
          if (uVar6 != 0) {
            puVar9 = (uint *)(uVar6 + (int)puVar4);
          }
        }
        else {
          if ((puVar8 != (uint *)0x0) && ((uVar3 & ~*puVar8) != 0)) {
            puVar8 = (uint *)0x0;
          }
          uVar6 = puVar8[0xe];
          puVar4 = puVar10;
          if (uVar6 != 0) {
            puVar4 = (uint *)(uVar6 + (int)(puVar8 + 0xe));
          }
          uVar6 = puVar4[3];
          puVar8 = puVar10;
          if (uVar6 != 0) {
            puVar8 = (uint *)((int)(puVar4 + 3) + uVar6);
          }
          FUN_002febf4(puVar8,puVar9,0x800);
        }
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != piVar2);
  }
  return;
}


