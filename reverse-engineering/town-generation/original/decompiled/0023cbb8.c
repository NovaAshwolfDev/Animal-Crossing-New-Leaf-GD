/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0023cbb8. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_0023cbb8(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_250 [572];
  
  iVar3 = 0;
  do {
    FUN_00756eb0(param_1 + iVar3 * 4,DAT_0023cd8c);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  uVar4 = 0;
  bVar2 = false;
  iVar3 = FUN_0011df38(100);
  if (iVar3 < 10) {
    FUN_0079c070(auStack_250);
    iVar3 = FUN_0011df38(100);
    bVar1 = 0x18 < iVar3;
    if (bVar1) {
      FUN_0079aee4(auStack_250,0x5d);
      FUN_001aea7c(param_1 + 4,1,auStack_250);
    }
    else {
      FUN_0079aee4(auStack_250,0x60);
      FUN_001aea7c(param_1,1,auStack_250);
    }
    bVar2 = !bVar1;
    uVar4 = (uint)bVar1;
  }
  if ((param_2 != 0) && (iVar3 = FUN_0011df38(100), iVar3 < 0x14)) {
    FUN_0079c070(auStack_250);
    if ((!bVar2) && (iVar3 = FUN_0011df38(100), iVar3 < 0x19)) {
      FUN_0079aee4(auStack_250,0x62);
      FUN_001aea7c(param_1,1,auStack_250);
      goto LAB_0023cd50;
    }
    FUN_0079aee4(auStack_250,0x5f);
    FUN_001aea7c(param_1 + uVar4 * 4 + 4,1,auStack_250);
    uVar4 = uVar4 + 1;
  }
  if (!bVar2) {
    FUN_0079c070(auStack_250);
    FUN_0079aee4(auStack_250,0x61);
    FUN_001aea7c(param_1,1,auStack_250);
  }
LAB_0023cd50:
  FUN_0079c070(auStack_250);
  FUN_0079aee4(auStack_250,0x5e);
  FUN_001aea7c(param_1 + uVar4 * 4 + 4,3 - uVar4,auStack_250);
  return auStack_250;
}


