/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0013b8cc. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0013b8cc(byte *param_1)

{
  short sVar1;
  byte *pbVar2;
  bool bVar3;
  
  if ((param_1 != (byte *)0x0) && (*(short *)param_1 == 0)) {
    sVar1 = *(short *)(param_1 + 2);
    bVar3 = sVar1 == 0;
    if (bVar3) {
      sVar1 = *(short *)(param_1 + 4);
    }
    if (bVar3 && sVar1 == 0) {
      pbVar2 = param_1;
      if (*(short *)(param_1 + 6) == 0) {
        pbVar2 = (byte *)(uint)*(ushort *)(param_1 + 8);
      }
      if (*(short *)(param_1 + 6) == 0 && pbVar2 == (byte *)0x0) {
        return 0;
      }
    }
  }
  if ((*param_1 & 0x20) != 0) {
    return 0;
  }
  return 1;
}


