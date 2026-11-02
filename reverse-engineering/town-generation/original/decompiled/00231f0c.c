/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00231f0c. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint acre_choose_variant(uint arg0,void *arg1)

{
  uint uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  ushort local_30 [10];
  
  uVar4 = 0;
  uVar3 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  local_30[4] = 0;
  local_30[5] = 0;
  local_30[6] = 0;
  local_30[7] = 0;
  do {
    uVar1 = FUN_00687d78(uVar3 & 0xffff);
    if ((arg0 == uVar1) && ((int)uVar4 < 7)) {
      puVar2 = local_30 + uVar4;
      uVar4 = uVar4 + 1;
      *puVar2 = (ushort)uVar3;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x164);
  uVar3 = rng_next_u32(arg1);
  return (uint)local_30[(int)((ulonglong)uVar4 * (ulonglong)uVar3 >> 0x20)];
}


