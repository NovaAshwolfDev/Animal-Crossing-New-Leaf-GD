/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002fff28. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Removing unreachable block (ram,0x002fff74) */
/* WARNING: Removing unreachable block (ram,0x002fff6c) */
/* WARNING: Removing unreachable block (ram,0x002fff78) */
/* WARNING: Removing unreachable block (ram,0x002fff7c) */
/* WARNING: Removing unreachable block (ram,0x002fff80) */

undefined4 * FUN_002fff28(undefined4 *param_1)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = true;
  uVar1 = 0x218;
  do {
    if (bVar2) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar2 = 0x1f < uVar1;
      uVar1 = uVar1 - 0x20;
    }
  } while (bVar2);
  if ((bool)((byte)(uVar1 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar1 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  return param_1;
}


