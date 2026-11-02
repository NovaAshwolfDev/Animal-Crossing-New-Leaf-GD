/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00639344. Provisional types; not original source or a verified portable implementation. */

void FUN_00639344(void)

{
  undefined1 *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  
  town_prepare_candidate_seeds();
  iVar4 = FUN_00636e3c();
  town_generate_until_accepted((void *)(iVar4 + 0x4da00),0);
  FUN_00745594();
  FUN_00287424();
  FUN_0062c63c();
  FUN_00233804(DAT_00639488);
  iVar4 = FUN_00636e3c();
  pbVar6 = (byte *)(iVar4 + DAT_0063948c);
  bVar2 = FUN_00644ee8();
  *pbVar6 = *pbVar6 & 0xf0 | bVar2 & 0xf;
  cVar3 = FUN_00644f94();
  iVar4 = DAT_00639490;
  *pbVar6 = cVar3 << 4 | *pbVar6 & 0xf;
  local_10 = *(undefined4 *)(iVar4 + 0x38);
  local_20 = *(undefined4 *)(iVar4 + 0x28);
  uStack_1c = *(undefined4 *)(iVar4 + 0x2c);
  uStack_18 = *(undefined4 *)(iVar4 + 0x30);
  uStack_14 = *(undefined4 *)(iVar4 + 0x34);
  iVar4 = FUN_00636e3c();
  *(undefined1 *)(iVar4 + 6) = 0;
  uVar5 = FUN_00644ee8();
  iVar4 = FUN_00636e3c();
  FUN_00756fe8(iVar4 + DAT_00639494,&local_20,uVar5);
  iVar4 = FUN_00636e3c();
  FUN_0023d9a0(iVar4 + 0x5c720);
  FUN_00636e3c();
  FUN_006371b4();
  FUN_0063655c();
  FUN_001edb34();
  FUN_005801e8();
  FUN_0063d2ac();
  FUN_0030c630();
  FUN_005eca74();
  FUN_0026c008();
  FUN_005e225c();
  puVar1 = DAT_00639498;
  *DAT_00639498 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  FUN_00636e3c();
  iVar4 = FUN_006378a0();
  FUN_00617e68(iVar4 + 4);
  FUN_005edf7c();
  FUN_00598ebc();
  FUN_00639bb0(DAT_0063949c);
  FUN_00636e3c();
  iVar4 = FUN_006378a0();
  FUN_0061aad8(iVar4 + 4,0);
  return;
}


