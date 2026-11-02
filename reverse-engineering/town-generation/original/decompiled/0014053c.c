/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0014053c. Provisional types; not original source or a verified portable implementation. */

uint FUN_0014053c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(short *)(param_1 + 10) != 0) {
    do {
      iVar1 = FUN_00140468(*(int *)(param_1 + 0xc) + uVar2 * 0x10 + 4,param_2,4);
      if (iVar1 != 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < *(ushort *)(param_1 + 10));
  }
  return 0xffffffff;
}


