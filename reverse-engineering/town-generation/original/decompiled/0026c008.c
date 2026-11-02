/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0026c008. Provisional types; not original source or a verified portable implementation. */

void FUN_0026c008(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = DAT_0026c048;
  uVar2 = 0;
  iVar4 = DAT_0026c048 + -0x18;
  do {
    uVar3 = uVar2;
    if (1 < uVar2) {
      uVar3 = 0;
    }
    *(undefined1 *)(iVar1 + uVar3 * 0x14 + 0x10) = 0;
    if (uVar2 < 6) {
      *(undefined4 *)(iVar4 + uVar2 * 4) = 0;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  return;
}


