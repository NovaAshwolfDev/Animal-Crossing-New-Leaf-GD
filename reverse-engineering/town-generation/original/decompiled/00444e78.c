/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00444e78. Provisional types; not original source or a verified portable implementation. */

int FUN_00444e78(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = DAT_00444efc;
  iVar1 = DAT_00444ef4;
  iVar3 = DAT_00444ef8;
  if ((*(char *)(DAT_00444ef4 + 1) != '\0') && (iVar3 = 0, *(char *)(DAT_00444ef4 + 2) == '\0')) {
    FUN_0011f998(DAT_00444efc);
    iVar3 = FUN_0044baa8(0);
    if (iVar3 < 0) {
      FUN_0011fa98(uVar2);
      return iVar3;
    }
    FUN_0011690c(DAT_00444f00,0);
    *(undefined1 *)(iVar1 + 2) = 1;
    FUN_0011fa98(uVar2);
  }
  return iVar3;
}


