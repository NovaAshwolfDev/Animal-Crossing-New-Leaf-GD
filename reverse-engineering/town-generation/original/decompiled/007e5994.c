/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e5994. Provisional types; not original source or a verified portable implementation. */

uint FUN_007e5994(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_007f3734(param_2);
  if (((iVar1 != 0) && (*(byte *)(DAT_007e5a5c + param_1) < 4)) &&
     (uVar2 = FUN_00623f24(param_2,param_1,10), uVar2 < 10)) {
    uVar5 = 0;
    iVar1 = param_1 + DAT_007e5a60;
    do {
      if ((((uVar5 & 0xff) < 3) && (iVar3 = FUN_007eb480(iVar1), iVar3 != 0)) &&
         (*(char *)(iVar1 + 8) == '\x12')) {
        uVar4 = FUN_007eb77c(param_1 + 0x172b0,uVar5 & 0xff);
      }
      else {
        uVar4 = 0xffffffff;
      }
      if (uVar2 == uVar4) {
        return uVar5 & 0xff;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 3);
  }
  return 3;
}


