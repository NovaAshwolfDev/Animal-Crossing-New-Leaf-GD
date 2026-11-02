/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007e5a64. Provisional types; not original source or a verified portable implementation. */

void FUN_007e5a64(uint *param_1,int param_2,short *param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7)

{
  byte bVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  short *psVar7;
  int iVar8;
  byte *pbVar9;
  uint *puVar10;
  bool bVar11;
  undefined8 uVar12;
  uint local_48;
  undefined1 local_44;
  int local_40;
  int local_3c;
  uint *puStack_34;
  int iStack_30;
  short *local_2c;
  undefined4 uStack_28;
  
  puStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  FUN_0080c060(&local_48);
  uVar3 = FUN_00623f24(local_2c,param_2,10);
  local_3c = 0;
  if (((uVar3 < 10) &&
      ((local_3c = param_2 + uVar3 * DAT_007e60a8 * 8, local_3c == 0 ||
       (iVar4 = FUN_007f3768(local_3c), iVar4 == 0)))) || (local_3c == 0)) goto LAB_007e6090;
  if (param_5 == 0) {
    iVar4 = FUN_00636e3c();
    iVar4 = FUN_002d59f8(iVar4 + 0x20,local_2c);
  }
  else {
    iVar4 = FUN_0062ef88();
  }
  if (iVar4 != 0) {
    iVar5 = FUN_007eb480(iVar4 + 0x8acc);
    if (((iVar5 != 0) && (*(byte *)(iVar4 + 0x8ad5) < 3)) &&
       (iVar5 = FUN_007ebc30(iVar4 + 0x8acc,local_2c), iVar5 != 0)) {
      bVar1 = *(byte *)(iVar4 + 0x8ad4);
      if (bVar1 < 0x21) {
        pbVar9 = (byte *)((int)&local_48 + (uint)(bVar1 >> 3));
        *pbVar9 = *pbVar9 | (byte)(1 << (bVar1 & 7));
      }
    }
  }
  uVar6 = FUN_007e5994(param_2,local_2c);
  if (((uVar6 != 3) && (*(byte *)(param_2 + 0x172ff) < 4)) && ((uVar6 & -param_6) == 0)) {
    bVar1 = *(byte *)(param_2 + 0x172fe);
    if (bVar1 < 0x21) {
      pbVar9 = (byte *)((int)&local_48 + (uint)(bVar1 >> 3));
      *pbVar9 = *pbVar9 | (byte)(1 << (bVar1 & 7));
    }
  }
  if ((*(byte *)(param_2 + 0x17262) & 0xf) == 0) {
    uVar6 = (uint)*(char *)(DAT_007e60ac + param_2);
  }
  else {
    uVar6 = 0xffffffff;
  }
  if (uVar6 == uVar3) {
    local_48 = local_48 | 0x80000;
  }
  iVar4 = FUN_006a908c();
  if (iVar4 == 0) goto LAB_007e6090;
  if (param_5 == 0) {
    iVar4 = FUN_00636e3c();
    iVar4 = FUN_002d5d30(iVar4 + 0x20,local_2c,param_4);
  }
  else {
    iVar4 = FUN_0062ef88();
  }
  if ((((iVar4 != 0) && (local_40 = FUN_007581d8(iVar4,local_2c,param_4), local_40 != 0)) &&
      (iVar4 = FUN_007eb480(), iVar4 != 0)) &&
     ((param_6 == 0 ||
      ((((((psVar7 = (short *)FUN_007ec4f4(local_40,0), psVar2 = local_2c,
           psVar7[0x16] == local_2c[0x16] && (*psVar7 == *local_2c)) &&
          ((char)psVar7[10] == (char)local_2c[10])) &&
         ((iVar4 = FUN_001011c4(psVar7 + 1,local_2c + 1,0x12), iVar4 == 0 &&
          (psVar7[0xb] == psVar2[0xb])))) && ((char)psVar7[0x15] == (char)psVar2[0x15])) &&
       (iVar4 = FUN_001011c4(psVar7 + 0xc,psVar2 + 0xc,0x12), iVar4 == 0)))))) {
    bVar1 = *(byte *)(local_40 + 8);
    if (bVar1 < 0x21) {
      pbVar9 = (byte *)((int)&local_48 + (uint)(bVar1 >> 3));
      *pbVar9 = *pbVar9 | (byte)(1 << (bVar1 & 7));
    }
  }
  if (param_5 == 0) {
    iVar4 = FUN_00636e3c();
    iVar4 = FUN_002d5ab4(iVar4 + 0x20,local_2c);
  }
  else {
    iVar4 = FUN_0062ef88();
  }
  if (((iVar4 != 0) && (iVar5 = FUN_007eb480(iVar4 + 0x8a10), iVar5 != 0)) &&
     ((*(char *)(iVar4 + 0x8a19) == '\0' && ((int)*(char *)(iVar4 + 0x8a1f) == uVar3)))) {
    bVar1 = *(byte *)(iVar4 + 0x8a18);
    if (bVar1 < 0x21) {
      pbVar9 = (byte *)((int)&local_48 + (uint)(bVar1 >> 3));
      *pbVar9 = *pbVar9 | (byte)(1 << (bVar1 & 7));
    }
  }
  if (param_5 == 0) {
    iVar4 = FUN_00636e3c();
    iVar4 = FUN_002d5b8c(iVar4 + 0x20,local_2c);
  }
  else {
    iVar4 = FUN_0062ef88();
  }
  if ((((iVar4 != 0) && (iVar5 = FUN_007eb480(iVar4 + 0x8a20), iVar5 != 0)) &&
      (*(byte *)(iVar4 + 0x8a29) < 2)) && ((int)*(char *)(iVar4 + 0x8a2f) == uVar3)) {
    bVar1 = *(byte *)(iVar4 + 0x8a28);
    if (bVar1 < 0x21) {
      pbVar9 = (byte *)((int)&local_48 + (uint)(bVar1 >> 3));
      *pbVar9 = *pbVar9 | (byte)(1 << (bVar1 & 7));
    }
  }
  if (param_5 == 0) {
    iVar4 = FUN_00636e3c();
    iVar4 = FUN_002d5c64(iVar4 + 0x20,local_2c);
  }
  else {
    iVar4 = FUN_0062ef88();
  }
  if (((iVar4 != 0) && (iVar5 = FUN_007eb480(iVar4 + 0x8a30), iVar5 != 0)) &&
     (((int)*(char *)(iVar4 + 0x8a44) == uVar3 && (*(char *)(iVar4 + 0x8a39) == '\0')))) {
    bVar1 = *(byte *)(iVar4 + 0x8a38);
    if (bVar1 < 0x21) {
      pbVar9 = (byte *)((int)&local_48 + (uint)(bVar1 >> 3));
      *pbVar9 = *pbVar9 | (byte)(1 << (bVar1 & 7));
    }
  }
  if (param_5 == 0) {
    iVar4 = FUN_00636e3c();
    iVar4 = FUN_002d5924(iVar4 + 0x20,local_2c);
  }
  else {
    iVar4 = FUN_0062ef88();
  }
  if (iVar4 != 0) {
    iVar5 = FUN_007eb480(iVar4 + 0x8abe);
    if (iVar5 != 0) {
      uVar6 = (uint)*(char *)(iVar4 + 0x8ac9);
      if (uVar6 == uVar3) {
        uVar6 = FUN_007eb480(iVar4 + 0x8abe);
        bVar11 = uVar6 == 0;
        if (!bVar11) {
          uVar6 = (uint)*(byte *)(iVar4 + 0x8ac7);
        }
        if (bVar11 || uVar6 == 3) goto LAB_007e5f74;
        bVar1 = *(byte *)(iVar4 + 0x8ac6);
      }
      else {
LAB_007e5f74:
        if (param_6 == 0) {
          uVar6 = (uint)*(char *)(iVar4 + 0x8aca);
        }
        if ((param_6 != 0 || uVar6 != uVar3) ||
           (*(char *)(iVar4 + 0x8ac7) != '\x01' && *(char *)(iVar4 + 0x8ac7) != '\x02'))
        goto LAB_007e5fa4;
        bVar1 = *(byte *)(iVar4 + 0x8ac6);
      }
      if (bVar1 < 0x21) {
        pbVar9 = (byte *)((int)&local_48 + (uint)(bVar1 >> 3));
        *pbVar9 = *pbVar9 | (byte)(1 << (bVar1 & 7));
      }
    }
  }
LAB_007e5fa4:
  uVar12 = FUN_007e5844(param_2,local_2c);
  uVar6 = (uint)uVar12;
  puVar10 = (uint *)(undefined1 *)((ulonglong)uVar12 >> 0x20);
  if (uVar6 != 0x21) {
    puVar10 = &local_48;
  }
  if (uVar6 < 0x21) {
    *(byte *)((int)puVar10 + (uVar6 >> 3)) =
         *(byte *)((int)puVar10 + (uVar6 >> 3)) | (byte)(1 << (uVar6 & 7));
  }
  iVar4 = FUN_0062ef88();
  if (iVar4 != 0) {
    iVar5 = FUN_007eade0(param_2 + 0x1730c,local_2c,iVar4);
    if ((((iVar5 != 0) && (iVar8 = FUN_007eb480(), iVar8 != 0)) ||
        (iVar4 = FUN_007eafb4(param_2 + 0x1730c,iVar4,local_3c), iVar4 != 0)) &&
       ((param_7 == 0 || ((iVar5 != 0 && (iVar4 = FUN_007eaaa8(iVar5), iVar4 != 0)))))) {
      local_48 = local_48 | 8;
    }
  }
  uVar6 = (uint)*(char *)(DAT_007e60b0 + param_2 + 0xb);
  if ((uVar6 != 0xffffffff) && (uVar6 == uVar3)) {
    local_48 = local_48 | 0x2000;
  }
LAB_007e6090:
  *param_1 = local_48;
  *(undefined1 *)(param_1 + 1) = local_44;
  return;
}


