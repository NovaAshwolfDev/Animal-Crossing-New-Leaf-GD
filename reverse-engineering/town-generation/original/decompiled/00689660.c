/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00689660. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00689660(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *DAT_0068969c;
  iVar1 = FUN_001bb568();
  if (((iVar1 == 0) || (iVar1 = FUN_001bc510(), iVar1 != 0)) ||
     (iVar1 = FUN_001bc500(), iVar1 != iVar3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


