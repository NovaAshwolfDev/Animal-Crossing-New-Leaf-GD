/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002fff30. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_002fff30(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  bVar4 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar4) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1 = param_1 + 8;
      bVar4 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar4);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = 0;
  }
  if (uVar1 != 0) {
    puVar2 = puVar3;
    if ((int)uVar1 < 0) {
      puVar2 = (undefined4 *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = 0;
    }
    puVar3 = puVar2;
    if ((uVar1 & 0x40000000) != 0) {
      puVar3 = (undefined4 *)((int)puVar2 + 1);
      *(undefined1 *)puVar2 = 0;
    }
    return puVar3;
  }
  return puVar3;
}


