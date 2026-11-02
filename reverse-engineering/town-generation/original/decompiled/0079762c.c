/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079762c. Provisional types; not original source or a verified portable implementation. */

void FUN_0079762c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    uVar3 = 0;
    do {
      uVar1 = DAT_00797684;
      iVar2 = FUN_005dc594(uVar3,uVar4);
      if (iVar2 != 0) {
        FUN_00756eb0(param_1 + uVar4 * 0x40 + uVar3 * 4,uVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0x10);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  return;
}


