/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011df34. Provisional types; not original source or a verified portable implementation. */

int FUN_0011df34(undefined4 param_1)

{
  uint in_fpscr;
  float in_s0;
  float fVar1;
  
  FUN_001218f0(DAT_0011df60);
  fVar1 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
  return (int)(in_s0 * fVar1);
}


