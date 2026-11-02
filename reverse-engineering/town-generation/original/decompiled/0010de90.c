/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0010de90. Provisional types; not original source or a verified portable implementation. */

void FUN_0010de90(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_28;
  uint local_24;
  uint local_20 [2];
  
  iVar2 = DAT_0010e014;
  iVar1 = FUN_0010f710(*param_2 + DAT_0010e00c,
                       param_2[1] + DAT_0010e010 + (uint)CARRY4(*param_2,DAT_0010e00c),DAT_0010e014,
                       0);
  iVar1 = iVar1 + DAT_0010e018;
  FUN_00110990(&local_28,&local_24,local_20,iVar1);
  uVar7 = iVar1 + 6;
  iVar1 = (int)((longlong)(int)uVar7 * (longlong)DAT_0010e01c + ((ulonglong)uVar7 << 0x20) >> 0x20);
  uVar8 = uVar7 + ((iVar1 >> 2) - (iVar1 >> 0x1f)) * -7 + 7;
  iVar5 = (int)((longlong)(int)uVar8 * (longlong)DAT_0010e01c + ((ulonglong)uVar8 << 0x20) >> 0x20);
  iVar1 = (int)((ulonglong)((longlong)DAT_0010e020 * (longlong)iVar2) >> 0x20);
  iVar3 = (int)((ulonglong)((longlong)DAT_0010e024 * (longlong)iVar2) >> 0x20);
  uVar7 = (iVar3 >> 0xe) - (iVar3 >> 0x1f);
  iVar6 = (int)((longlong)(int)uVar7 * (longlong)DAT_0010e028 + ((ulonglong)uVar7 << 0x20) >> 0x20);
  iVar3 = (int)((ulonglong)((longlong)DAT_0010e02c * (longlong)iVar2) >> 0x20);
  uVar4 = (iVar3 >> 6) - (iVar3 >> 0x1f);
  iVar3 = (int)((longlong)(int)uVar4 * (longlong)DAT_0010e028 + ((ulonglong)uVar4 << 0x20) >> 0x20);
  param_1[2] = (uVar4 + ((iVar3 >> 5) - (iVar3 >> 0x1f)) * -0x3c) * 0x100 & 0xff00 |
               uVar7 + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * -0x3c & 0xff |
               (iVar2 + uVar4 * -1000) * 0x10000;
  *param_1 = local_28;
  param_1[1] = (((iVar5 >> 2) - (iVar5 >> 0x1f)) * -7 + uVar8) * 0x10000 & 0xff0000 |
               local_24 & 0xff | (local_20[0] & 0xff) << 8 |
               ((iVar1 >> 0x14) - (iVar1 >> 0x1f)) * 0x1000000;
  return;
}


