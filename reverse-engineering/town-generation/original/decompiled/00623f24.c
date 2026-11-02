/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00623f24. Provisional types; not original source or a verified portable implementation. */

uint FUN_00623f24(short *param_1,short *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_007f3734();
  if ((iVar1 != 0) && (uVar2 = 0, param_3 != 0)) {
    do {
      if (((param_1[0x16] == param_2[0x16]) &&
          (((*param_1 == *param_2 && ((char)param_1[10] == (char)param_2[10])) &&
           (iVar1 = FUN_001011c4(param_1 + 1,param_2 + 1,0x12), iVar1 == 0)))) &&
         (((param_1[0xb] == param_2[0xb] && ((char)param_1[0x15] == (char)param_2[0x15])) &&
          (iVar1 = FUN_001011c4(param_1 + 0xc,param_2 + 0xc,0x12), iVar1 == 0)))) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      param_2 = param_2 + 0x127c;
    } while (uVar2 < param_3);
  }
  return 0xffffffff;
}


