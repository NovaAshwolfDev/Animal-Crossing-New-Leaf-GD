/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005be4f0. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void rng_seed_u32(void *arg0,uint arg1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = DAT_005be544;
  uVar3 = (arg1 ^ arg1 >> 0x1e) * DAT_005be544 + 1;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * DAT_005be544 + 2;
  *(uint *)arg0 = uVar3;
  *(uint *)((int)arg0 + 4) = uVar4;
  iVar2 = DAT_005be544;
  uVar3 = (uVar4 ^ uVar4 >> 0x1e) * iVar1 + 3;
  *(uint *)((int)arg0 + 8) = uVar3;
  *(uint *)((int)arg0 + 0xc) = (uVar3 ^ uVar3 >> 0x1e) * iVar2 + 4;
  return;
}


