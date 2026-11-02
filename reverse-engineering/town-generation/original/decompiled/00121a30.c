/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00121a30. Provisional types; not original source or a verified portable implementation. */

void FUN_00121a30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined1 auStack_20 [12];
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_001198ec(auStack_20,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x14));
    if (*(int *)(param_1 + 8) != 0) {
      FUN_001179c8(&stack0xfffffff0);
    }
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_00119964(auStack_20);
  }
  iVar4 = param_1 + 0x24;
  if (*(char *)(param_1 + 0x118) != '\0') {
    if ((*(char *)(param_1 + 0x118) == '\x01') && (*(char *)(param_1 + 0x119) != '\0')) {
      FUN_0011f990(DAT_00121c84);
      uVar2 = DAT_00121c84;
      if (*(char *)(param_1 + 0x118) == '\x01') {
        FUN_0011f990();
        FUN_00124ab0(DAT_00121c88,iVar4);
        FUN_001214d0(uVar2);
      }
      FUN_001214d0(DAT_00121c84);
    }
    cVar1 = *(char *)(param_1 + 0x118);
    bVar6 = cVar1 != '\x02';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0x118);
    }
    if ((!bVar6 || cVar1 == '\x04') && (*(char *)(param_1 + 0x119) != '\0')) {
      *(undefined1 *)(param_1 + 0x11b) = 1;
      iVar5 = 1000;
      uVar7 = FUN_0010f710(*DAT_00121c8c,DAT_00121c8c[1],1000,0);
      do {
        FUN_0011dca4((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
        iVar5 = iVar5 + -1;
        if (iVar5 < 1) break;
        cVar1 = *(char *)(param_1 + 0x118);
      } while ((cVar1 != '\x03' && cVar1 != '\x05') && cVar1 != '\x06');
    }
    uVar2 = DAT_00121c84;
    cVar1 = *(char *)(param_1 + 0x118);
    bVar6 = cVar1 != '\x01';
    if (bVar6) {
      cVar1 = *(char *)(param_1 + 0x119);
    }
    if (bVar6 && cVar1 != '\0') {
      FUN_0011f990();
      iVar5 = FUN_0011dfac(DAT_00121c88,iVar4);
      uVar3 = DAT_00121c84;
      if (iVar5 != 0) {
        FUN_0011f990();
        FUN_00124ab0(DAT_00121c88,iVar4);
        FUN_001214d0(uVar3);
      }
      FUN_001214d0(uVar2);
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_0011df64(iVar4);
    }
    if (*(int *)(param_1 + 0xfc) != 0) {
      (**(code **)(**(int **)(param_1 + 0xf8) + 0x1c))
                (*(int **)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0xfc));
    }
    if (*(int *)(param_1 + 0x100) != 0) {
      (**(code **)(**(int **)(param_1 + 0xf8) + 0x1c))
                (*(int **)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x100));
    }
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xfc) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined1 *)(param_1 + 0x118) = 0;
    *(undefined1 *)(param_1 + 0x119) = 0;
    *(undefined1 *)(param_1 + 0x11a) = 0;
    *(undefined1 *)(param_1 + 0x11b) = 0;
  }
  return;
}


