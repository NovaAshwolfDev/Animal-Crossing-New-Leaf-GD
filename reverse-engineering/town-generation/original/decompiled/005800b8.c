/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005800b8. Provisional types; not original source or a verified portable implementation. */

void FUN_005800b8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = DAT_005801a4;
  uVar3 = 0;
  do {
    iVar2 = iVar1;
    if (uVar3 < 4) {
      iVar2 = iVar1 + uVar3 * 0x2a;
    }
    FUN_00128418(iVar2,0x2a);
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 4);
  iVar5 = iVar1 + 0xa8;
  iVar2 = 0;
  do {
    FUN_005819d4(iVar5);
    iVar2 = iVar2 + 1;
    iVar5 = iVar5 + 0x50;
  } while (iVar2 < 10);
  FUN_005819d4(iVar1 + 0x3c8);
  uVar3 = 0;
  do {
    iVar2 = iVar1 + 0x6d8;
    if (uVar3 < 0x30) {
      iVar2 = iVar1 + 0x6d8 + uVar3 * 4;
    }
    FUN_00756eb0(iVar2,DAT_005801a8);
    uVar4 = uVar3 + 1;
    iVar2 = uVar3 - 0x2f;
    uVar3 = uVar4;
  } while (-1 < (int)uVar4 && (uint)(0x2f < uVar4) <= (uint)((int)uVar4 >> 0x1f));
  *(undefined4 *)(iVar1 + 0x7cc) = 0;
  FUN_005cda88(iVar1 + 0x7c0,iVar2);
  *(undefined4 *)(iVar1 + 2000) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x7d4) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x7d8) = 0xffffffff;
  FUN_0063aca4(iVar1 + 0x7dc);
  *(undefined1 *)(iVar1 + 0x7e4) = 0;
  FUN_00581cf4(iVar1,1);
  *(undefined1 *)(iVar1 + 0x7e7) = 0;
  *(undefined1 *)(iVar1 + 0x7e8) = 0;
  return;
}


