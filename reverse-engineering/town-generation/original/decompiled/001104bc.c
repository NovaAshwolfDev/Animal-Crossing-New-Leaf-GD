/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001104bc. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001104bc(undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_00110670(param_1 + 1);
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0xfffffffe;
  }
  do {
    uVar2 = *param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = uVar3;
  return uVar2;
}


