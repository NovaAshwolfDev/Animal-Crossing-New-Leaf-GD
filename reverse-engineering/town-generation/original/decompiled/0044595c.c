/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0044595c. Provisional types; not original source or a verified portable implementation. */

int FUN_0044595c(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [8];
  int local_90;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar2 = DAT_00445b3c;
  FUN_0011f998(DAT_00445b3c);
  FUN_00444e78();
  puVar3 = DAT_00445b40;
  DAT_00445b40[1] = 1;
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar4 = FUN_007c7b60(param_1,auStack_98,param_2);
  if (iVar4 < 0) {
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_00123be8(param_1,1);
    if (puVar3[1] != '\0') {
      FUN_0012603c(0);
    }
    FUN_0011fa98(uVar2);
    return iVar4;
  }
  if (local_90 == param_3) {
    *(undefined1 *)(param_1 + 10) = 0;
    *(undefined1 *)(param_1 + 0xb) = 0;
    FUN_0011b214(param_1 + 0x19c,auStack_98,0x60);
    local_a0 = 0;
    iVar4 = FUN_001289e8(param_1,param_1 + 0x1fc,param_1 + 0x21c,*(undefined4 *)(param_1 + 0x3a8));
    if (iVar4 < 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_00123be8(param_1,1);
      cVar1 = puVar3[1];
    }
    else {
      local_a0 = 1;
      iVar4 = FUN_001289e8(param_1,param_1 + 0x3ac,param_1 + 0x3cc,*(undefined4 *)(param_1 + 0x558))
      ;
      if (-1 < iVar4) {
        FUN_00445bd8(param_1);
        *(undefined1 *)(param_1 + 0x1dc) = 0;
        *(undefined1 *)(param_1 + 0x1dd) = 0;
        FUN_0010b810(&local_a0);
        local_38 = local_a0;
        uStack_34 = uStack_9c;
        FUN_0010de90(&local_30,&local_38);
        *(undefined4 *)(param_1 + 0x1d0) = local_30;
        *(undefined4 *)(param_1 + 0x1d4) = uStack_2c;
        *(undefined4 *)(param_1 + 0x1d8) = uStack_28;
        *puVar3 = 1;
        FUN_0011fa98(uVar2);
        return 0;
      }
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_00123be8(param_1,1);
      cVar1 = puVar3[1];
    }
    if (cVar1 != '\0') {
      FUN_0012603c(0);
    }
    FUN_0011fa98(uVar2);
    return iVar4;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_00123be8(param_1,1);
  if (puVar3[1] != '\0') {
    FUN_0012603c(0);
  }
  iVar4 = DAT_00445b44;
  FUN_0011fa98(uVar2);
  return iVar4;
}


