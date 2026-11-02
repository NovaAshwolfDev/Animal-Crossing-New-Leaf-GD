/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00121a94. Provisional types; not original source or a verified portable implementation. */

void FUN_00121a94(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  
  if (*(char *)(param_1 + 0xf4) != '\0') {
    if ((*(char *)(param_1 + 0xf4) == '\x01') && (*(char *)(param_1 + 0xf5) != '\0')) {
      FUN_0011f990(DAT_00121c84);
      uVar2 = DAT_00121c84;
      if (*(char *)(param_1 + 0xf4) == '\x01') {
        FUN_0011f990();
        FUN_00124ab0(DAT_00121c88,param_1);
        FUN_001214d0(uVar2);
      }
      FUN_001214d0(DAT_00121c84);
    }
    cVar1 = *(char *)(param_1 + 0xf4);
    bVar5 = cVar1 != '\x02';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0xf4);
    }
    if ((!bVar5 || cVar1 == '\x04') && (*(char *)(param_1 + 0xf5) != '\0')) {
      *(undefined1 *)(param_1 + 0xf7) = 1;
      iVar4 = 1000;
      uVar6 = FUN_0010f710(*DAT_00121c8c,DAT_00121c8c[1],1000,0);
      do {
        FUN_0011dca4((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
        iVar4 = iVar4 + -1;
        if (iVar4 < 1) break;
        cVar1 = *(char *)(param_1 + 0xf4);
      } while ((cVar1 != '\x03' && cVar1 != '\x05') && cVar1 != '\x06');
    }
    uVar2 = DAT_00121c84;
    cVar1 = *(char *)(param_1 + 0xf4);
    bVar5 = cVar1 != '\x01';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0xf5);
    }
    if (bVar5 && cVar1 != '\0') {
      FUN_0011f990();
      iVar4 = FUN_0011dfac(DAT_00121c88,param_1);
      uVar3 = DAT_00121c84;
      if (iVar4 != 0) {
        FUN_0011f990();
        FUN_00124ab0(DAT_00121c88,param_1);
        FUN_001214d0(uVar3);
      }
      FUN_001214d0(uVar2);
    }
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_0011df64(param_1);
    }
    if (*(int *)(param_1 + 0xd8) != 0) {
      (**(code **)(**(int **)(param_1 + 0xd4) + 0x1c))
                (*(int **)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xd8));
    }
    if (*(int *)(param_1 + 0xdc) != 0) {
      (**(code **)(**(int **)(param_1 + 0xd4) + 0x1c))
                (*(int **)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xdc));
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined4 *)(param_1 + 0xe0) = 0;
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
    *(undefined1 *)(param_1 + 0xf4) = 0;
    *(undefined1 *)(param_1 + 0xf5) = 0;
    *(undefined1 *)(param_1 + 0xf6) = 0;
    *(undefined1 *)(param_1 + 0xf7) = 0;
  }
  return;
}


