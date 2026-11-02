/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0012841c. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_0012841c(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  bool bVar7;
  
  uVar2 = (undefined1)param_3;
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar5 = (undefined1 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = uVar2;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar5 = uVar2;
    }
    puVar3 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = uVar2;
    }
    return puVar3;
  }
  if (((uint)param_1 & 3) == 0) {
    bVar7 = 0x1f < param_2;
    param_2 = param_2 - 0x20;
    do {
      if (bVar7) {
        *param_1 = param_3;
        param_1[1] = param_3;
        param_1[2] = param_3;
        param_1[3] = param_3;
        param_1[4] = param_3;
        param_1[5] = param_3;
        param_1[6] = param_3;
        param_1[7] = param_3;
        param_1 = param_1 + 8;
        bVar7 = 0x1f < param_2;
        param_2 = param_2 - 0x20;
      }
    } while (bVar7);
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
      puVar4 = puVar3;
      if ((int)uVar1 < 0) {
        puVar4 = (undefined4 *)((int)puVar3 + 2);
        *(short *)puVar3 = (short)param_3;
      }
      puVar3 = puVar4;
      if ((uVar1 & 0x40000000) != 0) {
        puVar3 = (undefined4 *)((int)puVar4 + 1);
        *(undefined1 *)puVar4 = uVar2;
      }
      return puVar3;
    }
    return puVar3;
  }
  iVar6 = 4 - ((uint)param_1 & 3);
  puVar3 = param_1;
  if (iVar6 != 2) {
    puVar3 = (undefined4 *)((int)param_1 + 1);
    *(undefined1 *)param_1 = uVar2;
  }
  puVar4 = puVar3;
  if (1 < iVar6) {
    puVar4 = (undefined4 *)((int)puVar3 + 2);
    *(short *)puVar3 = (short)param_3;
  }
  puVar3 = (undefined4 *)FUN_002fff34(puVar4,param_2 - iVar6);
  return puVar3;
}


