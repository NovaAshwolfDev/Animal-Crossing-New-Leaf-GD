/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002d87d8. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void town_prepare_candidate_seeds(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  
  puVar1 = DAT_002d8854;
  uVar7 = 0;
  do {
    puVar8 = DAT_002d8854;
    if (uVar7 < 4) {
      puVar8 = puVar1 + uVar7;
    }
    uVar3 = FUN_0011df38(0x7fffffff);
    uVar7 = uVar7 + 1;
    *puVar8 = uVar3;
  } while (uVar7 < 4);
  iVar4 = FUN_0011df38(100);
  puVar2 = DAT_002d8858;
  puVar5 = DAT_002d8858 + 1;
  puVar6 = DAT_002d8858 + 2;
  if (0x32 < iVar4) {
    *DAT_002d8858 = 0;
  }
  puVar9 = puVar2 + 3;
  if (iVar4 < 0x33) {
    *puVar2 = 1;
    *puVar5 = 0;
    *puVar6 = 1;
    *puVar9 = 0;
  }
  else {
    *puVar5 = 1;
    *puVar6 = 0;
    *puVar9 = 1;
  }
  return;
}


