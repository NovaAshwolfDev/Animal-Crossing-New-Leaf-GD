/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007553f4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007553f4(ushort *param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  ushort local_250;
  ushort local_24e;
  undefined1 auStack_248 [568];
  ushort *puVar4;
  
  param_1[1] = param_1[1] & 0x3fff;
  if ((*param_1 & 0x7fff) < 0xfe) {
    FUN_00754bf4(&local_250,param_1);
    *param_1 = local_250;
    param_1[1] = local_24e;
  }
  iVar3 = FUN_005a20f8(param_1);
  if (((iVar3 != 0) && (*(byte *)(iVar3 + 10) < 0x93)) && (*(byte *)(iVar3 + 10) == 0x3f)) {
    iVar3 = FUN_005a20f8(param_1);
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10);
      uVar1 = *param_1;
      if (0x92 < bVar2) {
        bVar2 = 0;
      }
      puVar4 = (ushort *)FUN_005a19a0(bVar2);
      iVar3 = (uVar1 & 0xffff7fff) - (uint)*puVar4;
    }
    FUN_0079c070(auStack_248);
    FUN_0079bc00(auStack_248,0xe);
    FUN_001aebcc(&local_250,iVar3,auStack_248);
    *param_1 = local_250;
    param_1[1] = local_24e;
  }
  puVar4 = DAT_00755564;
  if ((*param_1 & 0x7fff) == 0x2000) {
    *param_1 = *DAT_00755564;
    param_1[1] = puVar4[1];
  }
  if ((((*param_1 & 0x7fff) != 0x7ffe) && ((*param_1 & 0x6000) != 0x4000)) &&
     ((iVar3 = FUN_005a2164(param_1), iVar3 == 0 || (-1 < (int)((uint)*(byte *)(iVar3 + 1) << 0x1b))
      ))) {
    return 0;
  }
  param_1[1] = param_1[1] & 0x3fff;
  return 1;
}


