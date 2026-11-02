/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0013b6a8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0013b6a8(short *param_1)

{
  short *psVar1;
  undefined4 uVar2;
  
  psVar1 = (short *)FUN_00152804();
  if ((((*param_1 == *psVar1) && (param_1[1] == psVar1[1])) && (param_1[2] == psVar1[2])) &&
     (param_1[3] == psVar1[3])) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


