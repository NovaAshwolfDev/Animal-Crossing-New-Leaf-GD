/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ce0d4. Provisional types; not original source or a verified portable implementation. */

uint * FUN_007ce0d4(int *param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  iVar2 = *param_1;
  puVar4 = (uint *)(iVar2 + (uint)*(ushort *)(iVar2 + 0x10) * 0x10 + 0xc);
  puVar5 = puVar4;
  if (*puVar4 < *(uint *)(iVar2 + 0xc)) {
    do {
      uVar3 = *puVar5 >> 3;
      if ((uVar3 < param_3) && (((int)*(char *)(param_2 + uVar3) >> (*puVar5 & 7) & 1U) != 0)) {
        uVar1 = *(ushort *)((int)puVar5 + 6);
      }
      else {
        uVar1 = (ushort)puVar5[1];
      }
      puVar4 = (uint *)(iVar2 + (uint)uVar1 * 0x10 + 0xc);
      uVar3 = *puVar5;
      puVar5 = puVar4;
    } while (*puVar4 < uVar3);
  }
  if ((puVar4[2] == 0) || (iVar2 = FUN_00301f24(param_2,(int)puVar4 + puVar4[2] + 8), iVar2 != 0)) {
    puVar4 = (uint *)0x0;
  }
  return puVar4;
}


