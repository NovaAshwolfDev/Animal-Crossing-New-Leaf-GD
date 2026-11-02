/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0074921c. Provisional types; not original source or a verified portable implementation. */

void FUN_0074921c(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      iVar1 = (**(code **)*param_2)(param_2,param_1,iVar2,iVar3);
      if (iVar1 == 1) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x10);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}


