/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011641c. Provisional types; not original source or a verified portable implementation. */

void FUN_0011641c(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = DAT_001164dc;
  do {
    iVar3 = *param_1;
    if (iVar3 == -2) {
      FUN_001229b4(*puVar2,param_1,1,0,0,0);
      return;
    }
    if (iVar3 != -1) {
      if (iVar3 == 0) {
        do {
          iVar3 = *param_1;
          if (iVar3 != 0) {
            ClearExclusiveLocal();
            goto LAB_001164a8;
          }
          bVar1 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar1);
        *param_1 = -1;
LAB_001164a8:
        if (iVar3 == 0) {
          return;
        }
      }
      else if (iVar3 == 1) {
        return;
      }
    }
    FUN_001229b4(*puVar2,param_1,1,0,0,0);
  } while( true );
}


