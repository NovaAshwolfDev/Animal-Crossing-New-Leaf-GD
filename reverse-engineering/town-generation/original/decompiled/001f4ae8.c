/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001f4ae8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001f4ae8(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FUN_005cca58(&local_14);
  local_20 = local_14;
  uStack_1c = uStack_10;
  uStack_18 = uStack_c;
  iVar1 = FUN_005cc004(&local_20);
  return *(undefined4 *)(DAT_001f4b28 + iVar1 * 0x28 + param_1 * 4);
}


