/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011cbe0. Provisional types; not original source or a verified portable implementation. */

void FUN_0011cbe0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *unaff_r5;
  uint *puVar7;
  int *piVar8;
  
  puVar7 = (uint *)*param_1;
  if ((puVar7 != (uint *)0x0) && ((~*puVar7 & 0x80000002) != 0)) {
    puVar7 = (uint *)0x0;
  }
  if (puVar7 != (uint *)0x0) {
    if (puVar7[0xe] != 0) {
      (**(code **)(*(int *)puVar7[0x11] + 0xc))();
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
    }
    if (puVar7[0x10] != 0) {
      (**(code **)(*(int *)puVar7[0x11] + 0xc))();
      puVar7[0x10] = 0;
    }
    uVar3 = puVar7[0xb];
    if (uVar3 != 0) {
      unaff_r5 = (int *)((int)puVar7 + uVar3 + 0x2c);
    }
    if (uVar3 == 0) {
      unaff_r5 = (int *)0x0;
    }
    piVar8 = unaff_r5 + puVar7[10];
    for (; unaff_r5 != piVar8; unaff_r5 = unaff_r5 + 1) {
      if (*unaff_r5 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *unaff_r5 + (int)unaff_r5;
      }
      if (iVar6 != 0) {
        iVar5 = *(int *)(iVar6 + 0x14);
        iVar4 = 0;
        if (0 < iVar5) {
          do {
            if (*(int *)(iVar6 + 0x18) == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = iVar6 + 0x18 + *(int *)(iVar6 + 0x18);
            }
            piVar2 = (int *)(iVar1 + iVar4 * 4);
            iVar1 = *piVar2;
            iVar4 = iVar4 + 1;
            if (iVar1 == 0) {
              iVar1 = 0;
            }
            else {
              iVar1 = (int)piVar2 + iVar1;
            }
            *(undefined4 *)(iVar1 + 8) = 0xffffffff;
            *(undefined1 *)(iVar1 + 5) = 0;
          } while (iVar4 < iVar5);
        }
        *(undefined4 *)(iVar6 + 0x74) = 0;
        if (*(int *)(iVar6 + 0x7c) != 0) {
          if (*(int *)(iVar6 + 0x84) == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar6 + 0x84 + *(int *)(iVar6 + 0x84);
          }
          (**(code **)(**(int **)(iVar4 + 0x44) + 0xc))();
          *(undefined4 *)(iVar6 + 0x7c) = 0;
          *(undefined4 *)(iVar6 + 0x80) = 0;
        }
      }
    }
    iVar6 = 0;
    if (0 < (int)puVar7[0xc]) {
      do {
        uVar3 = puVar7[0xd];
        if (uVar3 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)puVar7 + uVar3 + 0x34;
        }
        if (*(int *)(iVar4 + iVar6 * 4) != 0) {
          if (uVar3 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = (int)puVar7 + uVar3 + 0x34;
          }
          *(undefined4 *)(iVar4 + iVar6 * 4) = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)puVar7[0xc]);
    }
    puVar7[0x11] = 0;
  }
  return;
}


