/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0063a228. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_0063a228(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  bool bVar8;
  undefined1 auStack_240 [520];
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  
  psVar7 = (short *)(param_1 + 0x8c04);
  if ((param_2 == 0) && (*psVar7 != 0)) {
    cVar1 = *(char *)(param_1 + 0x8c06);
    bVar8 = cVar1 != '\0';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 0x8c07);
    }
    if ((bVar8 && cVar1 != '\0') &&
       (puVar3 = (undefined1 *)FUN_007ec8b8(psVar7,1), puVar3 != (undefined1 *)0x0)) {
      return puVar3;
    }
  }
  FUN_00636ec8(psVar7,1);
  FUN_001f2048(param_1);
  FUN_0023d174(param_1 + 0x9c);
  local_2c = param_1 + 0x4468;
  FUN_00331ec4();
  FUN_003324cc(param_1 + 0x4494);
  FUN_00292d00(param_1 + 0x44e0);
  FUN_001f1c44();
  FUN_00293604(param_1 + 18000);
  FUN_002d686c(param_1 + 0x8a6c);
  FUN_00365d0c(param_1 + 0x8a7e);
  FUN_001f0be0(param_1 + 0x8aa6,param_2);
  FUN_0023cbb8(param_1 + 0x8b68,0);
  FUN_00332310(param_1 + 0x8bf8);
  FUN_005cca58(&local_38);
  iVar6 = local_34;
  uVar2 = local_38;
  cVar1 = (char)local_34;
  if ((((cVar1 == '\x03') && (iVar5 = (local_34 << 0x10) >> 0x18, 0 < iVar5)) && (iVar5 < 4)) &&
     (iVar4 = FUN_0010d818(), iVar5 = local_2c, iVar4 == 0)) {
    iVar6 = FUN_0011df38(2);
    if (iVar6 == 0) {
      uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_00332280);
      FUN_00756eb0(iVar5,uVar2);
      return &stack0xfffffff0;
    }
    uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_0033227c);
    FUN_00756eb0(iVar5,uVar2);
    return &stack0xfffffff0;
  }
  if (cVar1 == '\n') {
    FUN_001f32d4(param_1);
    iVar6 = local_2c;
    FUN_0079c070(auStack_240);
    FUN_0079822c(auStack_240,0xc,0x73,0);
    FUN_001aea7c(iVar6,1,auStack_240);
    return auStack_240;
  }
  if (cVar1 == '\v') {
    local_38 = 0;
    local_34 = 0x1e;
    local_30 = 1;
    iVar5 = FUN_005ed53c(3,uVar2,iVar6);
    if (iVar5 != 0) {
      puVar3 = (undefined1 *)(uint)*(byte *)(param_1 + 0x14);
      if (puVar3 < &DAT_00000005) {
        if ((puVar3[DAT_001f2ff4] == '\0') && (puVar3[DAT_001f2ffc] == '\0')) {
          return (undefined1 *)0x0;
        }
        iVar6 = FUN_0011df38(2);
        if (iVar6 == 0) {
          uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_001f3000);
          FUN_00756eb0(param_1 + 0x30,uVar2);
          return &stack0xfffffff0;
        }
        uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_001f2ff8);
        FUN_00756eb0(param_1 + 0x38,uVar2);
        puVar3 = &stack0xfffffff0;
      }
      return puVar3;
    }
  }
  local_38 = 1;
  local_34 = 7;
  local_30 = 1;
  iVar5 = FUN_005ed53c(5,uVar2,iVar6);
  if (iVar5 == 0) {
    local_38 = 0;
    local_30 = 1;
    local_34 = 0;
    iVar5 = FUN_005ed53c(5,uVar2,iVar6);
    if (iVar5 != 0) {
      FUN_003321e8(local_2c);
      uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_0023d5dc);
      FUN_00756eb0(param_1 + 0x9c,uVar2);
      uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_0023d5e0);
      FUN_00756eb0(param_1 + 0xa0,uVar2);
      uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_0023d5e4);
      FUN_00756eb0(param_1 + 0xa8,uVar2);
      return &stack0xfffffff0;
    }
    puVar3 = (undefined1 *)0x0;
    if (cVar1 == '\f') {
      puVar3 = (undefined1 *)((iVar6 << 0x10) >> 0x18);
      if ((int)puVar3 < 0x18) {
        FUN_001f3228(param_1);
        iVar6 = FUN_0011df38(2);
        if (iVar6 == 0) {
          FUN_001f1e44(param_1 + 0x45cc);
        }
        iVar5 = FUN_0011df38(4);
        iVar6 = local_2c;
        if (1 < iVar5) {
          puVar3 = (undefined1 *)FUN_0011df38(2);
          if (puVar3 == (undefined1 *)0x0) {
            uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_0023d50c);
            FUN_00756eb0(param_1 + 0x9c,uVar2);
            return &stack0xfffffff0;
          }
          if (puVar3 == (undefined1 *)0x1) {
            uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_0023d508);
            FUN_00756eb0(param_1 + 0xa8,uVar2);
            puVar3 = &stack0xfffffff0;
          }
          return puVar3;
        }
        iVar5 = FUN_0011df38(2);
        if (iVar5 == 0) {
          uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_0033219c);
          FUN_00756eb0(iVar6,uVar2);
          return &stack0xfffffff0;
        }
        uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_00332198);
        FUN_00756eb0(iVar6 + 0xc,uVar2);
        return &stack0xfffffff0;
      }
      if (puVar3 == &IRQ) {
        FUN_001f1e44(param_1 + 0x45cc);
        FUN_0023d5e8(param_1 + 0x9c);
        iVar6 = local_2c;
        uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_003322d0);
        FUN_00756eb0(iVar6,uVar2);
        uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_003322d4);
        FUN_00756eb0(iVar6 + 0xc,uVar2);
        return &stack0xfffffff0;
      }
    }
    return puVar3;
  }
  iVar5 = FUN_0011df38(4);
  iVar6 = local_2c;
  if (iVar5 == 0) {
    uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_00332130);
    FUN_00756eb0(iVar6,uVar2);
    return &stack0xfffffff0;
  }
  puVar3 = (undefined1 *)FUN_0011df38(3);
  if (puVar3 == (undefined1 *)0x0) {
    uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_0023d494);
    FUN_00756eb0(param_1 + 0x9c,uVar2);
    return &stack0xfffffff0;
  }
  if (puVar3 == (undefined1 *)0x1) {
    uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_0023d498);
    FUN_00756eb0(param_1 + 0x9c,uVar2);
    return &stack0xfffffff0;
  }
  if (puVar3 == &SUB_00000002) {
    uVar2 = FUN_00756d40(&stack0xfffffff0,DAT_0023d490);
    FUN_00756eb0(param_1 + 0xa8,uVar2);
    puVar3 = &stack0xfffffff0;
  }
  return puVar3;
}


