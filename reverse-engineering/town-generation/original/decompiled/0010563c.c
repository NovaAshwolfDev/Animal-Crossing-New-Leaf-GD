/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0010563c. Provisional types; not original source or a verified portable implementation. */

byte FUN_0010563c(void)

{
  byte bVar1;
  int iVar2;
  undefined1 uStack_10;
  byte local_f;
  undefined1 local_c [12];
  
  if ((*(byte *)(DAT_001056b0 + 0x14) & 1) == 0) {
    iVar2 = FUN_001077ac(local_c);
    if ((iVar2 < 0) && (iVar2 < 0)) {
      FUN_00116b58(iVar2,0x105670);
    }
    iVar2 = FUN_0010b520(&uStack_10,4,0x130000);
    if (iVar2 < 0) {
      FUN_00116b58(iVar2,0x10568c);
    }
    FUN_00107714(local_c[0]);
    bVar1 = local_f & 1;
    if ((local_f & 1) != 0) {
      bVar1 = 1;
    }
    return bVar1;
  }
  return 0;
}


