/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0023d174. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_0023d174(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_248 [568];
  
  iVar2 = 0;
  do {
    FUN_00756eb0(param_1 + iVar2 * 4,DAT_0023d28c);
    iVar1 = param_1 + iVar2;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + 0x3c) = 0;
  } while (iVar2 < 5);
  uVar3 = 4;
  iVar2 = FUN_005cdb78();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else if (iVar2 == 1) {
    uVar3 = 1;
  }
  else if (iVar2 == 2) {
    uVar3 = 2;
  }
  else if (iVar2 == 3) {
    uVar3 = 3;
  }
  FUN_0079c070(auStack_248);
  FUN_0079b454(auStack_248,6);
  FUN_0079b454(auStack_248,7);
  FUN_0079b55c(auStack_248,10);
  FUN_0079bdc8(auStack_248,uVar3,1);
  FUN_001aea7c(param_1,3,auStack_248);
  FUN_0079c070(auStack_248);
  FUN_0079b454(auStack_248,9);
  FUN_0079b55c(auStack_248,10);
  FUN_0079bdc8(auStack_248,uVar3,1);
  FUN_001aea7c(param_1 + 0xc,2,auStack_248);
  return auStack_248;
}


