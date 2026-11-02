/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0039cc1c. Provisional types; not original source or a verified portable implementation. */

void FUN_0039cc1c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint in_fpscr;
  float fVar5;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  fStack_28 = DAT_0039cd44;
  fStack_24 = DAT_0039cd44;
  iVar3 = 0;
  fStack_20 = DAT_0039cd44;
  uStack_1c = DAT_0039cd48;
  do {
    iVar1 = FUN_00699e70();
    psVar4 = (short *)((int)param_1 + iVar3 * 2);
    fVar5 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
    fStack_28 = fStack_28 + *(float *)(iVar1 + iVar3 * 0x24 + 0x10) * fVar5;
    iVar1 = FUN_00699e70();
    fVar5 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
    fStack_24 = fStack_24 + *(float *)(iVar1 + iVar3 * 0x24 + 0x14) * fVar5;
    iVar2 = FUN_00699e70();
    iVar1 = iVar3 * 0x24;
    iVar3 = iVar3 + 1;
    fVar5 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
    fStack_20 = fStack_20 + *(float *)(iVar2 + iVar1 + 0x18) * fVar5;
  } while (iVar3 < 0xc);
  FUN_005ca59c(&fStack_28);
  uStack_30 = 0xff;
  uStack_2f = 0;
  uStack_2e = 0;
  uStack_2d = 0;
  FUN_005c1070(&uStack_30);
  *(undefined1 *)((int)param_1 + 0x1a) = uStack_2d;
  *(undefined1 *)((int)param_1 + 0x1b) = uStack_2e;
  *(undefined1 *)(param_1 + 7) = uStack_2f;
  *(undefined1 *)((int)param_1 + 0x1d) = uStack_30;
  return;
}


