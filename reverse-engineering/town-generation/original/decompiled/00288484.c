/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00288484. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_00288484(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [16];
  undefined1 local_38;
  undefined1 auStack_30 [24];
  undefined1 local_18 [12];
  
  uVar2 = *DAT_0028854c;
  FUN_007acd50(auStack_30,uVar2);
  FUN_007acdd0(auStack_48,uVar2);
  iVar1 = FUN_007acd1c(auStack_48,auStack_30);
  while (iVar1 != 0) {
    FUN_00592534(local_18,local_38,0x1e,0);
    FUN_001cbd60(auStack_48);
    iVar1 = FUN_007acd1c(auStack_48,auStack_30);
  }
  return auStack_30;
}


