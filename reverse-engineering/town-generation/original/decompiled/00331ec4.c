/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00331ec4. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_00331ec4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_248 [568];
  
  iVar2 = 0;
  do {
    FUN_00756eb0(param_1 + iVar2 * 4,DAT_00331fb0);
    iVar1 = param_1 + iVar2;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  } while (iVar2 < 7);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,0xc,0x2d,0);
  FUN_001aea7c(param_1,3,auStack_248);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,0xd,0x2d,0);
  FUN_001aea7c(param_1 + 0xc,3,auStack_248);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,0x19,0x2d,0);
  FUN_001aea7c(param_1 + 0x18,1,auStack_248);
  return auStack_248;
}


