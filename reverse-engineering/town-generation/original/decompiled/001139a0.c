/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001139a0. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_001139a0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  *param_1 = DAT_001139ec;
  param_1[1] = 0;
  piVar1 = DAT_001139f0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*piVar1 != 0) {
    uVar4 = FUN_001226fc(*piVar1,param_1);
    iVar2 = (int)uVar4;
    puVar3 = (undefined4 *)((ulonglong)uVar4 >> 0x20);
    if (iVar2 != 0) {
      puVar3 = param_1;
    }
    param_1[1] = iVar2;
    if (iVar2 != 0) {
      FUN_0011dba0(iVar2,puVar3);
    }
  }
  return param_1;
}


