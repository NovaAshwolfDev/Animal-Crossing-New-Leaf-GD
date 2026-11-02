/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002d79bc. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void town_generate_until_accepted(void *arg0,uint arg1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_18 [8];
  
  uVar2 = FUN_0011a378(*DAT_002d7b1c);
  if (*(int *)(DAT_002d7b20 + 4) == 0) {
    FUN_008a5160(DAT_002d7b20,uVar2,0x32000);
  }
  FUN_008a4fa8(auStack_18,DAT_002d7b20,DAT_002d7b24,0);
  FUN_0060f038(DAT_002d7b28,auStack_18);
  FUN_007e51ac(DAT_002d7b28);
  FUN_003d56fc(DAT_002d7b30,DAT_002d7b2c,uVar2);
  FUN_003d56fc(DAT_002d7b38,DAT_002d7b34,uVar2);
  do {
    uVar3 = town_candidate_step(arg0,arg1);
    iVar1 = DAT_002d7b20;
  } while (uVar3 == 0);
  for (iVar4 = *(int *)(DAT_002d7b20 + 0x13c); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
    FUN_0060f000(iVar4 + 0xc);
    FUN_00121a30(iVar4 + 0x14);
  }
  for (iVar4 = *(int *)(iVar1 + 0x154); iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
    FUN_0060f000(iVar4 + 0xc);
    FUN_00121a30(iVar4 + 0x14);
  }
  FUN_001193a8(iVar1 + 0x138);
  FUN_001193a8(iVar1 + 0x144);
  FUN_001193a8(iVar1 + 0x150);
  FUN_00124be4(iVar1 + 0x144,iVar1 + 8);
  FUN_00113b48(iVar1);
  FUN_003d5780(DAT_002d7b30);
  FUN_003d5780(DAT_002d7b38);
  return;
}


