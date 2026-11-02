/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011690c. Provisional types; not original source or a verified portable implementation. */

void FUN_0011690c(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if ((int)(uint)(param_1 < DAT_00116934) <= param_2) {
    software_interrupt(10);
    return;
  }
  iVar3 = (int)((ulonglong)DAT_00116938 * (ulonglong)param_1 >> 0x20) + DAT_00116938 * param_2;
  do {
    iVar2 = iVar3 + -2;
    bVar1 = 1 < iVar3;
    iVar3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  return;
}


