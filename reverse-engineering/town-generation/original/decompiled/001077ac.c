/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001077ac. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001077ac(undefined1 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_00107664();
  if ((uVar1 & 0x80000000) == 0) {
    *param_1 = 0;
  }
  else {
    iVar2 = FUN_0010b424();
    if (iVar2 < 0) {
      uVar1 = FUN_0010b4a0();
      uVar3 = DAT_00107810;
      if ((uVar1 & 0x80000000) == 0) {
        *param_1 = 2;
        uVar3 = 0;
      }
      return uVar3;
    }
    *param_1 = 1;
  }
  return 0;
}


