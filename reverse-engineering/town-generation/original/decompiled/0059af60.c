/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0059af60. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_0059af60(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((*DAT_0059afa4 & 1) == 0) &&
     (iVar2 = FUN_003025cc(DAT_0059afa4), puVar1 = DAT_0059afa8, iVar2 != 0)) {
    *DAT_0059afa8 = 0;
    puVar1[1] = 0;
  }
  return DAT_0059afa8;
}


