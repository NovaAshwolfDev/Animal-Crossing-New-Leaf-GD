/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 008a150c. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_008a150c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = param_1 + 5;
  param_1[4] = 0;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = 0;
    iVar3 = 0x13;
    param_1[3] = puVar1;
    do {
      iVar3 = iVar3 + -1;
      puVar1[iVar2] = puVar1 + iVar2 + 2;
      iVar2 = iVar2 + 2;
    } while (iVar3 != 0);
    param_1[0x2b] = 0;
    param_1[4] = puVar1;
    FUN_005a6780(param_1,0x14,param_1 + 0x2d);
  }
  return param_1;
}


