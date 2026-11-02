/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007c0020. Provisional types; not original source or a verified portable implementation. */

uint FUN_007c0020(byte *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  pbVar2 = param_1;
  if (param_3 < 0x60) {
    pbVar2 = param_1 + param_3 * 0x70;
  }
  if (param_2 < 0x70) {
    pbVar2 = pbVar2 + param_2;
  }
  if (*pbVar2 == 0xff) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_3 < 0x60) {
      param_1 = param_1 + param_3 * 0x70;
    }
    if (param_2 < 0x70) {
      param_1 = param_1 + param_2;
    }
    uVar1 = (uint)*param_1;
  }
  return uVar1;
}


