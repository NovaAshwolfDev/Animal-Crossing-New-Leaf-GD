/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005f2ff4. Provisional types; not original source or a verified portable implementation. */

int FUN_005f2ff4(void)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = DAT_005f3034;
  if (*DAT_005f3034 != 0) {
    uVar2 = FUN_007ff424();
    if ((*(int *)(*piVar1 + 4) != 0) && (uVar2 < 0xfe)) {
      return *(int *)(*piVar1 + 4) + uVar2 * 0xe;
    }
  }
  return 0;
}


