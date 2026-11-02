/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002fff34. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_002fff34(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  bVar4 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar4) {
      *param_1 = param_3;
      param_1[1] = param_3;
      param_1[2] = param_3;
      param_1[3] = param_3;
      param_1[4] = param_3;
      param_1[5] = param_3;
      param_1[6] = param_3;
      param_1[7] = param_3;
      param_1 = param_1 + 8;
      bVar4 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar4);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = param_3;
    param_1[1] = param_3;
    param_1[2] = param_3;
    param_1[3] = param_3;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = param_3;
    param_1[1] = param_3;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = param_3;
  }
  if (uVar1 != 0) {
    puVar2 = puVar3;
    if ((int)uVar1 < 0) {
      puVar2 = (undefined4 *)((int)puVar3 + 2);
      *(short *)puVar3 = (short)param_3;
    }
    puVar3 = puVar2;
    if ((uVar1 & 0x40000000) != 0) {
      puVar3 = (undefined4 *)((int)puVar2 + 1);
      *(char *)puVar2 = (char)param_3;
    }
    return puVar3;
  }
  return puVar3;
}


