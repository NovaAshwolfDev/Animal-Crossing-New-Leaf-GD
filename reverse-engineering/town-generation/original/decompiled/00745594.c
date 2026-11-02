/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00745594. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00745594(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  iVar7 = DAT_007459b4;
  iVar10 = *(int *)(DAT_007459b4 + 4);
  iVar1 = FUN_00636e3c();
  iVar1 = iVar1 + 0x4da00;
  uVar9 = 0;
  do {
    uVar8 = 0;
    do {
      puVar2 = (undefined2 *)FUN_007e23e0(iVar10,uVar8,uVar9);
      if (puVar2 != (undefined2 *)0x0) {
        puVar3 = (undefined2 *)FUN_007f3690(iVar1,uVar8,uVar9);
        *puVar2 = *puVar3;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 7);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 6);
  uVar9 = 0;
  do {
    uVar8 = 0;
    do {
      iVar4 = FUN_00697880(uVar8,uVar9);
      if (iVar4 != 0) {
        uVar5 = FUN_00697800(iVar1,uVar8,uVar9);
        iVar4 = FUN_007e23e0(iVar10,uVar8 + 1,uVar9 + 1);
        if (iVar4 != 0) {
          FUN_005dc588(iVar4,uVar5,0);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 5);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  uVar5 = FUN_006978d4(iVar1);
  *(undefined4 *)(iVar10 + 0x28) = uVar5;
  FUN_007a14f4(1);
  FUN_00287c70(0);
  uVar9 = 2;
  do {
    iVar1 = FUN_007e23e0(*(undefined4 *)(iVar7 + (uVar9 & 0xff) * 4),0);
    if (iVar1 != 0) {
      FUN_007a1ce4(uVar9 & 0xff);
                    /* WARNING: Subroutine does not return */
      FUN_0063653c();
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x1a);
  uVar9 = 0x1a;
  do {
    psVar6 = (short *)FUN_007e23e0(*(undefined4 *)(iVar7 + (uVar9 & 0xff) * 4),0);
    if (psVar6 != (short *)0x0) {
      *psVar6 = (short)uVar9 + 0x139;
                    /* WARNING: Subroutine does not return */
      FUN_0063653c();
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x1e);
  iVar7 = FUN_00636e3c();
  FUN_003c04c8(iVar7 + DAT_007459bc);
  return 1;
}


