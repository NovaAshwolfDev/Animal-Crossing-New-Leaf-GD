/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0023d9a0. Provisional types; not original source or a verified portable implementation. */

void FUN_0023d9a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  *(undefined1 *)(param_1 + 8) = 0;
  piVar3 = (int *)FUN_005cc158();
  iVar4 = piVar3[1];
  bVar5 = *piVar3 == DAT_0023d9fc;
  if (*piVar3 <= DAT_0023d9fc) {
    bVar5 = (char)iVar4 == '\x01';
  }
  if (bVar5) {
    iVar1 = (iVar4 << 0x10) >> 0x18;
    bVar5 = SBORROW4(iVar1,1);
    iVar2 = iVar1 + -1;
    if (iVar1 < 2) {
      bVar5 = SBORROW4(iVar4 >> 0x18,6);
      iVar2 = (iVar4 >> 0x18) + -6;
    }
    if (iVar2 < 0 != bVar5) {
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 1;
    }
  }
  FUN_005cb800();
  return;
}


