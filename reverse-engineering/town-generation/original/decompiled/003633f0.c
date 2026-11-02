/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003633f0. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_003633f0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = FUN_007ecc40(param_1 + uVar2 * 0x280);
    if (iVar1 != 0) {
      if (uVar2 == 0xffffffff) {
        return 0;
      }
      param_1 = param_1 + uVar2 * 0x280;
      FUN_0011b214(param_1,param_2,0x31);
      FUN_0011b214(param_1 + 0x34,param_2 + 0x34,0x31);
      FUN_0011b214(param_1 + 0x68,param_2 + 0x68,0x42);
      FUN_002febf4(param_1 + 0xaa,param_2 + 0xaa,DAT_003634d4);
      FUN_0011b214(param_1 + 0x22c,param_2 + 0x22c,0x42);
      *(undefined1 *)(param_1 + 0x26e) = *(undefined1 *)(param_2 + 0x26e);
      *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_2 + 0x26f);
      *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_2 + 0x270);
      *(undefined1 *)(param_1 + 0x271) = *(undefined1 *)(param_2 + 0x271);
      *(undefined1 *)(param_1 + 0x272) = *(undefined1 *)(param_2 + 0x272);
      FUN_00756eb0(param_1 + 0x274,param_2 + 0x274);
      FUN_007572e0(param_1 + 0x278,param_2 + 0x278);
      return 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  return 0;
}


