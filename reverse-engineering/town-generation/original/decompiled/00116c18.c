/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00116c18. Provisional types; not original source or a verified portable implementation. */

int FUN_00116c18(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1 - 2000;
  if (param_2 < 3) {
    param_2 = param_2 + 9;
    uVar1 = param_1 - 0x7d1;
  }
  else {
    param_2 = param_2 + -3;
  }
  iVar2 = 1;
  if (-1 < (int)uVar1) goto LAB_00116c88;
  iVar2 = (int)((ulonglong)((longlong)DAT_00116d04 * (longlong)(int)uVar1) >> 0x20);
  if (uVar1 + ((iVar2 >> 7) - (iVar2 >> 0x1f)) * -400 != 0) {
    iVar2 = uVar1 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * -100;
    if (iVar2 == 0) goto LAB_00116c88;
    if ((uVar1 & 3) != 0) {
      iVar2 = 0;
      goto LAB_00116c88;
    }
  }
  iVar2 = 1;
LAB_00116c88:
  iVar3 = (int)((ulonglong)((longlong)DAT_00116d04 * (longlong)(int)uVar1) >> 0x20);
  iVar3 = (iVar3 >> 5) - (iVar3 >> 0x1f);
  iVar5 = (int)((ulonglong)((longlong)DAT_00116d0c * (longlong)(param_2 * 0x99 + 2)) >> 0x20);
  iVar4 = iVar3 * DAT_00116d08;
  iVar3 = (uVar1 + iVar3 * -100) * DAT_00116d10;
  return ((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1e)) >> 2) +
         ((int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2) + ((iVar5 >> 1) - (iVar5 >> 0x1f)) +
         param_3 + iVar2 + 0x3a;
}


