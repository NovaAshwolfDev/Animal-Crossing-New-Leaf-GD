/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002869f8. Provisional types; not original source or a verified portable implementation. */

int FUN_002869f8(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 local_50;
  int local_48;
  int local_44 [3];
  undefined1 auStack_38 [32];
  
  puVar2 = DAT_00286ad8;
  if (param_3 < 0xc) {
    puVar2 = DAT_00286ad8 + param_3;
  }
  iVar4 = 0;
  uVar3 = *puVar2;
  FUN_007acd50(auStack_38,uVar3);
  FUN_007acdd0(auStack_60,uVar3);
  iVar1 = FUN_007acd1c(auStack_60,auStack_38);
  while (iVar1 != 0) {
    iVar1 = FUN_00636410(local_50);
    if (iVar1 == 0) {
      local_48 = 0;
      local_44[0] = 0;
      FUN_00745de0(&local_48,local_44,local_58,uStack_54);
      iVar1 = local_48;
      if (param_1 == local_48) {
        iVar1 = local_44[0];
      }
      if (param_1 == local_48 && param_2 == iVar1) {
        iVar4 = iVar4 + 1;
      }
    }
    FUN_001cbd60(auStack_60);
    iVar1 = FUN_007acd1c(auStack_60,auStack_38);
  }
  return iVar4;
}


