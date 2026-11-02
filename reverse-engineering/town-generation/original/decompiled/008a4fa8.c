/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 008a4fa8. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_008a4fa8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  int local_e8;
  undefined1 *local_e4;
  undefined4 uStack_e0;
  undefined1 local_dc [79];
  undefined1 uStack_8d;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [8];
  char local_70 [32];
  undefined1 auStack_50 [36];
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar1 = DAT_008a5150;
  local_e4 = local_dc;
  uStack_e0 = 0x50;
  uStack_8d = 0;
  local_dc[0] = 0;
  local_e8 = DAT_008a5154;
  uStack_2c = param_1;
  iStack_28 = param_2;
  uStack_24 = param_3;
  uStack_20 = param_4;
  uVar3 = FUN_005ad830(auStack_50,&local_e8);
  uVar3 = FUN_005a9cd4(uVar3,&DAT_008a5158);
  iVar4 = FUN_005a9cd4(uVar3,param_3);
  iVar5 = FUN_005a9714(iVar4,local_70);
  if (iVar5 != 0) {
    if (local_70[0] == '\0') {
      pcVar7 = (char *)0x0;
    }
    else {
      pcVar7 = local_70;
    }
    FUN_005a98f4(&uStack_20,pcVar7,*(undefined4 *)(iVar4 + 4));
  }
  FUN_005a9c0c(iVar4);
  (**(code **)(local_e8 + 8))(&local_e8);
  puVar2 = local_e4;
  uVar3 = FUN_00301bac(local_e4);
  uVar3 = FUN_005cafa8(puVar2,uVar3,0xffffffff);
  uVar6 = FUN_0060f024(auStack_78);
  FUN_0060eff0(uVar6,uVar3);
  iVar4 = *(int *)(param_2 + 0x13c);
  while( true ) {
    if (iVar4 == 0) {
      iVar4 = *(int *)(param_2 + 0x148);
      local_80 = uVar1;
      uStack_7c = param_3;
      FUN_005564f8(iVar4 + 0x14,&local_80,*(undefined4 *)(param_2 + 4),0x80);
      FUN_0060f038(iVar4 + 0xc,auStack_78);
      FUN_00124ab0(param_2 + 0x144,iVar4);
      FUN_00124be4(param_2 + 0x138,iVar4);
      FUN_0060f010(param_1,iVar4 + 0xc);
      return auStack_78;
    }
    iVar5 = FUN_007e51bc(auStack_78,iVar4 + 0xc);
    if (iVar5 != 0) break;
    iVar4 = *(int *)(iVar4 + 8);
  }
  FUN_0060f010(param_1,auStack_78);
  return auStack_78;
}


