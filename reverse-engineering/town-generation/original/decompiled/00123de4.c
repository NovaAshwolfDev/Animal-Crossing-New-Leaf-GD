/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00123de4. Provisional types; not original source or a verified portable implementation. */

void FUN_00123de4(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = DAT_00123e58;
  iVar5 = 0;
  do {
    iVar5 = FUN_0011fcdc(puVar6,iVar5);
    if (iVar5 == 0) goto LAB_00123e48;
  } while ((param_1 < *(uint *)(iVar5 + 0x18)) || (*(uint *)(iVar5 + 0x1c) <= param_1));
  iVar1 = FUN_0011fc84(iVar5 + 0xc,param_1);
  if (iVar1 == 0) {
    iVar1 = iVar5;
  }
  puVar6 = (undefined4 *)(iVar1 + 0xc);
LAB_00123e48:
  uVar4 = (uint)*(ushort *)((int)puVar6 + 10);
  piVar3 = (int *)(uVar4 + param_1);
  uVar2 = *(undefined4 *)(param_1 + uVar4 + 4);
  if (*piVar3 == 0) {
    *puVar6 = uVar2;
  }
  else {
    *(undefined4 *)(uVar4 + *piVar3 + 4) = uVar2;
  }
  if (piVar3[1] == 0) {
    puVar6[1] = *piVar3;
  }
  else {
    *(int *)(piVar3[1] + (uint)*(ushort *)((int)puVar6 + 10)) = *piVar3;
  }
  *piVar3 = 0;
  piVar3[1] = 0;
  *(short *)(puVar6 + 2) = *(short *)(puVar6 + 2) + -1;
  return;
}


