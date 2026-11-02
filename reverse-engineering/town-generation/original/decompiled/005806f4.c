/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005806f4. Provisional types; not original source or a verified portable implementation. */

void FUN_005806f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar1 = DAT_00580760;
  uVar3 = 0;
  do {
    if (uVar3 < 10) {
      param_2 = uVar3 * 5;
    }
    iVar2 = iVar1 + 0xa8;
    if (uVar3 < 10) {
      iVar2 = iVar2 + param_2 * 0x10;
    }
    if ((param_1 != 0) ||
       ((*(char *)(iVar2 + 0x24) != '\x12' &&
        (uVar4 = FUN_006291bc(), param_2 = (int)((ulonglong)uVar4 >> 0x20), (int)uVar4 != 0xb)))) {
      if (uVar3 < 10) {
        param_2 = uVar3 * 5;
      }
      iVar2 = iVar1 + 0xa8;
      if (uVar3 < 10) {
        iVar2 = iVar2 + param_2 * 0x10;
      }
      *(undefined1 *)(iVar2 + 0x24) = 0x21;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 10);
  return;
}


