/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00631618. Provisional types; not original source or a verified portable implementation. */

void FUN_00631618(void)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar1 = FUN_006a9af0();
  uVar3 = *(undefined1 *)((uVar1 & 3) + DAT_00631674 + 0x27c40);
  iVar2 = FUN_002d5e84(uVar3);
  if (iVar2 == 0) {
    uVar3 = 8;
  }
  iVar2 = FUN_002d5e74(uVar3);
  if (iVar2 != 0) {
    iVar2 = FUN_00636e3c();
    FUN_003c8434(iVar2 + 0x57e80,uVar3);
    return;
  }
  return;
}


