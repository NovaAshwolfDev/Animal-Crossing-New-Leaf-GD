/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061bdcc. Provisional types; not original source or a verified portable implementation. */

void FUN_0061bdcc(int param_1)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  do {
    FUN_00620b00(param_1 + iVar6 * DAT_0061bf20 * 8);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 10);
  *(undefined4 *)(param_1 + 0x171b0) = 0;
  *(undefined4 *)(param_1 + 0x171b4) = 0;
  FUN_00627ba8(param_1 + 0x171b8);
  FUN_00628810(param_1 + 0x17264);
  FUN_00628810(DAT_0061bf24 + param_1);
  FUN_00626ef4(param_1 + 0x172b0);
  FUN_006264e0(param_1 + 0x1730c);
  FUN_00627138(DAT_0061bf28 + param_1);
  uVar2 = DAT_0061bf30;
  iVar6 = 8;
  puVar3 = (undefined2 *)(DAT_0061bf2c + param_1 + -2);
  do {
    iVar6 = iVar6 + -1;
    puVar3[1] = (short)uVar2;
    puVar3 = puVar3 + 2;
    *puVar3 = (short)uVar2;
  } while (iVar6 != 0);
  iVar6 = param_1 + DAT_0061bf34;
  FUN_0069805c(iVar6);
  uVar7 = 0;
  do {
    FUN_00622390(iVar6 + uVar7 * 0xf0 + 0x30);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x10);
  FUN_002d5734(iVar6 + 0xf46);
  iVar6 = DAT_0061bf38;
  *(undefined2 *)(param_1 + 0x1849e) = 0x7ffe;
  *(undefined1 *)(iVar6 + param_1) = 0xff;
  FUN_002fff30(param_1 + 0x184a0,0x2a);
  uVar7 = DAT_0061bf3c;
  iVar6 = DAT_0061bf3c + 3;
  uVar4 = DAT_0061bf3c | (int)DAT_0061bf3c >> 0xf;
  *(undefined1 *)(DAT_0061bf3c + param_1) = 0;
  *(undefined1 *)(uVar4 + param_1) = 0xff;
  *(undefined1 *)(iVar6 + param_1) = 0xff;
  uVar2 = DAT_0061bf40;
  *(undefined1 *)(uVar7 + 2 + param_1) = 0xff;
  uVar5 = uVar4 - 0x33;
  *(undefined1 *)((uVar7 | (int)uVar7 >> 0xd) + param_1) = 0;
  uVar1 = (undefined2)uVar2;
  *(undefined2 *)(param_1 + 0x18496) = uVar1;
  *(undefined2 *)(uVar5 + param_1) = uVar1;
  *(undefined2 *)((uVar4 - 0x31) + param_1) = uVar1;
  *(undefined2 *)((uVar5 | (int)uVar5 >> 0xd) + param_1) = uVar1;
  return;
}


