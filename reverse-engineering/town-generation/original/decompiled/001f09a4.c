/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001f09a4. Provisional types; not original source or a verified portable implementation. */

void FUN_001f09a4(int param_1,int param_2,int param_3)

{
  param_1 = param_1 + param_2 * 0x280;
  FUN_0011b214(param_1,param_3,0x31);
  FUN_0011b214(param_1 + 0x34,param_3 + 0x34,0x31);
  FUN_0011b214(param_1 + 0x68,param_3 + 0x68,0x42);
  FUN_002febf4(param_1 + 0xaa,param_3 + 0xaa,DAT_001f0a48);
  FUN_0011b214(param_1 + 0x22c,param_3 + 0x22c,0x42);
  *(undefined1 *)(param_1 + 0x26e) = *(undefined1 *)(param_3 + 0x26e);
  *(undefined1 *)(param_1 + 0x26f) = *(undefined1 *)(param_3 + 0x26f);
  *(undefined1 *)(param_1 + 0x270) = *(undefined1 *)(param_3 + 0x270);
  *(undefined1 *)(param_1 + 0x271) = *(undefined1 *)(param_3 + 0x271);
  *(undefined1 *)(param_1 + 0x272) = *(undefined1 *)(param_3 + 0x272);
  FUN_00756eb0(param_1 + 0x274,param_3 + 0x274);
  FUN_007572e0(param_1 + 0x278,param_3 + 0x278);
  return;
}


