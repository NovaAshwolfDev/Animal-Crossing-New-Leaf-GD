/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005ede08. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_005ede08(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_006a905c();
  if (((iVar1 != 3) && (*(int *)(DAT_005ede50 + 8) != 0)) &&
     ((param_1 == 0 || (*(byte *)(*(int *)(DAT_005ede50 + 8) + 0x1b) < 0x23)))) {
    return 1;
  }
  return 0;
}


