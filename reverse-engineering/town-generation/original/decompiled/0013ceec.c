/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0013ceec. Provisional types; not original source or a verified portable implementation. */

void FUN_0013ceec(uint *param_1,uint *param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  
  *param_1 = *param_2 & 0xff;
  param_1[1] = ((uint)(ushort)param_2[0xc] << 0x1b) >> 0x1c;
  param_1[2] = ((uint)(ushort)param_2[0xc] << 0x18) >> 0x1d;
  param_1[3] = ((uint)(ushort)param_2[0xc] << 0x14) >> 0x1c;
  param_1[4] = (uint)(ushort)((ushort)param_2[0xc] >> 0xc);
  param_1[5] = *(ushort *)((int)param_2 + 0x32) & 0xff;
  param_1[6] = ((uint)*(ushort *)((int)param_2 + 0x32) << 0x15) >> 0x1d;
  param_1[7] = ((uint)*(ushort *)((int)param_2 + 0x32) << 0x14) >> 0x1f;
  param_1[8] = (ushort)param_2[0xd] & 0x3f;
  param_1[9] = ((uint)(ushort)param_2[0xd] << 0x17) >> 0x1d;
  param_1[10] = ((uint)(ushort)param_2[0xd] << 0x13) >> 0x1c;
  param_1[0xb] = (uint)(ushort)((ushort)param_2[0xd] >> 0xd);
  param_1[0xc] = *(ushort *)((int)param_2 + 0x36) & 0x1f;
  param_1[0xd] = ((uint)*(ushort *)((int)param_2 + 0x36) << 0x17) >> 0x1c;
  param_1[0xe] = ((uint)*(ushort *)((int)param_2 + 0x36) << 0x12) >> 0x1b;
  param_1[0xf] = (ushort)param_2[0xe] & 0x1f;
  param_1[0x10] = ((uint)(ushort)param_2[0xe] << 0x18) >> 0x1d;
  param_1[0x11] = ((uint)(ushort)param_2[0xe] << 0x14) >> 0x1c;
  param_1[0x12] = ((uint)(ushort)param_2[0xe] << 0x11) >> 0x1d;
  param_1[0x13] = *(ushort *)((int)param_2 + 0x3a) & 0x1f;
  param_1[0x14] = ((uint)*(ushort *)((int)param_2 + 0x3a) << 0x17) >> 0x1c;
  param_1[0x15] = ((uint)*(ushort *)((int)param_2 + 0x3a) << 0x12) >> 0x1b;
  param_1[0x16] = (ushort)param_2[0xf] & 0x1f;
  param_1[0x17] = ((uint)(ushort)param_2[0xf] << 0x17) >> 0x1c;
  param_1[0x18] = ((uint)(ushort)param_2[0xf] << 0x12) >> 0x1b;
  param_1[0x19] = *(ushort *)((int)param_2 + 0x3e) & 0x3f;
  param_1[0x1a] = ((uint)*(ushort *)((int)param_2 + 0x3e) << 0x17) >> 0x1d;
  param_1[0x1b] = ((uint)*(ushort *)((int)param_2 + 0x3e) << 0x13) >> 0x1c;
  param_1[0x1c] = (uint)(*(ushort *)((int)param_2 + 0x3e) >> 0xd);
  param_1[0x1d] = (ushort)param_2[0x10] & 0x1f;
  param_1[0x1e] = ((uint)(ushort)param_2[0x10] << 0x18) >> 0x1d;
  param_1[0x1f] = *(ushort *)((int)param_2 + 0x42) & 7;
  param_1[0x20] = ((uint)*(ushort *)((int)param_2 + 0x42) << 0x1a) >> 0x1d;
  param_1[0x21] = ((uint)*(ushort *)((int)param_2 + 0x42) << 0x16) >> 0x1c;
  param_1[0x22] = ((uint)*(ushort *)((int)param_2 + 0x42) << 0x11) >> 0x1b;
  param_1[0x23] = (ushort)param_2[0x11] & 0xf;
  param_1[0x24] = ((uint)(ushort)param_2[0x11] << 0x19) >> 0x1d;
  param_1[0x25] = ((uint)(ushort)param_2[0x11] << 0x15) >> 0x1c;
  param_1[0x26] = (uint)(ushort)((ushort)param_2[0x11] >> 0xb);
  param_1[0x27] = *(ushort *)((int)param_2 + 0x46) & 1;
  param_1[0x28] = ((uint)*(ushort *)((int)param_2 + 0x46) << 0x1b) >> 0x1c;
  param_1[0x29] = ((uint)*(ushort *)((int)param_2 + 0x46) << 0x16) >> 0x1b;
  param_1[0x2a] = ((uint)*(ushort *)((int)param_2 + 0x46) << 0x11) >> 0x1b;
  param_1[0x2b] = (uint)*(byte *)((int)param_2 + 0x2e);
  param_1[0x2c] = (uint)*(byte *)((int)param_2 + 0x2f);
  param_1[0x38] = (ushort)param_2[6] & 1;
  param_1[0x3b] = ((uint)(ushort)param_2[6] << 0x12) >> 0x1c;
  *(char *)(param_1 + 0x3c) = (char)(((ushort)param_2[6] & 0x4000) >> 0xe);
  *(byte *)((int)param_1 + 0xf1) = (byte)(*param_2 >> 8) & 1;
  *(char *)((int)param_1 + 0xf2) = (char)((*param_2 & 0x200) >> 9);
  *(byte *)((int)param_1 + 0xf3) = (byte)(short)param_2[0xc] & 1;
  param_1[0x3d] = (*param_2 << 0x14) >> 0x1e;
  param_1[0x3e] = (*param_2 << 0x12) >> 0x1e;
  param_1[0x3f] = (*param_2 << 0xc) >> 0x1c;
  param_1[0x40] = (*param_2 << 8) >> 0x1c;
  param_1[0x41] = (*param_2 << 1) >> 0x1d;
  param_1[0x45] = (*param_2 << 4) >> 0x1c;
  uVar1 = param_2[2];
  param_1[0x46] = param_2[1];
  param_1[0x47] = uVar1;
  param_1[0x2d] = *(uint *)((int)param_2 + 0x1a);
  param_1[0x2e] = *(uint *)((int)param_2 + 0x1e);
  param_1[0x2f] = *(uint *)((int)param_2 + 0x22);
  param_1[0x30] = *(uint *)((int)param_2 + 0x26);
  param_1[0x31] = *(uint *)((int)param_2 + 0x2a);
  *(undefined2 *)(param_1 + 0x32) = 0;
  FUN_0080c0d4(param_1 + 0x42,param_2 + 3);
  if (param_3 == 0) {
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
  }
  else {
    param_1[0x39] = ((uint)(ushort)param_2[6] << 0x1b) >> 0x1c;
    param_1[0x3a] = ((uint)(ushort)param_2[6] << 0x16) >> 0x1b;
  }
  if (param_4 == (undefined4 *)0x0) {
    *(undefined4 *)((int)param_1 + 0xca) = 0;
    *(undefined4 *)((int)param_1 + 0xce) = 0;
    *(undefined4 *)((int)param_1 + 0xd2) = 0;
    *(undefined4 *)((int)param_1 + 0xd6) = 0;
    *(undefined4 *)((int)param_1 + 0xda) = 0;
  }
  else {
    *(undefined4 *)((int)param_1 + 0xca) = *param_4;
    *(undefined4 *)((int)param_1 + 0xce) = param_4[1];
    *(undefined4 *)((int)param_1 + 0xd2) = param_4[2];
    *(undefined4 *)((int)param_1 + 0xd6) = param_4[3];
    *(undefined4 *)((int)param_1 + 0xda) = param_4[4];
  }
  *(undefined2 *)((int)param_1 + 0xde) = 0;
  return;
}


