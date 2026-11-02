/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00110990. Provisional types; not original source or a verified portable implementation. */

void FUN_00110990(int *param_1,int *param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = (int)((ulonglong)((longlong)DAT_00110afc * (longlong)(param_4 + -0x3c)) >> 0x20);
  iVar5 = (iVar5 >> 0xf) - (iVar5 >> 0x1f);
  uVar6 = DAT_00110b00 * iVar5 + param_4 + -0x3c;
  if ((int)uVar6 < 0) {
    iVar5 = iVar5 + -1;
    uVar6 = uVar6 - DAT_00110b00;
  }
  iVar1 = (int)((longlong)(int)uVar6 * (longlong)DAT_00110b04 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar2 = (iVar1 >> 0xf) - (iVar1 >> 0x1f);
  iVar1 = (int)((longlong)(int)uVar6 * (longlong)DAT_00110b04 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar7 = uVar6 + ((iVar1 >> 0xf) - (iVar1 >> 0x1f)) * DAT_00110b08 * 4;
  iVar1 = (int)((ulonglong)((longlong)DAT_00110b0c * (longlong)iVar7) >> 0x20);
  iVar3 = (iVar1 >> 7) - (iVar1 >> 0x1f);
  uVar6 = iVar3 * DAT_00110b10 + iVar7;
  iVar1 = (int)((longlong)(int)uVar6 * (longlong)DAT_00110b14 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar7 = (iVar1 >> 8) - (iVar1 >> 0x1f);
  iVar1 = (int)((longlong)(int)uVar6 * (longlong)DAT_00110b14 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar4 = ((iVar1 >> 8) - (iVar1 >> 0x1f)) * -0x16d + uVar6;
  uVar6 = iVar4 * 5 + 2;
  iVar1 = (int)((longlong)(int)uVar6 * (longlong)DAT_00110b18 + ((ulonglong)uVar6 << 0x20) >> 0x20);
  iVar1 = (iVar1 >> 7) - (iVar1 >> 0x1f);
  iVar3 = iVar5 * 400 + iVar2 * 100 + iVar3 * 4 + iVar7;
  iVar5 = (int)((ulonglong)((longlong)DAT_00110b1c * (longlong)(iVar1 * 0x99 + 2)) >> 0x20);
  iVar8 = iVar3 + 2000;
  iVar5 = (iVar4 - ((iVar5 >> 1) - (iVar5 >> 0x1f))) + 1;
  if (iVar7 == 4 || iVar2 == 4) {
    iVar1 = 0xb;
    iVar5 = 0x1d;
    iVar8 = iVar3 + 1999;
  }
  else if (iVar1 < 10) {
    iVar1 = iVar1 + 3;
    goto LAB_00110adc;
  }
  iVar1 = iVar1 + -9;
  iVar8 = iVar8 + 1;
LAB_00110adc:
  if (param_1 != (int *)0x0) {
    *param_1 = iVar8;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar1;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar5;
  }
  return;
}


