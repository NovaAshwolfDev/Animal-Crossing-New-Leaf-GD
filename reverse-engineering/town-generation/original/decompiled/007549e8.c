/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007549e8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007549e8(ushort *param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  short *psVar6;
  ushort *puVar5;
  
  iVar3 = FUN_005a20f8();
  if (iVar3 != 0) {
    uVar4 = (uint)*(byte *)(iVar3 + 10);
    if (0x92 < uVar4) {
      uVar4 = 0;
    }
    if (uVar4 == param_2) {
      iVar3 = FUN_005a20f8(param_1);
      if (iVar3 == 0) {
        uVar4 = 0xffffffff;
      }
      else {
        bVar1 = *(byte *)(iVar3 + 10);
        uVar2 = *param_1;
        if (0x92 < bVar1) {
          bVar1 = 0;
        }
        puVar5 = (ushort *)FUN_005a19a0(bVar1);
        uVar4 = (uVar2 & 0xffff7fff) - (uint)*puVar5;
      }
      psVar6 = (short *)FUN_005a19a0(param_3);
      if (uVar4 < *(uint *)(psVar6 + 2)) {
        uVar2 = *psVar6 + (short)uVar4;
      }
      else {
        uVar2 = (ushort)DAT_00754a90;
      }
      *param_1 = *param_1 & 0x8000 | uVar2 & 0x7fff;
      return 1;
    }
  }
  return 0;
}


