/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00789368. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00789368(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00610c2c();
  iVar2 = FUN_00611914(0x80000,uVar1);
  if (iVar2 == 0) {
    uVar1 = FUN_00610c2c();
    iVar2 = FUN_00611914(0x100000,uVar1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}


