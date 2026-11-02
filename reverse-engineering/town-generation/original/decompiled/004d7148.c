/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 004d7148. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_004d7148(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  
  if (*DAT_004d71b8 != '\0') {
    uVar1 = 0;
    do {
      piVar2 = (int *)(DAT_004d71bc + uVar1 * 0xc);
      if ((piVar2[1] == param_2 && *piVar2 == param_1) && (piVar2[2] != 7)) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 1000);
  }
  return 0;
}


