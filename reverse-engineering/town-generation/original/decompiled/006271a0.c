/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006271a0. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_006271a0(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined1 auStack_2a8 [568];
  undefined1 auStack_70 [20];
  int local_5c;
  undefined1 auStack_54 [32];
  undefined1 auStack_34 [8];
  int local_2c;
  undefined4 uStack_28;
  
  *(undefined1 *)(param_1 + 8) = 0x21;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined1 *)(param_1 + 0xb) = 0xff;
  local_2c = param_1;
  uStack_28 = param_2;
  puVar1 = (undefined1 *)FUN_0074702c(1);
  puVar6 = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    iVar11 = 0;
    puVar2 = (undefined4 *)FUN_002d16f0(auStack_70,0x100,auStack_54);
    *puVar2 = DAT_00627388;
    puVar2[5] = 0x10;
    puVar2[6] = 0x10;
    do {
      FUN_002d16c8(auStack_70);
      iVar3 = FUN_0011df34(5);
      iVar4 = FUN_0011df34(4);
      iVar3 = (iVar3 + 1) * 0x10;
      iVar4 = (iVar4 + 1) * 0x10;
      iVar8 = 0;
      do {
        iVar7 = 0;
        iVar9 = iVar8 + iVar4;
        do {
          iVar10 = iVar7 + iVar3;
          uVar5 = FUN_007e2290(puVar1,iVar10,iVar9,0);
          iVar10 = FUN_00760bc8(iVar10,iVar9,1);
          if (((-iVar10 & uVar5) == 0) || (iVar10 = FUN_00802710(uVar5), iVar10 == 0)) {
            FUN_002d1660(auStack_70,iVar8 * local_5c + iVar7);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 0x10);
        iVar8 = iVar8 + 1;
      } while (iVar8 < 0x10);
      puVar6 = (undefined1 *)FUN_007b7d30(auStack_70);
      if (-1 < (int)puVar6) {
        uVar12 = FUN_00300834(puVar6,local_5c);
        iVar11 = local_2c;
        iVar8 = FUN_005cc158();
        *(undefined1 *)(iVar11 + 8) = 0xd;
        *(undefined1 *)(iVar11 + 9) = 0;
        if (iVar8 != 0) {
          FUN_0063ac18(iVar11,iVar8);
        }
        *(undefined1 *)(iVar11 + 10) = 3;
        *(char *)(local_2c + 0xb) = (char)uStack_28;
        FUN_0079c070(auStack_2a8);
        FUN_0079b454(auStack_2a8,0x4e);
        FUN_001aec3c(auStack_34,auStack_2a8);
        FUN_005e0f70(puVar1,auStack_34,(int)((ulonglong)uVar12 >> 0x20) + iVar3,(int)uVar12 + iVar4,
                     0);
        return auStack_2a8;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 4);
  }
  return puVar6;
}


