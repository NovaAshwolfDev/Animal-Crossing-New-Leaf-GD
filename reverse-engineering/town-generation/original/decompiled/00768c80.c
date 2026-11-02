/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00768c80. Provisional types; not original source or a verified portable implementation. */

undefined1 FUN_00768c80(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [16];
  char local_38;
  undefined1 auStack_30 [24];
  
  uVar3 = FUN_00285cac(0);
  iVar2 = DAT_00768d54;
  uVar5 = 0;
  do {
    cVar1 = *(char *)(iVar2 + uVar5);
    FUN_007acd50(auStack_30,uVar3);
    FUN_007acdd0(auStack_48,uVar3);
    iVar4 = FUN_007acd1c(auStack_48,auStack_30);
    while (iVar4 != 0) {
      if (cVar1 == local_38) {
        return *(undefined1 *)(iVar2 + uVar5);
      }
      FUN_001cbd60(auStack_48);
      iVar4 = FUN_007acd1c(auStack_48,auStack_30);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  return 0xf8;
}


