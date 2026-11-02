/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00620b00. Provisional types; not original source or a verified portable implementation. */

void FUN_00620b00(int param_1)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  FUN_0069805c();
  FUN_001b8448(param_1 + 0x30);
  FUN_007570b8(param_1 + 0x8a0);
  FUN_0075719c(param_1 + 0x8b6);
  FUN_0063aca4(param_1 + 0x8be);
  iVar5 = param_1 + 0x8c6;
  iVar3 = 0;
  do {
    FUN_00756eb0(iVar5,DAT_00620cbc);
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar3 < 4);
  iVar5 = param_1 + 0x8d6;
  iVar3 = 0;
  do {
    FUN_00756eb0(iVar5,DAT_00620cbc);
    iVar3 = iVar3 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar3 < 4);
  FUN_00756eb0(param_1 + 0x8e6,DAT_00620cbc);
  FUN_00756eb0(param_1 + 0x8ea,DAT_00620cbc);
  uVar4 = 0;
  do {
    FUN_00622390(param_1 + uVar4 * 0xf0 + 0x8ee);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x10);
  iVar3 = 0;
  do {
    FUN_00638dbc(param_1 + iVar3 * 0x280 + 0x17f0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_00638dbc(param_1 + 0x21f0);
  uVar1 = (undefined2)DAT_00620cc0;
  *(undefined2 *)(param_1 + 0x2470) = uVar1;
  FUN_00638dbc(param_1 + 0x21f0);
  uVar4 = 0;
  do {
    FUN_00638dbc(param_1 + uVar4 * 0x280 + 0x17f0);
    uVar2 = uVar4 & 0xff;
    uVar4 = uVar4 + 1;
    *(undefined2 *)(param_1 + uVar2 * 2 + 0x2472) = uVar1;
    iVar3 = DAT_00620cc8;
  } while ((int)uVar4 < 4);
  *(undefined1 *)(DAT_00620cc4 + param_1) = 5;
  *(undefined2 *)(param_1 + 0x24ea) = 0;
  *(undefined1 *)(param_1 + 0x24ec) = 0;
  *(undefined1 *)(param_1 + 0x24ed) = 0;
  *(undefined1 *)(iVar3 + param_1) = 2;
  *(undefined1 *)(iVar3 + 1 + param_1) = 0x18;
  *(undefined2 *)(param_1 + 0x24f0) = 0;
  *(undefined1 *)(param_1 + 0x24f2) = 0xff;
  *(undefined1 *)(param_1 + 0x24f3) = 0xff;
  *(undefined1 *)(param_1 + 0x24f4) = 0xff;
  *(undefined1 *)(param_1 + 0x24f5) = 0;
  return;
}


