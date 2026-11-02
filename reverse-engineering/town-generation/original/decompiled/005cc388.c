/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cc388. Provisional types; not original source or a verified portable implementation. */

byte FUN_005cc388(uint param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  bVar1 = 0;
  pbVar2 = DAT_005cc3e0;
  while( true ) {
    if ((int)param_1 < (int)(uint)*pbVar2) {
      return bVar1;
    }
    if ((*pbVar2 == param_1) && (param_2 <= (int)(uint)pbVar2[1])) break;
    bVar1 = bVar1 + 1;
    pbVar2 = pbVar2 + 2;
    if (0xb < bVar1) {
      return 0;
    }
  }
  return bVar1;
}


