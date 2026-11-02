/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00128410. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Removing unreachable block (ram,0x0012844c) */
/* WARNING: Removing unreachable block (ram,0x00128444) */
/* WARNING: Removing unreachable block (ram,0x00128448) */
/* WARNING: Removing unreachable block (ram,0x00128450) */
/* WARNING: Removing unreachable block (ram,0x00128454) */
/* WARNING: Removing unreachable block (ram,0x002fff74) */
/* WARNING: Removing unreachable block (ram,0x002fff6c) */
/* WARNING: Removing unreachable block (ram,0x002fff5c) */
/* WARNING: Removing unreachable block (ram,0x002fff60) */
/* WARNING: Removing unreachable block (ram,0x002fff78) */
/* WARNING: Removing unreachable block (ram,0x002fff7c) */
/* WARNING: Removing unreachable block (ram,0x002fff80) */

undefined4 * FUN_00128410(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  if (((uint)param_1 & 3) == 0) {
    bVar5 = true;
    uVar3 = 0xe0;
    do {
      if (bVar5) {
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_1 = param_1 + 8;
        bVar5 = 0x1f < uVar3;
        uVar3 = uVar3 - 0x20;
      }
    } while (bVar5);
    return param_1;
  }
  iVar4 = 4 - ((uint)param_1 & 3);
  puVar1 = param_1;
  if (iVar4 != 2) {
    puVar1 = (undefined4 *)((int)param_1 + 1);
    *(undefined1 *)param_1 = 0;
  }
  puVar2 = puVar1;
  if (1 < iVar4) {
    puVar2 = (undefined4 *)((int)puVar1 + 2);
    *(undefined2 *)puVar1 = 0;
  }
  puVar1 = (undefined4 *)FUN_002fff34(puVar2,0x100 - iVar4);
  return puVar1;
}


