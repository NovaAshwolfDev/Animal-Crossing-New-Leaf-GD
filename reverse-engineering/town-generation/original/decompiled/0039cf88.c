/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0039cf88. Provisional types; not original source or a verified portable implementation. */

void FUN_0039cf88(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  FUN_0039cc1c();
  *(undefined1 *)(param_1 + 0x1e) = 1;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  FUN_005e2810(param_1 + 0x22);
  uVar3 = 0;
  do {
    uVar2 = 0;
    do {
      FUN_00756eb0(param_1 + uVar3 * 0x28 + uVar2 * 4 + 0x62,DAT_0039d098);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 10);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 10);
  uVar3 = 0;
  do {
    uVar2 = 0;
    do {
      FUN_00756eb0(param_1 + uVar3 * 0x20 + uVar2 * 4 + 0x1f2,DAT_0039d098);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  uVar1 = FUN_00756d40(&uStack_20,DAT_0039d09c);
  FUN_00756eb0(param_1 + 0x2f2,uVar1);
  uVar1 = FUN_00756d40(&uStack_20,DAT_0039d0a0);
  FUN_00756eb0(param_1 + 0x2f6,uVar1);
  *(undefined1 *)(param_1 + 0x20) = 0;
  uVar1 = DAT_0039d098;
  *(undefined1 *)(param_1 + 0x21) = 0;
  FUN_00756eb0(param_1 + 0x2fa,uVar1);
  FUN_00756eb0(param_1 + 0x2fe,DAT_0039d098);
  return;
}


