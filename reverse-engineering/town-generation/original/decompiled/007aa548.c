/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007aa548. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007aa548(byte *param_1,int param_2)

{
  uint uVar1;
  
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
    uVar1 = 0;
  }
  return *(undefined4 *)(DAT_007aa57c + (uVar1 >> 6) * 4);
}


