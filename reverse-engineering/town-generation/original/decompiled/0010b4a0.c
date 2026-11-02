/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0010b4a0. Provisional types; not original source or a verified portable implementation. */

int FUN_0010b4a0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = DAT_0010b508;
  if (*DAT_0010b508 == 0) {
    iVar2 = FUN_001106cc(DAT_0010b510,*(undefined4 *)(DAT_0010b50c + 4));
    if (iVar2 < 0) {
      if (iVar2 == DAT_0010b51c) {
        return iVar2;
      }
    }
    else {
      uVar3 = *DAT_0010b510;
      *DAT_0010b514 = uVar3;
      *DAT_0010b518 = uVar3;
    }
  }
  *piVar1 = *piVar1 + 1;
  return 0;
}


