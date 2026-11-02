/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007aae48. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007aae48(short *param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*param_1 == *param_2) &&
       ((char)((char)param_1[10] * -0x80) == (char)((char)param_2[10] * -0x80))) &&
      (iVar1 = FUN_007b19c8(param_1 + 1,param_2 + 1), iVar1 != 0)) &&
     (((param_1[0xb] == param_2[0xb] && ((char)param_1[0x15] == (char)param_2[0x15])) &&
      (iVar1 = FUN_001011c4(param_1 + 0xc,param_2 + 0xc,0x12), iVar1 == 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


