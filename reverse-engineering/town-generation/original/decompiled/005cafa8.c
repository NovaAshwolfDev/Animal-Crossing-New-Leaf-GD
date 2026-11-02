/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cafa8. Provisional types; not original source or a verified portable implementation. */

uint FUN_005cafa8(byte *param_1,uint param_2,uint param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  uVar3 = 1;
  uVar2 = *(uint *)(DAT_005cb08c + ((*param_1 ^ param_3) & 0xff) * 4) ^ param_3 >> 8;
  if (param_2 < 0x80000000) {
    if (0 < (int)(param_2 - 2)) {
      pbVar4 = param_1;
      if ((param_2 & 1) != 0) {
        pbVar4 = param_1 + 1;
        uVar2 = *(uint *)(DAT_005cb08c + ((param_1[1] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      }
      bVar1 = pbVar4[1];
      for (iVar5 = (int)(param_2 - 2) >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar3 = (uint)bVar1;
        bVar1 = pbVar4[3];
        uVar2 = *(uint *)(DAT_005cb08c + ((uVar3 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
        uVar2 = *(uint *)(DAT_005cb08c + ((pbVar4[2] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
        pbVar4 = pbVar4 + 2;
      }
    }
    if (-1 < (int)(param_2 - 2)) {
      uVar2 = *(uint *)(DAT_005cb08c + ((param_1[param_2 - 1] ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
    }
  }
  else {
    do {
      pbVar4 = param_1 + uVar3;
      uVar3 = uVar3 + 1;
      uVar2 = *(uint *)(DAT_005cb08c + ((*pbVar4 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
    } while (uVar3 != param_2);
  }
  return uVar2 ^ param_4;
}


