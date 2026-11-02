/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007fede8. Provisional types; not original source or a verified portable implementation. */

int FUN_007fede8(ushort *param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  ushort *puVar4;
  
  iVar3 = FUN_005a20f8();
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
  return iVar3;
}


