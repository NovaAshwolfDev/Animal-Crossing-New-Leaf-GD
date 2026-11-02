/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001165e8. Provisional types; not original source or a verified portable implementation. */

void FUN_001165e8(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  
  while (0 < *param_1) {
    bVar1 = (bool)hasExclusiveAccess(param_1);
    if (bVar1) {
      *param_1 = -*param_1;
      return;
    }
  }
  ClearExclusiveLocal();
  do {
    while (-1 < *param_1) {
      ClearExclusiveLocal();
      while (0 < *param_1) {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = -*param_1;
          return;
        }
      }
      ClearExclusiveLocal();
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + -1;
  puVar2 = DAT_001166c4;
  do {
    FUN_001229b4(*puVar2,param_1,1,0,0,0);
    while (0 < *param_1) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = 1 - *param_1;
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


