/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005be58c. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint rng_next_u32(void *arg0)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* WARNING: Load size is inaccurate */
  uVar4 = *(undefined4 *)((int)arg0 + 4);
  uVar2 = *(uint *)((int)arg0 + 0xc);
  uVar3 = *(undefined4 *)((int)arg0 + 8);
  uVar1 = *arg0 ^ *arg0 << 0xb;
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  *(uint *)((int)arg0 + 0xc) = uVar1;
  *(uint *)((int)arg0 + 8) = uVar2;
  *(undefined4 *)((int)arg0 + 4) = uVar3;
  *(undefined4 *)arg0 = uVar4;
  return uVar1;
}


