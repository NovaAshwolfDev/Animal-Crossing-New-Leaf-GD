/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0063918c. Provisional types; not original source or a verified portable implementation. */

void FUN_0063918c(void)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = DAT_0063931c;
  if (*(int *)(DAT_0063931c + 4) < 0) {
    town_prepare_candidate_seeds();
    *(undefined4 *)(iVar5 + 4) = 0;
    iVar4 = FUN_00636e3c();
    town_generate_until_accepted((void *)(iVar4 + 0x4da00),*(uint *)(iVar5 + 4));
  }
  FUN_00745594();
  FUN_00287424();
  iVar5 = FUN_00636e3c();
  pbVar6 = (byte *)(iVar5 + DAT_00639320);
  bVar2 = FUN_00644ee8();
  *pbVar6 = *pbVar6 & 0xf0 | bVar2 & 0xf;
  cVar3 = FUN_00644f94();
  *pbVar6 = cVar3 << 4 | *pbVar6 & 0xf;
  iVar5 = FUN_00631618();
  if (iVar5 != 0) {
    FUN_00292480();
    FUN_001ea938();
  }
  FUN_003e9de4();
  iVar5 = FUN_00636e3c();
  FUN_0023d9a0(iVar5 + 0x5c720);
  FUN_00636e3c();
  FUN_006371b4();
  FUN_0063655c();
  FUN_001edb34();
  FUN_005801e8();
  iVar5 = FUN_00636e3c();
  FUN_001ed7c4(iVar5 + DAT_00639324);
  FUN_0063d2ac();
  FUN_0030c630();
  FUN_005eca74();
  FUN_0026c008();
  FUN_005e225c();
  puVar1 = DAT_00639328;
  *DAT_00639328 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_00636e3c();
  iVar5 = FUN_006378a0();
  FUN_00617e68(iVar5 + 4);
  return;
}


