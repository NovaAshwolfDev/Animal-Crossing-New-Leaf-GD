/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0044bac8. Provisional types; not original source or a verified portable implementation. */

int FUN_0044bac8(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = DAT_0044bb54;
  FUN_0011f998(DAT_0044bb54);
  iVar3 = DAT_0044bb5c;
  piVar2 = DAT_0044bb58;
  if (*DAT_0044bb58 == 0) {
    FUN_0011fa98(uVar1);
    return iVar3;
  }
  if (*DAT_0044bb58 == 1) {
    iVar3 = *DAT_0044bb60;
    software_interrupt(0x23);
    if (iVar3 < 0) {
      FUN_0011fa98(uVar1);
      return iVar3;
    }
    *DAT_0044bb60 = 0;
  }
  *piVar2 = *piVar2 + -1;
  FUN_0011fa98(uVar1);
  return 0;
}


