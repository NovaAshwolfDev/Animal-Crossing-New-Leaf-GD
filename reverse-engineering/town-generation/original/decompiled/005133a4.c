/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005133a4. Provisional types; not original source or a verified portable implementation. */

void FUN_005133a4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if ((*(uint *)(iVar3 + 8) & 1) == 0) {
    iVar2 = *(int *)(iVar3 + 0xc);
    if ((*(uint *)(iVar3 + 8) & 2) == 0) {
      if (iVar2 == 0) {
        return;
      }
      iVar1 = *(int *)(iVar3 + 0x20);
    }
    else {
      if (iVar2 == 0) {
        return;
      }
      iVar1 = *(int *)(iVar3 + 0x20);
    }
    if (iVar1 != 0) {
      (*(code *)*DAT_00513418)(iVar1,DAT_0051341c,iVar2,*(undefined4 *)(iVar3 + 0x1c));
      *(undefined4 *)(iVar3 + 0x1c) = 0;
    }
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  return;
}


