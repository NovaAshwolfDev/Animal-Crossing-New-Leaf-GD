/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00155a2c. Provisional types; not original source or a verified portable implementation. */

uint FUN_00155a2c(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = FUN_007f2db0();
  iVar2 = FUN_00582e64();
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  if (param_2 == 0x14) {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  if (param_2 == 5) {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  *(char *)(iVar2 + 0x24) = (char)param_2;
  if ((param_2 == 0xf || param_2 == 0x11) && (uVar3 = FUN_00580678(), uVar3 == uVar1)) {
    FUN_005806e4(0xffffffff);
  }
  if (uVar1 < *param_1) {
    uVar3 = 1 << (uVar1 & 0xff);
    if ((param_1[1] & uVar3) != 0) {
      param_1[1] = param_1[1] & ~uVar3;
      param_1[2] = param_1[2] - 1;
    }
  }
  return uVar1;
}


