/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00140468. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00140468(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  if ((int)param_3 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_3 & 1;
    iVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*(char *)(param_1 + iVar2) != *(char *)(param_2 + iVar2)) {
          return 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar1);
    }
  }
  while( true ) {
    if ((int)param_3 <= (int)uVar1) {
      return 1;
    }
    if ((*(char *)(param_1 + uVar1) != *(char *)(param_2 + uVar1)) ||
       (*(char *)(param_1 + uVar1 + 1) != *(char *)(param_2 + uVar1 + 1))) break;
    uVar1 = uVar1 + 2;
  }
  return 0;
}


