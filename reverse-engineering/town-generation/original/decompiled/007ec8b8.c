/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ec8b8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007ec8b8(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint local_38;
  uint local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined1 auStack_18 [12];
  
  uVar1 = *param_1;
  bVar5 = uVar1 != 0;
  if (bVar5) {
    uVar1 = (ushort)(byte)param_1[1];
  }
  bVar7 = uVar1 != 0;
  if (bVar5 && bVar7) {
    uVar1 = (ushort)*(byte *)((int)param_1 + 3);
  }
  if ((bVar5 && bVar7) && uVar1 != 0) {
    if (param_2 == 0) {
      puVar3 = (uint *)FUN_005cc158();
      uVar2 = *puVar3 & 0xffff;
      bVar5 = *param_1 == uVar2;
      if (bVar5) {
        uVar2 = (uint)(byte)param_1[1];
      }
      uVar4 = puVar3[1] & 0xff;
      bVar6 = uVar2 == uVar4;
      bVar7 = bVar5 && bVar6;
      if (bVar5 && bVar6) {
        uVar4 = (uint)*(byte *)((int)param_1 + 3);
      }
      if (bVar5 && bVar6) {
        bVar7 = uVar4 == (puVar3[1] << 0x10) >> 0x18;
      }
      if (bVar7) {
        return 1;
      }
    }
    else {
      FUN_005cc158();
      local_30 = FUN_005cc318();
      FUN_0080c0b0(auStack_18);
      FUN_0011a3e0(auStack_18,&local_30);
      FUN_007edb08(&local_28,auStack_18);
      local_34 = (uint)local_28;
      local_30._0_4_ = local_28._4_4_;
      local_30._4_4_ = uStack_20;
      FUN_005cd238(&local_34);
      local_28 = FUN_005cc318(&local_34);
      FUN_0080c0b0(auStack_18);
      FUN_0011a3e0(auStack_18,&local_28);
      FUN_007edb08(&local_38,auStack_18);
      uVar2 = local_34 & 0xff;
      if ((uint)*param_1 == (local_38 & 0xffff)) {
        bVar5 = (byte)param_1[1] == uVar2;
        if (bVar5) {
          uVar2 = (uint)*(byte *)((int)param_1 + 3);
        }
        if (bVar5 && uVar2 == (local_34 << 0x10) >> 0x18) {
          return 1;
        }
      }
    }
  }
  return 0;
}


