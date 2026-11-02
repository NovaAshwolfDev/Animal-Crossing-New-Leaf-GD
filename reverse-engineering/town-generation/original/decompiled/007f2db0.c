/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007f2db0. Provisional types; not original source or a verified portable implementation. */

uint FUN_007f2db0(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[2] != 0) {
    iVar1 = FUN_0011df34();
    uVar2 = 0;
    if (0 < *param_1) {
      do {
        if ((param_1[1] & 1 << (uVar2 & 0xff)) != 0) {
          if (iVar1 == 0) {
            return uVar2;
          }
          iVar1 = iVar1 + -1;
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < *param_1);
    }
  }
  return 0xffffffff;
}


