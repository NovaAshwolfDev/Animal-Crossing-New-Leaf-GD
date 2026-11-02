/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0013b77c. Provisional types; not original source or a verified portable implementation. */

short * FUN_0013b77c(short *param_1)

{
  short sVar1;
  bool bVar2;
  
  if (param_1 != (short *)0x0) {
    sVar1 = *param_1;
    bVar2 = sVar1 == 0;
    if (bVar2) {
      sVar1 = param_1[1];
    }
    if (bVar2 && sVar1 == 0) {
      sVar1 = param_1[2];
      bVar2 = sVar1 == 0;
      if (bVar2) {
        sVar1 = param_1[3];
      }
      if ((bVar2 && sVar1 == 0) && (param_1[4] == 0)) {
        return (short *)0x1;
      }
    }
    param_1 = (short *)0x0;
  }
  return param_1;
}


