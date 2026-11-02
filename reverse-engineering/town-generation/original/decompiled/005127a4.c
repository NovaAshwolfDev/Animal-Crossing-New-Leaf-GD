/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005127a4. Provisional types; not original source or a verified portable implementation. */

void FUN_005127a4(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int *unaff_r9;
  undefined4 *unaff_r11;
  bool bVar9;
  
  iVar3 = *param_1;
  iVar4 = *(int *)(iVar3 + 0x10);
  if (iVar4 != 0) {
    unaff_r9 = (int *)(iVar4 + iVar3 + 0x10);
  }
  if (iVar4 == 0) {
    unaff_r9 = (int *)0x0;
  }
  piVar1 = unaff_r9 + *(int *)(iVar3 + 0xc);
  bVar9 = unaff_r9 != piVar1;
  if (bVar9) {
    unaff_r11 = DAT_005128bc;
  }
  while (bVar9) {
    uVar5 = 0;
    if (*unaff_r9 == 0) {
      puVar7 = (uint *)0x0;
    }
    else {
      puVar7 = (uint *)(*unaff_r9 + (int)unaff_r9);
    }
    uVar8 = *puVar7;
    if (puVar7[3] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = (int)puVar7 + puVar7[3] + 0xc;
    }
    if (uVar8 != 0) {
      do {
        if (puVar7[1] == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)puVar7 + puVar7[1] + 4;
        }
        piVar2 = (int *)(iVar4 + uVar5 * 4);
        iVar4 = *piVar2;
        if (iVar4 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = iVar4 + (int)piVar2;
        }
        if (iVar6 != 0) {
          iVar4 = *(int *)(iVar6 + 0x18);
        }
        if (iVar6 != 0 && iVar4 != 0) {
          (**(code **)(*(int *)puVar7[5] + 0xc))();
          *(undefined4 *)(iVar6 + 0x18) = 0;
          *(undefined4 *)(iVar6 + 0x1c) = 0;
        }
        if (*(int *)(iVar6 + 0x24) != 0) {
          (*(code *)*unaff_r11)
                    (*(int *)(iVar6 + 0x24),DAT_005128c0,*(undefined4 *)(iVar3 + uVar5 * 4),
                     *(undefined4 *)(iVar6 + 0x20));
          *(undefined4 *)(iVar6 + 0x20) = 0;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar8);
    }
    FUN_002fff30(iVar3,uVar8 << 2);
    puVar7[5] = 0;
    unaff_r9 = unaff_r9 + 1;
    puVar7[4] = puVar7[4] & 0xfffffffe;
    bVar9 = unaff_r9 != piVar1;
  }
  return;
}


