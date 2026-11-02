/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0011f23c. Provisional types; not original source or a verified portable implementation. */

void FUN_0011f23c(byte *param_1,byte *param_2,int param_3,byte *param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  
  if (param_1 != param_2) {
    FUN_0011b214(param_1,param_2,0x48);
  }
  if (param_3 == 0) {
    *(ushort *)(param_1 + 0x18) = *(ushort *)(param_1 + 0x18) & 0xfc01;
  }
  if (param_4 == (byte *)0x0) {
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x55] = 0;
    param_1[0x56] = 0;
    param_1[0x57] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
  }
  else if (param_1 + 0x48 != param_4) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)param_4;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_4 + 4);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_4 + 8);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_4 + 0xc);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_4 + 0x10);
  }
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  *(ushort *)(param_1 + 0x5e) = 0;
  uVar1 = 0;
  uVar5 = 0;
  pbVar3 = param_1;
  do {
    iVar4 = 4;
    uVar2 = uVar1;
    do {
      if ((uVar2 & 0x8000) == 0) {
        uVar1 = DAT_0011f35c & uVar2 << 1;
      }
      else {
        uVar1 = (DAT_0011f358 ^ uVar2 << 1) & 0xffff;
      }
      if ((uVar1 & 0x8000) == 0) {
        uVar2 = DAT_0011f35c & uVar1 << 1;
      }
      else {
        uVar2 = (DAT_0011f358 ^ uVar1 << 1) & 0xffff;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    uVar5 = uVar5 + 1;
    uVar1 = uVar2 ^ *pbVar3;
    pbVar3 = pbVar3 + 1;
  } while (uVar5 < 0x60);
  *(ushort *)(param_1 + 0x5e) = (ushort)((uVar1 & 0xff) << 8) | (ushort)(uVar2 >> 8) & 0xff;
  return;
}


