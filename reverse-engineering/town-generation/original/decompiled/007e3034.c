/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e3034. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007e3034(int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  ushort *puVar3;
  short *psVar4;
  short sVar5;
  short sVar6;
  
  cVar1 = *(char *)(param_2 + 7);
  if (*(ushort *)(param_1 + 0x14) == DAT_007e30fc) {
    psVar4 = (short *)(param_1 + 0x10);
  }
  else {
    psVar4 = (short *)(param_1 + 0x14);
  }
  if (*(ushort *)(param_1 + 0x16) == DAT_007e30fc) {
    puVar3 = (ushort *)(param_1 + 0x12);
  }
  else {
    puVar3 = (ushort *)(param_1 + 0x16);
  }
  if (*(char *)((int)psVar4 + 1) < '\x06') {
    sVar5 = 0x1800;
  }
  else {
    sVar5 = 0;
  }
  sVar2 = CONCAT11(cVar1,*(undefined1 *)(param_2 + 8));
  if (cVar1 < '\x06') {
    sVar6 = 0x1800;
  }
  else {
    sVar6 = 0;
  }
  if ((ushort)(*psVar4 + sVar5) <= (ushort)(sVar6 + sVar2)) {
    if (cVar1 < '\x06') {
      sVar5 = 0x1800;
    }
    else {
      sVar5 = 0;
    }
    if (*puVar3 < 0x601) {
      sVar6 = 0x1800;
    }
    else {
      sVar6 = 0;
    }
    if ((ushort)(sVar2 + sVar5) < (ushort)(*puVar3 + sVar6)) {
      return 1;
    }
  }
  return 0;
}


