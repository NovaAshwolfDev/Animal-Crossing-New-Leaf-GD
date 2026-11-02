/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0023bed8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0023bed8(int param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (((-1 < (int)((uint)*(byte *)(param_1 + 0x56f8) << 0x1b)) || (param_2 < 1)) ||
     ((int)((uint)*(byte *)(param_1 + 0x5706) << 0x1c) < 0)) {
    return 0;
  }
  uVar1 = param_2 + (uint)(*(byte *)(param_1 + 0x5712) >> 1) +
                    (*(byte *)(param_1 + 0x5713) & 7) * 0x80;
  if (*(char *)(param_1 + 0x5711) < '\0') {
    if (param_3 != 0) {
      uVar1 = uVar1 + 2;
    }
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if (0x32 < uVar1) {
      uVar1 = 0x32;
      goto LAB_0023bf38;
    }
  }
  if (100 < uVar1) {
    uVar1 = 100;
  }
LAB_0023bf38:
  *(byte *)(param_1 + 0x5712) = *(byte *)(param_1 + 0x5712) & 1 | (byte)(uVar1 << 1);
  *(byte *)(param_1 + 0x5713) = *(byte *)(param_1 + 0x5713) & 0xf8 | (byte)((uVar1 & 0x380) >> 7);
  return 1;
}


