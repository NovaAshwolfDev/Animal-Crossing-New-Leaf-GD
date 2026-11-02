/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007b433c. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007b433c(int param_1)

{
  int iVar1;
  int iVar2;
  int local_40;
  int iStack_3c;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [8];
  char local_10;
  
  iVar1 = FUN_0074702c(*(undefined1 *)(param_1 + 0x11));
  FUN_007dca10(auStack_38,param_1);
  FUN_007dc9d8(auStack_28,param_1);
  iVar2 = FUN_007dc980(auStack_38,auStack_28);
  do {
    if (iVar2 == 0) {
      return 0;
    }
    if (((iVar1 != 0) && (iVar2 = FUN_007e2290(iVar1,local_30,uStack_2c,0), iVar2 != 0)) &&
       (iVar2 = FUN_007fe37c(), iVar2 == 10)) {
      if (*(int *)(param_1 + 0x20) == 0) {
        return 1;
      }
      FUN_007dc900(&local_40,&local_30,param_1 + 0x24);
      FUN_00692a4c(auStack_18,*(int *)(param_1 + 0x20) + iStack_3c * 0xa0 + local_40 * 10);
      if (local_10 != '\0') {
        return 1;
      }
    }
    FUN_0059b024(auStack_38);
    iVar2 = FUN_007dc980(auStack_38,auStack_28);
  } while( true );
}


