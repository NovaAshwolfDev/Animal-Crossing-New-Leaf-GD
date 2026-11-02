/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007aa388. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007aa388(byte *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_2 == 3) {
    uVar1 = (uint)*param_1;
  }
  else if (param_2 == 4) {
    uVar1 = (uint)param_1[1];
  }
  else if (param_2 == 5) {
    uVar1 = (uint)param_1[2];
  }
  else {
    uVar1 = 0x1b;
  }
  if ((uVar1 & 3) == 2) {
    uVar2 = 0x17;
  }
  else if ((uVar1 >> 2 & 3) == 2) {
    uVar2 = 0x16;
  }
  else if ((uVar1 >> 4 & 3) == 2) {
    uVar2 = 0x15;
  }
  else if (((uVar1 >> 4) << 0x1c) >> 0x1e == 2) {
    uVar2 = 0x14;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


