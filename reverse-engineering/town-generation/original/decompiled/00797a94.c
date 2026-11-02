/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00797a94. Provisional types; not original source or a verified portable implementation. */

void FUN_00797a94(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  
  iVar1 = FUN_0062ef88();
  if (iVar1 == 0) {
    return;
  }
  switch(param_1) {
  case 0:
    param_2 = *(byte *)(iVar1 + 0x89f9) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x89f9) = (char)param_2;
    break;
  case 1:
    param_2 = *(byte *)(iVar1 + 0x89fa) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x89fa) = (char)param_2;
    return;
  case 2:
    param_2 = *(byte *)(iVar1 + 0x89fb) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x89fb) = (char)param_2;
    return;
  case 3:
    param_2 = *(byte *)(iVar1 + 0x89fc) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x89fc) = (char)param_2;
    return;
  case 4:
    param_2 = *(byte *)(iVar1 + 0x89fd) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x89fd) = (char)param_2;
    return;
  case 5:
    param_2 = *(byte *)(iVar1 + 0x89fe) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x89fe) = (char)param_2;
    return;
  case 6:
    uVar4 = param_2 + (uint)*(byte *)(iVar1 + 0x8a00) * 0x100 +
                      (uint)*(byte *)(iVar1 + 0x89ff) * 0x10000 + (uint)*(byte *)(iVar1 + 0x8a01);
    iVar2 = iVar1 + 0x89fa;
    if (param_2 < 0x1000000 && uVar4 < 0x1000000) {
      *(char *)(iVar1 + 0x8a01) = (char)uVar4;
      *(char *)(iVar1 + 0x8a00) = (char)(uVar4 >> 8);
      *(char *)(iVar1 + 0x89ff) = (char)(uVar4 >> 0x10);
      return;
    }
    uVar3 = 0xff;
    *(undefined1 *)(iVar1 + 0x8a01) = 0xff;
    *(undefined1 *)(iVar1 + 0x8a00) = 0xff;
LAB_00797c00:
    *(undefined1 *)(iVar2 + 5) = uVar3;
    return;
  case 7:
    uVar4 = param_2 + (uint)*(byte *)(iVar1 + 0x8a03) * 0x100 +
                      (uint)*(byte *)(iVar1 + 0x8a02) * 0x10000 + (uint)*(byte *)(iVar1 + 0x8a04);
    if (param_2 < 0x1000000 && uVar4 < 0x1000000) {
      *(char *)(iVar1 + 0x8a04) = (char)uVar4;
      *(char *)(iVar1 + 0x8a03) = (char)(uVar4 >> 8);
      *(char *)(iVar1 + 0x8a02) = (char)(uVar4 >> 0x10);
      return;
    }
    *(undefined1 *)(iVar1 + 0x8a04) = 0xff;
    *(undefined1 *)(iVar1 + 0x8a03) = 0xff;
    *(undefined1 *)(iVar1 + 0x8a02) = 0xff;
    return;
  case 8:
    param_2 = *(byte *)(iVar1 + 0x8a05) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x8a05) = (char)param_2;
    return;
  case 9:
    param_2 = *(byte *)(iVar1 + 0x8a06) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x8a06) = (char)param_2;
    return;
  case 10:
    param_2 = *(byte *)(iVar1 + 0x8a07) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x8a07) = (char)param_2;
    return;
  case 0xb:
    param_2 = *(byte *)(iVar1 + 0x8a08) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x8a08) = (char)param_2;
    return;
  case 0xc:
    param_2 = *(byte *)(iVar1 + 0x8a09) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x8a09) = (char)param_2;
    return;
  case 0xd:
    param_2 = *(byte *)(iVar1 + 0x8a0a) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x8a0a) = (char)param_2;
    return;
  case 0xe:
    param_2 = *(byte *)(iVar1 + 0x8a0b) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x8a0b) = (char)param_2;
    return;
  case 0xf:
    param_2 = *(byte *)(iVar1 + 0x8a0c) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x8a0c) = (char)param_2;
    return;
  case 0x10:
    iVar2 = iVar1 + 0x8a08;
    uVar4 = (uint)*(byte *)(iVar1 + 0x8a0e) + (uint)*(byte *)(iVar1 + 0x8a0d) * 0x100;
    param_2 = param_2 + uVar4;
    bVar5 = 0xffff < param_2;
    if (bVar5) {
      param_2 = 0xff;
    }
    else {
      uVar4 = param_2 >> 8;
    }
    uVar3 = (undefined1)param_2;
    *(undefined1 *)(iVar1 + 0x8a0e) = uVar3;
    if (bVar5) goto LAB_00797c00;
    *(char *)(iVar1 + 0x8a0d) = (char)uVar4;
    break;
  case 0x11:
    param_2 = *(byte *)(iVar1 + 0x8a0f) + param_2;
    if (0xff < param_2) {
      param_2 = 0xff;
    }
    *(char *)(iVar1 + 0x8a0f) = (char)param_2;
    return;
  }
  return;
}


