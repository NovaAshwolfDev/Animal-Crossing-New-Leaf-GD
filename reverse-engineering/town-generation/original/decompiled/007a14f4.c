/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007a14f4. Provisional types; not original source or a verified portable implementation. */

void FUN_007a14f4(void)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  
  uVar2 = FUN_0074702c();
  uVar9 = 0;
  do {
    uVar8 = 0;
    do {
      puVar3 = (undefined2 *)FUN_007e23e0(uVar2,uVar8,uVar9);
      iVar4 = FUN_007e206c(uVar2,uVar8,uVar9);
      if (iVar4 != 0) {
        uVar1 = *puVar3;
        uVar5 = FUN_001cd62c();
        iVar6 = FUN_001cd81c(uVar5,uVar1);
        if (iVar6 != 0) {
          FUN_00748d30(iVar4,iVar6,0xa00);
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 7);
    uVar9 = uVar9 + 1;
  } while (uVar9 < 6);
  puVar3 = (undefined2 *)FUN_007e23e0(uVar2,0,1);
  uVar1 = 0x164;
  if (puVar3 != (undefined2 *)0x0) {
    uVar1 = *puVar3;
  }
  iVar4 = FUN_00687d88(uVar1);
  if (iVar4 == 0xe) {
    uVar5 = 1;
    uVar10 = 0;
  }
  else {
    uVar5 = 5;
    uVar10 = 0xf;
  }
  uVar9 = 0;
  do {
    iVar4 = FUN_007e206c(uVar2,uVar5,uVar9);
    if (iVar4 != 0) {
      iVar6 = 0;
      do {
        iVar7 = FUN_007f32bc(iVar4,uVar10,iVar6);
        if (iVar7 == 0x14) {
          FUN_006928e4(iVar4,uVar10,iVar6,0x32);
        }
        else if (iVar7 == 0x16) {
          FUN_006928e4(iVar4,uVar10,iVar6,0x80);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 6);
  uVar9 = 0;
  do {
    iVar4 = FUN_007e206c(uVar2,uVar9,1);
    if (iVar4 != 0) {
      iVar6 = 0;
      do {
        iVar7 = FUN_007f32bc(iVar4,iVar6,0);
        if (iVar7 == 0x14) {
          FUN_006928e4(iVar4,iVar6,0,0x32);
        }
        else if (iVar7 == 0x16) {
          FUN_006928e4(iVar4,iVar6,0,0x80);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x10);
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 7);
  return;
}


