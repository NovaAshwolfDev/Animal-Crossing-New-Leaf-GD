/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061f908. Provisional types; not original source or a verified portable implementation. */

int FUN_0061f908(undefined4 param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar2 = FUN_0061da90(param_1,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_4 == 0) goto LAB_0061f9f0;
  uVar3 = FUN_007f37c0(param_1);
  bVar5 = uVar3 == (*(byte *)(param_3 + 0x14) & 1);
  iVar4 = FUN_006a905c();
  if ((iVar4 == 3) || (*(int *)(DAT_0061fa48 + 0x234) == 0)) goto LAB_0061f9f0;
  cVar1 = *DAT_0061fa4c;
  if (cVar1 == '\x02') {
    if (!bVar5) goto LAB_0061f9f0;
joined_r0x0061f9a4:
    if (0 < param_2) {
      param_2 = param_2 + 1;
      goto LAB_0061f9f0;
    }
  }
  else {
    if (cVar1 == '\x03') {
      if (!bVar5) goto LAB_0061f9f0;
    }
    else {
      if (cVar1 == '\x04') {
        if (bVar5) goto LAB_0061f9f0;
        goto joined_r0x0061f9a4;
      }
      if ((cVar1 != '\x05') || (bVar5)) goto LAB_0061f9f0;
    }
    if (param_2 < 0) {
LAB_0061f9f0:
      uVar3 = (uint)(*(byte *)(iVar2 + 0xb9) >> 1) + (*(byte *)(iVar2 + 0xba) & 1) * 0x80 + param_2;
      if (0xff < uVar3) {
        if (param_2 < 1) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0xff;
        }
      }
      *(byte *)(iVar2 + 0xb9) = *(byte *)(iVar2 + 0xb9) & 1 | (byte)(uVar3 << 1);
      *(byte *)(iVar2 + 0xba) = *(byte *)(iVar2 + 0xba) & 0xfe | (byte)((uVar3 & 0x80) >> 7);
      return param_2;
    }
  }
  return 0;
}


