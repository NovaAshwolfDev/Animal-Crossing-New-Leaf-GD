/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079aedc. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Removing unreachable block (ram,0x0079b2f0) */
/* WARNING: Removing unreachable block (ram,0x0079b1e0) */
/* WARNING: Removing unreachable block (ram,0x0079b080) */
/* WARNING: Removing unreachable block (ram,0x0079b0f4) */
/* WARNING: Removing unreachable block (ram,0x0079b094) */
/* WARNING: Removing unreachable block (ram,0x0079b144) */
/* WARNING: Removing unreachable block (ram,0x0079b09c) */
/* WARNING: Removing unreachable block (ram,0x0079b0a4) */
/* WARNING: Removing unreachable block (ram,0x0079b194) */
/* WARNING: Removing unreachable block (ram,0x0079b268) */
/* WARNING: Removing unreachable block (ram,0x0079b374) */
/* WARNING: Removing unreachable block (ram,0x0079afa4) */
/* WARNING: Removing unreachable block (ram,0x0079b078) */

undefined1 * FUN_0079aedc(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [8];
  
  iVar3 = FUN_00636e3c();
  FUN_001b5c6c(auStack_24,DAT_0079b448 + iVar3);
  FUN_00756d40(auStack_20,0x2000);
  iVar3 = FUN_005a20f8(auStack_20);
  iVar4 = FUN_00636e3c();
  uVar2 = DAT_0079b450;
  bVar1 = *(byte *)(iVar4 + DAT_0079b44c);
  uVar5 = 0;
  do {
    bVar6 = *(byte *)(iVar3 + 0xd);
    if (0xad < bVar6) {
      bVar6 = 0;
    }
    if ((bVar6 == 0x33) &&
       ((bVar1 >> 4 == 0 || (-1 < (int)((uint)*(byte *)(iVar3 + 0x1f) << 0x19))))) {
      *(uint *)(param_1 + (uVar5 >> 5) * 4) =
           *(uint *)(param_1 + (uVar5 >> 5) * 4) | 1 << (uVar5 & 0x1f);
    }
    uVar5 = uVar5 + 1;
    iVar3 = iVar3 + 0x22;
  } while (uVar5 < uVar2);
  return auStack_24;
}


