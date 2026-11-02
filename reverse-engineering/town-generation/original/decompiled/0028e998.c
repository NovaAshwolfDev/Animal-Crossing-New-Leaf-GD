/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0028e998. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0028e998(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  int local_50;
  int iStack_4c;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [8];
  uint local_30;
  undefined4 local_28;
  undefined4 local_24;
  uint uStack_20;
  
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  iVar2 = FUN_00285804();
  FUN_007dca10(auStack_68,param_1);
  FUN_007dc9d8(auStack_48,param_1);
  iVar3 = FUN_007dc980(auStack_68,auStack_48);
  do {
    if (iVar3 == 0) {
      return 0;
    }
    if ((((iVar2 != 0) && (iVar3 = FUN_007bfff8(iVar2,local_60,local_5c), iVar3 != 0)) &&
        (FUN_00285474(auStack_38,local_60,local_5c,uVar1), (local_30 & 0xff) < 0xf8)) &&
       (iVar3 = FUN_00769904(), iVar3 != 0)) {
      if (*(int *)(param_1 + 0x20) == 0) {
        return 1;
      }
      FUN_007dc900(&local_50,&local_60,param_1 + 0x24);
      FUN_00692a4c(auStack_38,iStack_4c * 0xa0 + local_50 * 10 + *(int *)(param_1 + 0x20));
      if ((char)local_30 != '\0') {
        FUN_00285474(&local_28,local_60,local_5c,*(undefined1 *)(param_1 + 0x10));
        if (0xf7 < (uStack_20 & 0xff)) {
          return 1;
        }
        *(char *)(param_1 + 0x12) = (char)uStack_20;
        *(undefined4 *)(param_1 + 0x14) = local_28;
        *(undefined4 *)(param_1 + 0x18) = local_24;
        return 1;
      }
    }
    FUN_0059b024(auStack_68);
    iVar3 = FUN_007dc980(auStack_68,auStack_48);
  } while( true );
}


