/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0013b7c4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0013b7c4(byte *param_1,byte *param_2)

{
  short sVar1;
  byte *pbVar2;
  bool bVar3;
  bool bVar4;
  
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
  if ((*param_1 & 0x20) == 0) {
    if (param_2 != (byte *)0x0) {
      sVar1 = *(short *)param_2;
      bVar3 = sVar1 == 0;
      if (bVar3) {
        sVar1 = *(short *)(param_2 + 2);
      }
      if (bVar3 && sVar1 == 0) {
        sVar1 = *(short *)(param_2 + 4);
        bVar3 = sVar1 == 0;
        if (bVar3) {
          sVar1 = *(short *)(param_2 + 6);
        }
        bVar4 = bVar3 && sVar1 == 0;
        if (bVar3 && sVar1 == 0) {
          bVar4 = *(short *)(param_2 + 8) == 0;
        }
        if (bVar4) {
          return 0;
        }
      }
    }
    if (((((*param_2 & 0x20) == 0) && (*(short *)param_1 == *(short *)param_2)) &&
        (*(short *)(param_1 + 2) == *(short *)(param_2 + 2))) &&
       (((*(short *)(param_1 + 4) == *(short *)(param_2 + 4) &&
         (*(short *)(param_1 + 6) == *(short *)(param_2 + 6))) &&
        (*(short *)(param_1 + 8) == *(short *)(param_2 + 8))))) {
      return 1;
    }
  }
  return 0;
}


