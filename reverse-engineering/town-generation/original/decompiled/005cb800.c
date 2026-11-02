/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005cb800. Provisional types; not original source or a verified portable implementation. */

void FUN_005cb800(void)

{
  longlong lVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined8 uVar10;
  uint local_18;
  int iStack_14;
  
  iVar4 = FUN_00636e3c();
  iVar5 = DAT_005cb84c;
  uVar8 = *(undefined4 *)(iVar4 + 0x5c724);
  *(undefined4 *)(DAT_005cb84c + 0x20) = *(undefined4 *)(iVar4 + 0x5c720);
  *(undefined4 *)(iVar5 + 0x24) = uVar8;
  iVar5 = FUN_00636e3c();
  iVar5 = FUN_007b2084(iVar5 + 0x5c720);
  if (iVar5 == 0) {
    bVar7 = *DAT_005cb850 & 0xfe;
  }
  else {
    bVar7 = *DAT_005cb850 | 1;
  }
  *DAT_005cb850 = bVar7;
  FUN_0010b810(&local_18);
  uVar8 = DAT_005cbbdc;
  pcVar2 = DAT_005cbbd8;
  lVar1 = (ulonglong)DAT_005cbbd4 * (ulonglong)(local_18 - *DAT_005cbbd0);
  iVar5 = (iStack_14 - (DAT_005cbbd0[1] + (uint)(local_18 < *DAT_005cbbd0))) * DAT_005cbbd4;
  *(int *)(DAT_005cbbd8 + 0x18) = (int)lVar1;
  *(int *)(pcVar2 + 0x1c) = iVar5 + (int)((ulonglong)lVar1 >> 0x20);
  FUN_005cc750(uVar8);
  piVar3 = DAT_005cbbe0;
  *(uint *)(pcVar2 + 0x10) = *(uint *)(pcVar2 + 0x20) + *(uint *)(pcVar2 + 0x18);
  *(uint *)(pcVar2 + 0x14) =
       *(int *)(pcVar2 + 0x24) + *(int *)(pcVar2 + 0x1c) +
       (uint)CARRY4(*(uint *)(pcVar2 + 0x20),*(uint *)(pcVar2 + 0x18));
  FUN_005cc750(piVar3);
  piVar3 = DAT_005cbbe0;
  if (*DAT_005cbbe0 < DAT_005cbbe4) {
    piVar9 = DAT_005cbbe0 + 6;
    iVar5 = DAT_005cbbe0[7];
    DAT_005cbbe0[2] = DAT_005cbbe0[8];
    *piVar3 = *piVar9;
    piVar3[1] = iVar5;
    uVar10 = FUN_005cc318();
    *(undefined8 *)(pcVar2 + 0x10) = uVar10;
    bVar7 = pcVar2[2] | 0x10;
    pbVar6 = (byte *)(pcVar2 + 2);
  }
  else {
    if (*DAT_005cbbe0 < DAT_005cbbe8) goto LAB_005cbaec;
    FUN_005cd1cc(DAT_005cbbe0);
    uVar10 = FUN_005cc318(DAT_005cbbe0);
    *(undefined8 *)(pcVar2 + 0x10) = uVar10;
    bVar7 = *DAT_005cbbec | 0x11;
    pbVar6 = DAT_005cbbec;
  }
  *pbVar6 = bVar7;
LAB_005cbaec:
  FUN_005cdc18(DAT_005cbbe0);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
  }
  if (*DAT_005cbbf0 == '\0') {
    iVar5 = FUN_007edfa8(DAT_005cbbfc);
    if (iVar5 == 0) {
      FUN_0063ac18(DAT_005cbbfc,DAT_005cbbe0);
      FUN_0063ac4c(DAT_005cbbfc);
    }
    FUN_007edb08(&local_18,DAT_005cbbfc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0063653c();
}


