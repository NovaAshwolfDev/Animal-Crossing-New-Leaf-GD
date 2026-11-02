/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00754bf4. Provisional types; not original source or a verified portable implementation. */

void FUN_00754bf4(ushort *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  uint uVar6;
  
  if ((*param_2 & 0x7fff) < 0xfe) {
    iVar3 = FUN_007fe37c(param_2);
    puVar4 = DAT_00754ce8;
    if ((((iVar3 == 0xb || iVar3 == 0xc) || (iVar3 == 0xd || iVar3 == 0xe)) ||
        (iVar3 == 0x1b || iVar3 == 0x1c)) ||
       (((iVar3 == 0x10 || iVar3 == 0xf || (iVar3 == 0x11 || iVar3 == 0x14)) ||
        ((*param_2 & 0x7fff) == 0xc9)))) {
      uVar6 = (*param_2 & 0xffff7fff) - 0x9f;
      puVar4 = (ushort *)FUN_005a19a0(0x40);
      puVar1 = (uint *)(puVar4 + 2);
      if (uVar6 < *puVar1) {
        puVar4 = (ushort *)(uint)*puVar4;
      }
      uVar5 = DAT_00754cec;
      if (uVar6 < *puVar1) {
        uVar5 = (int)puVar4 + uVar6 & 0xffff;
      }
      uVar2 = param_2[1] | (ushort)((uVar5 & 0xffff7fff) >> 0x10);
      *param_1 = *param_2 & 0x8000 | (ushort)(uVar5 & 0xffff7fff);
    }
    else {
      *param_1 = *DAT_00754ce8;
      uVar2 = puVar4[1];
    }
    param_1[1] = uVar2;
    return;
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}


