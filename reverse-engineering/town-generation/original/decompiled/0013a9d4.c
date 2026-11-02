/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0013a9d4. Provisional types; not original source or a verified portable implementation. */

void FUN_0013a9d4(undefined4 *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 *puVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  
  if ((*(char *)(param_2 + 0xf2) == '\0') ||
     ((((psVar4 = (short *)FUN_00152804(), puVar3 = DAT_0013adb0,
        *(short *)(param_2 + 0x118) == *psVar4 && (*(short *)(param_2 + 0x11a) == psVar4[1])) &&
       (*(short *)(param_2 + 0x11c) == psVar4[2])) && (*(short *)(param_2 + 0x11e) == psVar4[3]))))
  {
    iVar5 = 0;
    uVar8 = *(undefined4 *)(param_2 + 0xb8);
    uVar14 = *(undefined4 *)(param_2 + 0xbc);
    uVar15 = *(undefined4 *)(param_2 + 0xc0);
    uVar17 = *(undefined4 *)(param_2 + 0xc4);
    *param_1 = *(undefined4 *)(param_2 + 0xb4);
    param_1[1] = uVar8;
    param_1[2] = uVar14;
    param_1[3] = uVar15;
    param_1[4] = uVar17;
    *(undefined2 *)(param_1 + 5) = 0;
    *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)(param_2 + 0xca);
    *(undefined4 *)((int)param_1 + 0x1a) = *(undefined4 *)(param_2 + 0xce);
    *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)(param_2 + 0xd2);
    *(undefined4 *)((int)param_1 + 0x22) = *(undefined4 *)(param_2 + 0xd6);
    *(undefined4 *)((int)param_1 + 0x26) = *(undefined4 *)(param_2 + 0xda);
    *(undefined2 *)((int)param_1 + 0x2a) = 0;
    do {
      puVar13 = (ushort *)((int)param_1 + iVar5 * 2);
      uVar1 = *puVar13;
      if (uVar1 == 0) break;
      if ((uVar1 < 0x20) || (uVar1 == 0x7f)) {
        *puVar13 = 0x3f;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 10);
    iVar5 = 0;
    do {
      puVar13 = (ushort *)((int)param_1 + iVar5 * 2 + 0x16);
      uVar1 = *puVar13;
      if (uVar1 == 0) break;
      if ((uVar1 < 0x20) || (uVar1 == 0x7f)) {
        *puVar13 = 0x3f;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 10);
    if (param_3 != 0) {
      iVar16 = *(int *)(param_2 + 0xf8);
      iVar5 = FUN_00107814();
      if (iVar16 == 0) {
        if ((iVar5 == 0) || ((iVar5 == 1 || iVar5 == 2) || iVar5 == 3)) goto LAB_0013abd4;
      }
      else if (iVar16 == 1) {
        if (iVar5 == 4) goto LAB_0013abd4;
      }
      else if (iVar16 == 2) {
        if (iVar5 == 5) goto LAB_0013abd4;
      }
      else if (iVar16 == 3 && iVar5 == 6) goto LAB_0013abd4;
      iVar5 = 0;
      do {
        puVar13 = (ushort *)((int)param_1 + iVar5 * 2);
        uVar1 = *puVar13;
        if (uVar1 == 0) break;
        iVar5 = iVar5 + 1;
        if (0x7f < uVar1) {
          *puVar13 = 0x3f;
        }
      } while (iVar5 < 10);
      iVar5 = 0;
      do {
        puVar13 = (ushort *)((int)param_1 + iVar5 * 2 + 0x16);
        uVar1 = *puVar13;
        if (uVar1 == 0) break;
        iVar5 = iVar5 + 1;
        if (0x7f < uVar1) {
          *puVar13 = 0x3f;
        }
      } while (iVar5 < 10);
    }
  }
  else {
    FUN_00157bec(param_1,*DAT_0013adb0,0xb);
    FUN_00157bec((int)param_1 + 0x16,*puVar3,0xb);
  }
LAB_0013abd4:
  FUN_0080c0d4(param_1 + 0xb,param_2 + 0x108);
  param_1[0xe] = param_1[0xe] & 0xfffffffe | *(uint *)(param_2 + 0xe0) & 1;
  iVar5 = *(int *)(param_2 + 0xe4);
  iVar16 = *(int *)(param_2 + 0xe8);
  if ((iVar5 == 0 && iVar16 == 0) ||
     (((iVar5 != 0 && iVar16 != 0 && (iVar5 - 1U < 0xc)) &&
      (iVar5 = FUN_0015a740(), iVar16 <= iVar5)))) {
    uVar6 = param_1[0xe];
    uVar9 = (*(uint *)(param_2 + 0xe4) & 0xf) << 1;
    param_1[0xe] = uVar6 & 0xffffffe1 | uVar9;
    uVar6 = uVar6 & 0xfffffc01 | uVar9 | (*(uint *)(param_2 + 0xe8) & 0x1f) << 5;
  }
  else {
    uVar6 = param_1[0xe] & 0xfffffc01;
  }
  param_1[0xe] = uVar6;
  uVar9 = (*(uint *)(param_2 + 0xec) & 0xf) << 10;
  param_1[0xe] = uVar6 & 0xffffc3ff | uVar9;
  uVar10 = (*(byte *)(param_2 + 0xf0) & 1) << 0xe;
  param_1[0xe] = uVar6 & 0xffff83ff | uVar9 | uVar10;
  uVar11 = *(uint *)(param_2 + 0xac) & 0xff;
  if (0x7f < uVar11) {
    uVar11 = 0x7f;
  }
  uVar7 = *(uint *)(param_2 + 0xb0) & 0xff;
  if (0x7f < uVar7) {
    uVar7 = 0x7f;
  }
  uVar12 = (uVar11 & 0x7f) << 0xf;
  uVar11 = (uVar7 & 0x7f) << 0x16;
  uVar7 = uVar11 | uVar12 | uVar6 & 0xe00003ff | uVar9 | uVar10;
  param_1[0xe] = uVar7;
  if (*(char *)(param_2 + 0xf2) == '\0') {
    uVar7 = uVar11 | uVar12 | uVar6 & 0xc00003ff | uVar9 | uVar10;
  }
  else {
    uVar7 = uVar7 | 0x20000000;
  }
  param_1[0xe] = uVar7;
  param_1[0xe] = uVar7 & 0x3fffffff | *(int *)(param_2 + 0xf8) << 0x1e;
  uVar1 = *(ushort *)((int)param_1 + 0x36);
  uVar2 = (ushort)*(undefined4 *)(param_2 + 0xfc) & 0xf;
  *(ushort *)((int)param_1 + 0x36) = uVar1 & 0xfff0 | uVar2;
  *(ushort *)((int)param_1 + 0x36) =
       uVar1 & 0xff00 | uVar2 | (ushort)(*(int *)(param_2 + 0x100) << 4) & 0xf0;
  uVar6 = param_1[0xf];
  uVar10 = *(uint *)(param_2 + 4) & 0xf;
  param_1[0xf] = uVar6 & 0xfffffff0 | uVar10;
  uVar9 = (*(uint *)(param_2 + 0x14) & 0xff) << 4;
  param_1[0xf] = uVar6 & 0xfffff000 | uVar10 | uVar9;
  param_1[0xf] = uVar6 & 0xffffe000 | uVar10 | uVar9 | (*(uint *)(param_2 + 0x1c) & 1) << 0xc;
  uVar8 = FUN_0013ae90(*(undefined4 *)(param_2 + 8));
  param_1[0x10] = uVar8;
  *(ushort *)((int)param_1 + 0x36) = *(ushort *)((int)param_1 + 0x36) & 0xff;
  param_1[0xf] = param_1[0xf] & 0x1fff;
  return;
}


