/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001218f0. Provisional types; not original source or a verified portable implementation. */

uint FUN_001218f0(uint *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar1 = (ulonglong)DAT_00121934 * (ulonglong)*param_1 + lVar2;
  lVar2 = CONCAT44((int)lVar1,DAT_00121938);
  uVar3 = (uint)((ulonglong)lVar1 >> 0x20);
  *param_1 = uVar3;
  return uVar3 >> 9 | 0x3f800000;
}


