/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005e2638. Provisional types; not original source or a verified portable implementation. */

void FUN_005e2638(void)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  puVar4 = DAT_005e2790 + 0x20;
  uVar1 = (undefined2)DAT_005e2794;
  puVar3 = DAT_005e2790;
  if (DAT_005e2790 < puVar4) {
    do {
      for (puVar2 = puVar3; puVar2 < puVar3 + 0x10; puVar2 = puVar2 + 1) {
        *puVar2 = uVar1;
      }
      puVar3 = puVar3 + 0x10;
    } while (puVar3 < puVar4);
  }
  puVar4 = DAT_005e2798 + 0x20;
  for (puVar3 = DAT_005e2798; puVar3 < puVar4; puVar3 = puVar3 + 0x10) {
    for (puVar2 = puVar3; puVar2 < puVar3 + 0x10; puVar2 = puVar2 + 1) {
      *puVar2 = uVar1;
    }
  }
  puVar4 = DAT_005e279c + 0x20;
  for (puVar3 = DAT_005e279c; puVar3 < puVar4; puVar3 = puVar3 + 0x10) {
    for (puVar2 = puVar3; puVar2 < puVar3 + 0x10; puVar2 = puVar2 + 1) {
      *puVar2 = uVar1;
    }
  }
  puVar4 = DAT_005e27a0 + 0x20;
  for (puVar3 = DAT_005e27a0; puVar3 < puVar4; puVar3 = puVar3 + 0x10) {
    for (puVar2 = puVar3; puVar2 < puVar3 + 0x10; puVar2 = puVar2 + 1) {
      *puVar2 = uVar1;
    }
  }
  puVar4 = DAT_005e27a4 + 0x20;
  for (puVar3 = DAT_005e27a4; puVar3 < puVar4; puVar3 = puVar3 + 0x10) {
    for (puVar2 = puVar3; puVar2 < puVar3 + 0x10; puVar2 = puVar2 + 1) {
      *puVar2 = uVar1;
    }
  }
  puVar4 = DAT_005e27a8 + 0x20;
  for (puVar3 = DAT_005e27a8; puVar3 < puVar4; puVar3 = puVar3 + 0x10) {
    for (puVar2 = puVar3; puVar2 < puVar3 + 0x10; puVar2 = puVar2 + 1) {
      *puVar2 = uVar1;
    }
  }
  return;
}


