/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00804038. Provisional types; not original source or a verified portable implementation. */

int FUN_00804038(int param_1,short *param_2,uint param_3)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  
  iVar1 = FUN_007f3734(param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_007eb480();
    if (iVar1 != 0) {
      uVar3 = 0;
      do {
        if (((((param_3 == 2 || param_3 == uVar3) &&
              (psVar2 = (short *)FUN_007ec4f4(param_1 + 0x8a48,uVar3 & 0xff),
              psVar2[0x16] == param_2[0x16])) && (*psVar2 == *param_2)) &&
            (((char)psVar2[10] == (char)param_2[10] &&
             (iVar1 = FUN_001011c4(psVar2 + 1,param_2 + 1,0x12), iVar1 == 0)))) &&
           ((psVar2[0xb] == param_2[0xb] &&
            (((char)psVar2[0x15] == (char)param_2[0x15] &&
             (iVar1 = FUN_001011c4(psVar2 + 0xc,param_2 + 0xc,0x12), iVar1 == 0)))))) {
          return 1;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < 2);
    }
    iVar1 = 0;
  }
  return iVar1;
}


