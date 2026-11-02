/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001f1c44. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_001f1c44(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_248 [568];
  
  iVar2 = 0;
  do {
    FUN_00756eb0(param_1 + iVar2 * 4 + 0x12,DAT_001f1cf8);
    iVar1 = param_1 + iVar2;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + 0x2a) = 0;
  } while (iVar2 < 6);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,0xb,0x28,0);
  FUN_001aea7c(param_1 + 0x12,4,auStack_248);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,10,0x28,0);
  FUN_001aea7c(param_1 + 0x22,2,auStack_248);
  return auStack_248;
}


