/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005e225c. Provisional types; not original source or a verified portable implementation. */

void FUN_005e225c(void)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *in_r3;
  uint uVar7;
  
  uVar3 = DAT_005e244c;
  uVar7 = 0;
  do {
    uVar1 = (undefined2)uVar3;
    if (uVar7 < 10) {
      puVar4 = (undefined2 *)FUN_005e2480(uVar7 + 0x1b & 0xff);
      if (puVar4 != (undefined2 *)0x0) {
        in_r3 = puVar4 + 0x20;
      }
      if (puVar4 != (undefined2 *)0x0 && puVar4 < in_r3) {
        do {
          for (puVar6 = puVar4; puVar6 < puVar4 + 0x10; puVar6 = puVar6 + 1) {
            *puVar6 = uVar1;
          }
          puVar4 = puVar4 + 0x10;
        } while (puVar4 < in_r3);
      }
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 10);
  puVar6 = DAT_005e2450 + 0x20;
  iVar2 = DAT_005e2454;
  for (puVar4 = DAT_005e2450; DAT_005e2454 = iVar2, puVar4 < puVar6; puVar4 = puVar4 + 0x10) {
    for (puVar5 = puVar4; puVar5 < puVar4 + 0x10; puVar5 = puVar5 + 1) {
      *puVar5 = uVar1;
    }
    iVar2 = DAT_005e2454;
  }
  uVar7 = 0;
  do {
    puVar4 = (undefined2 *)(iVar2 + uVar7 * 0x40);
    puVar6 = puVar4 + 0x20;
    for (; puVar4 < puVar6; puVar4 = puVar4 + 0x10) {
      for (puVar5 = puVar4; puVar5 < puVar4 + 0x10; puVar5 = puVar5 + 1) {
        *puVar5 = uVar1;
      }
    }
    do {
      uVar7 = uVar7 + 1;
      if (5 < uVar7) {
        puVar6 = DAT_005e2458 + 0x20;
        for (puVar4 = DAT_005e2458; puVar4 < puVar6; puVar4 = puVar4 + 0x10) {
          for (puVar5 = puVar4; puVar5 < puVar4 + 0x10; puVar5 = puVar5 + 1) {
            *puVar5 = uVar1;
          }
        }
        puVar6 = DAT_005e245c + 0x20;
        iVar2 = DAT_005e2460;
        for (puVar4 = DAT_005e245c; DAT_005e2460 = iVar2, puVar4 < puVar6; puVar4 = puVar4 + 0x10) {
          for (puVar5 = puVar4; puVar5 < puVar4 + 0x10; puVar5 = puVar5 + 1) {
            *puVar5 = uVar1;
          }
          iVar2 = DAT_005e2460;
        }
        uVar7 = 0;
        do {
          puVar4 = (undefined2 *)(iVar2 + uVar7 * 0x40);
          puVar6 = puVar4 + 0x20;
          for (; puVar4 < puVar6; puVar4 = puVar4 + 0x10) {
            for (puVar5 = puVar4; puVar5 < puVar4 + 0x10; puVar5 = puVar5 + 1) {
              *puVar5 = uVar1;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < 6);
        FUN_005e2638();
        puVar6 = DAT_005e2464 + 0x20;
        for (puVar4 = DAT_005e2464; puVar4 < puVar6; puVar4 = puVar4 + 0x10) {
          for (puVar5 = puVar4; puVar5 < puVar4 + 0x10; puVar5 = puVar5 + 1) {
            *puVar5 = uVar1;
          }
        }
        return;
      }
    } while (5 < uVar7);
  } while( true );
}


