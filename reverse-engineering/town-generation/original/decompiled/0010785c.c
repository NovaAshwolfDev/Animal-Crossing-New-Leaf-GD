/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0010785c. Provisional types; not original source or a verified portable implementation. */

int FUN_0010785c(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = DAT_001078d8;
  FUN_0011f998(DAT_001078d8);
  piVar2 = DAT_001078dc;
  if (*DAT_001078dc == 0) {
    FUN_001110ec();
    uVar3 = FUN_00301bac(DAT_001078e0);
    iVar4 = FUN_00111154(DAT_001078e4,DAT_001078e0,uVar3,0);
    if (iVar4 < 0) {
      FUN_0011fa98(uVar1);
      return iVar4;
    }
  }
  *piVar2 = *piVar2 + 1;
  FUN_0011fa98(uVar1);
  return 0;
}


