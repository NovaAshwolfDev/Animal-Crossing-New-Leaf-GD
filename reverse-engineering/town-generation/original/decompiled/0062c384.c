/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062c384. Provisional types; not original source or a verified portable implementation. */

void FUN_0062c384(undefined1 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  puVar6 = DAT_0062c594;
  for (puVar3 = param_1 + 2; DAT_0062c594 = puVar6, puVar3 < param_1 + 0xe; puVar3 = puVar3 + 6) {
    *puVar3 = 0;
    *(undefined2 *)(puVar3 + 1) = 0;
    puVar6 = DAT_0062c594;
  }
  *param_1 = 0;
  param_1[0xe] = 0;
  puVar2 = DAT_0062c59c;
  *(undefined4 *)(param_1 + 0xf) = *puVar6;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  uVar1 = DAT_0062c598;
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) & 0xffe0;
  *(short *)(param_1 + 0x18) = (short)uVar1;
  param_1[0x1a] = 0;
  uVar5 = 0;
  do {
    uVar4 = uVar5 + 1;
    puVar6 = (undefined4 *)(param_1 + uVar5 * 0x14 + 0x1cc);
    *puVar6 = *puVar2;
    puVar6[1] = puVar2[1];
    puVar6[2] = puVar2[2];
    *(undefined2 *)(puVar6 + 3) = 0;
    puVar6[4] = 0;
    uVar5 = uVar4;
  } while (uVar4 < 4);
  param_1[0x21c] = 0x98;
  *(undefined4 *)(param_1 + 0x224) = 6;
  *(undefined4 *)(param_1 + 0x220) = 6;
  FUN_005cda88(param_1 + 0x228);
  for (puVar3 = param_1 + 0x4c; puVar3 < param_1 + 0xec; puVar3 = puVar3 + 0x50) {
    FUN_00404cf0(puVar3);
  }
  FUN_00404cf0(param_1 + 0xec);
  uVar5 = 0;
  do {
    if (uVar5 < 2) {
      param_1[(uVar5 >> 3) + 0x1c8] = param_1[(uVar5 >> 3) + 0x1c8] & ~(byte)(1 << (uVar5 & 7));
    }
    uVar4 = 0;
    do {
      if (uVar5 < 2) {
        param_1[(uVar5 >> 3) + uVar4 + 0x1c4] =
             param_1[(uVar5 >> 3) + uVar4 + 0x1c4] & ~(byte)(1 << (uVar5 & 7));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  for (puVar3 = param_1 + 0x13c; puVar3 < param_1 + 0x1c4; puVar3 = puVar3 + 0x22) {
    FUN_002d5ec0(puVar3);
  }
  uVar5 = 0;
  do {
    if ((uVar5 & 0xff) < 4) {
      param_1[((uVar5 & 0xff) >> 3) + 0x1c9] =
           param_1[((uVar5 & 0xff) >> 3) + 0x1c9] & ~(byte)(1 << (uVar5 & 7));
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  uVar5 = 0;
  do {
    uVar4 = 0;
    do {
      FUN_00756eb0(param_1 + uVar5 * 4 + uVar4 * 0x10 + 0x1c,DAT_0062c594);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 2);
    FUN_00756eb0(param_1 + uVar5 * 4 + 0x3c,DAT_0062c594);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  *(undefined4 *)(param_1 + 0x234) = 0;
  param_1[0x238] = 0;
  return;
}


