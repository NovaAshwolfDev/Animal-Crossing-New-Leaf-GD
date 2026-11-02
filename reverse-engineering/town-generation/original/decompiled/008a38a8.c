/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 008a38a8. Provisional types; not original source or a verified portable implementation. */

void FUN_008a38a8(int param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  
  pbVar1 = (byte *)(param_1 + (param_2 >> 3));
  bVar2 = (byte)(1 << (param_2 & 7));
  if (param_3 == 0) {
    if (param_2 < 0x1c) {
      bVar2 = *pbVar1 & ~bVar2;
      goto LAB_008a38ec;
    }
  }
  else if (param_2 < 0x1c) {
    bVar2 = *pbVar1 | bVar2;
LAB_008a38ec:
    *pbVar1 = bVar2;
    return;
  }
  return;
}


