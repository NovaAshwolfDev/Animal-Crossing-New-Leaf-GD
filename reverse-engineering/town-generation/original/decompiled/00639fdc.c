/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00639fdc. Provisional types; not original source or a verified portable implementation. */

void FUN_00639fdc(void)

{
  char *pcVar1;
  int *piVar2;
  undefined1 *puVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  
  iVar8 = DAT_0063a20c;
  if (*(int *)(DAT_0063a20c + 4) < 0) {
    town_prepare_candidate_seeds();
    *(undefined4 *)(iVar8 + 4) = 0;
    iVar6 = FUN_00636e3c();
    town_generate_until_accepted((void *)(iVar6 + 0x4da00),*(uint *)(iVar8 + 4));
  }
  piVar2 = DAT_0063a214;
  pcVar1 = DAT_0063a210;
  if (*DAT_0063a210 == '\0') {
    iVar8 = 0;
  }
  else {
    iVar8 = *DAT_0063a214;
  }
  iVar6 = FUN_00636e3c();
  uVar7 = FUN_002d57dc(iVar6 + 0x20,0);
  FUN_00757ee4(uVar7,iVar8 + 8);
  if (*pcVar1 == '\0') {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar2;
  }
  iVar6 = FUN_00636e3c();
  uVar7 = FUN_003c8434(iVar6 + 0x57e80,0);
  FUN_002925f8(uVar7,iVar8 + 0x9f18);
  FUN_00745594();
  FUN_00287424();
  iVar8 = FUN_00636e3c();
  pbVar9 = (byte *)(iVar8 + DAT_0063a218);
  bVar4 = FUN_00644ee8();
  *pbVar9 = *pbVar9 & 0xf0 | bVar4 & 0xf;
  cVar5 = FUN_00644f94();
  *pbVar9 = cVar5 << 4 | *pbVar9 & 0xf;
  iVar8 = FUN_00636e3c();
  FUN_0023d9a0(iVar8 + 0x5c720);
  FUN_00636e3c();
  FUN_006371b4();
  FUN_0063655c();
  FUN_001edb34();
  FUN_005801e8();
  if (*pcVar1 == '\0') {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar2;
  }
  iVar6 = FUN_00636e3c();
  uVar7 = FUN_002d57dc(iVar6 + 0x20,0);
  FUN_00757ee4(uVar7,iVar8 + 8);
  if (*pcVar1 == '\0') {
    iVar8 = 0;
  }
  else {
    iVar8 = *piVar2;
  }
  iVar6 = FUN_00636e3c();
  uVar7 = FUN_003c8434(iVar6 + 0x57e80,0);
  FUN_002925f8(uVar7,iVar8 + 0x9f18);
  iVar8 = FUN_00636e3c();
  FUN_001ed7c4(iVar8 + DAT_0063a21c);
  FUN_001ea94c();
  FUN_0063d2ac();
  FUN_0030c630();
  FUN_005eca74();
  FUN_0026c008();
  FUN_005e225c();
  puVar3 = DAT_0063a220;
  *DAT_0063a220 = 4;
  puVar3[1] = 0;
  puVar3[2] = 0;
  FUN_00636e3c();
  iVar8 = FUN_006378a0();
  FUN_00617e68(iVar8 + 4);
  return;
}


