/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011c95c. Provisional types; not original source or a verified portable implementation. */

void FUN_0011c95c(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = DAT_0011c9e8;
  iVar4 = *(int *)(*param_1 + 0x1c);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *param_1 + 0x1c + iVar4;
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = iVar4 + 0x1c;
  }
  iVar5 = iVar4 + *(int *)(*param_1 + 0x18) * 0x10;
  do {
    if (iVar4 == iVar5) {
      return;
    }
    if (*(int *)(iVar4 + 0xc) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(iVar4 + 0xc + *(int *)(iVar4 + 0xc));
    }
    if (piVar2 != (int *)0x0) {
      if (*piVar2 == -0x80000000) {
        pcVar3 = (code *)*puVar1;
      }
      else {
        if (*piVar2 != 0x40000000) goto LAB_0011c9d8;
        pcVar3 = (code *)puVar1[1];
      }
      (*pcVar3)();
    }
LAB_0011c9d8:
    iVar4 = iVar4 + 0x10;
  } while( true );
}


