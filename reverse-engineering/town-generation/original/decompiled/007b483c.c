/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007b483c. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007b483c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  int local_48;
  int iStack_44;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [8];
  char local_18;
  
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  FUN_007dca10(auStack_40,param_1);
  FUN_007dc9d8(auStack_30,param_1);
  iVar2 = FUN_007dc980(auStack_40,auStack_30);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    FUN_0059ace8(&local_50,auStack_38);
    iVar2 = FUN_0074702c(uVar1);
    if (((iVar2 != 0) &&
        (puVar3 = (undefined2 *)FUN_007e23e0(iVar2,local_50,uStack_4c), puVar3 != (undefined2 *)0x0)
        ) && (iVar2 = FUN_00687d78(*puVar3), iVar2 == 1)) {
      if (*(int *)(param_1 + 0x20) == 0) {
        return 1;
      }
      FUN_007dc900(&local_48,auStack_38,param_1 + 0x24);
      FUN_00692a4c(auStack_20,*(int *)(param_1 + 0x20) + iStack_44 * 0xa0 + local_48 * 10);
      if (local_18 != '\0') {
        return 1;
      }
    }
    FUN_0059b024(auStack_40);
    iVar2 = FUN_007dc980(auStack_40,auStack_30);
  } while( true );
}


