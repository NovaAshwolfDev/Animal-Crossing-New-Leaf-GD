/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003324cc. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_003324cc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_250 [568];
  
  iVar5 = 0;
  do {
    FUN_00756eb0(param_1 + iVar5 * 4 + 0x12,DAT_0033272c);
    iVar1 = param_1 + iVar5;
    iVar5 = iVar5 + 1;
    *(undefined1 *)(iVar1 + 0x3e) = 0;
  } while (iVar5 < 0xb);
  FUN_0079c070(auStack_250);
  FUN_0079822c(auStack_250,5,0x1c,0);
  FUN_001aea7c(param_1 + 0x12,*(undefined1 *)(DAT_00332730 + (uint)*(byte *)(param_1 + 0x10)),
               auStack_250);
  FUN_0079c070(auStack_250);
  FUN_0079aee4(auStack_250,0x2c);
  FUN_001aea7c(param_1 + 0x16,*(undefined1 *)(DAT_00332734 + (uint)*(byte *)(param_1 + 0x10)),
               auStack_250);
  FUN_0079c070(auStack_250);
  FUN_0079b454(auStack_250,0x37);
  FUN_001aea7c(param_1 + 0x1e,*(undefined1 *)(DAT_00332738 + (uint)*(byte *)(param_1 + 0x10)),
               auStack_250);
  iVar1 = DAT_00332740;
  iVar5 = DAT_0033273c;
  uVar6 = 0;
  if (*(char *)(DAT_0033273c + (uint)*(byte *)(param_1 + 0x10)) != '\0') {
    iVar7 = DAT_00332740 + 2;
    do {
      iVar2 = FUN_0011df38(2);
      if (iVar2 == 0) {
        uVar3 = FUN_00756d40(auStack_250,iVar1);
        FUN_00756eb0(param_1 + uVar6 * 4 + 0x26,uVar3);
      }
      else {
        uVar3 = FUN_00756d40(auStack_250,iVar7);
        FUN_00756eb0(param_1 + uVar6 * 4 + 0x26,uVar3);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(iVar5 + (uint)*(byte *)(param_1 + 0x10)));
  }
  FUN_0079c070(auStack_250);
  FUN_0079822c(auStack_250,0x38,0xad,0);
  FUN_001aea7c(param_1 + 0x2a,*(undefined1 *)(DAT_00332744 + (uint)*(byte *)(param_1 + 0x10)),
               auStack_250);
  FUN_0079c070(auStack_250);
  FUN_0079822c(auStack_250,0x36,0x29,0);
  FUN_001aea7c(param_1 + 0x32,*(undefined1 *)(DAT_00332748 + (uint)*(byte *)(param_1 + 0x10)),
               auStack_250);
  puVar4 = (undefined1 *)(uint)*(byte *)(DAT_0033274c + (uint)*(byte *)(param_1 + 0x10));
  if (puVar4 != (undefined1 *)0x0) {
    uVar3 = FUN_00756d40(auStack_250,DAT_00332750);
    FUN_00756eb0(param_1 + 0x3a,uVar3);
    puVar4 = auStack_250;
  }
  return puVar4;
}


