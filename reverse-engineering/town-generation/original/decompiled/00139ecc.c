/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00139ecc. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00139ecc(undefined2 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((((param_2 != 0) && (iVar1 = FUN_001229f4(), iVar1 != 0)) &&
      (iVar1 = *(int *)(DAT_00139f8c + 0x10), iVar1 != 0)) &&
     ((iVar2 = FUN_0011edc4(1), iVar2 == 0 && (iVar2 = FUN_0011edc4(0), iVar2 == 0)))) {
    uVar3 = 0;
    do {
      if ((((uVar3 & 0xffff) < 100) && (iVar2 = FUN_0015639c(uVar3 & 0xffff,1), iVar2 != 0)) &&
         (iVar2 = FUN_0013b7c4(iVar1 + uVar3 * 0x5c + 0x14,param_2), iVar2 != 0)) {
        if (param_1 == (undefined2 *)0x0) {
          return 1;
        }
        *param_1 = (short)uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 100);
  }
  return 0;
}


