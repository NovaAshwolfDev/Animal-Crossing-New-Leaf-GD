/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00598ebc. Provisional types; not original source or a verified portable implementation. */

void FUN_00598ebc(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  FUN_0063e294(1);
  iVar2 = FUN_00636e3c();
  uVar6 = 0;
  do {
    iVar3 = FUN_002d57dc(iVar2 + 0x20,uVar6 & 0xff);
    if ((iVar3 != 0) && (iVar4 = FUN_007aae1c(iVar3 + 0x55a6), iVar4 != 0)) {
      FUN_005e2a84(iVar3 + 0x5498);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  FUN_005f7a50();
  puVar1 = DAT_00598f98;
  *DAT_00598f98 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  uVar6 = 0;
  puVar1[3] = 0;
  do {
    puVar5 = puVar1 + uVar6 * 2 + 4;
    uVar6 = uVar6 + 1;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    iVar2 = DAT_00598f9c;
  } while (uVar6 < 6);
  uVar6 = 0;
  do {
    *(undefined1 *)(uVar6 * 7 + iVar2 + 6) = 0;
    FUN_0080c070();
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  *DAT_00598fa0 = 0;
  return;
}


