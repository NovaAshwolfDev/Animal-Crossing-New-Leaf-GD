/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0012162c. Provisional types; not original source or a verified portable implementation. */

void FUN_0012162c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  do {
    uVar2 = iVar1 - *(int *)(param_1 + 0x80);
    if (uVar2 == (param_1 + 0x74) - *(int *)(param_1 + 0x80)) {
      FUN_0011ddac(param_1 + 0x74,param_2 + *(int *)(param_1 + 0x80));
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
LAB_001216a8:
      iVar4 = *(int *)(param_1 + 0x80);
      iVar1 = *(int *)(param_1 + 0x78) - iVar4;
      while( true ) {
        iVar3 = iVar1;
        if (iVar3 == (param_1 + 0x74) - *(int *)(param_1 + 0x80)) {
          return;
        }
        iVar1 = *(int *)(iVar3 + iVar4 + 4) - iVar4;
        if (iVar1 == (param_1 + 0x74) - *(int *)(param_1 + 0x80)) break;
        if (*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0xc) + 0x10 + iVar3 == iVar1) {
          *(int *)(iVar3 + 8) =
               *(int *)(iVar3 + 8) + *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) + 0x10;
          FUN_0012185c(*(int *)(param_1 + 0x80) + iVar1);
          *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + -1;
          iVar1 = iVar3;
        }
      }
      return;
    }
    if (param_2 < uVar2) {
      FUN_0011ddac(uVar2 + *(int *)(param_1 + 0x80),param_2 + *(int *)(param_1 + 0x80));
      *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
      goto LAB_001216a8;
    }
    iVar1 = *(int *)(uVar2 + *(int *)(param_1 + 0x80) + 4);
  } while( true );
}


