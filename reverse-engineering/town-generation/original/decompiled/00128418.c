/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00128418. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_00128418(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  bool bVar6;
  
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar4 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar4 = 0;
    }
    puVar2 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar2 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = 0;
    }
    return puVar2;
  }
  if (((uint)param_1 & 3) == 0) {
    bVar6 = 0x1f < param_2;
    param_2 = param_2 - 0x20;
    do {
      if (bVar6) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1 = param_1 + 8;
        bVar6 = 0x1f < param_2;
        param_2 = param_2 - 0x20;
      }
    } while (bVar6);
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
    puVar2 = param_1;
    if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
      puVar2 = param_1 + 1;
      *param_1 = 0;
    }
    if (uVar1 != 0) {
      puVar3 = puVar2;
      if ((int)uVar1 < 0) {
        puVar3 = (undefined4 *)((int)puVar2 + 2);
        *(undefined2 *)puVar2 = 0;
      }
      puVar2 = puVar3;
      if ((uVar1 & 0x40000000) != 0) {
        puVar2 = (undefined4 *)((int)puVar3 + 1);
        *(undefined1 *)puVar3 = 0;
      }
      return puVar2;
    }
    return puVar2;
  }
  iVar5 = 4 - ((uint)param_1 & 3);
  puVar2 = param_1;
  if (iVar5 != 2) {
    puVar2 = (undefined4 *)((int)param_1 + 1);
    *(undefined1 *)param_1 = 0;
  }
  puVar3 = puVar2;
  if (1 < iVar5) {
    puVar3 = (undefined4 *)((int)puVar2 + 2);
    *(undefined2 *)puVar2 = 0;
  }
  puVar2 = (undefined4 *)FUN_002fff34(puVar3,param_2 - iVar5);
  return puVar2;
}


