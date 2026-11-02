/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ec1a4. Provisional types; not original source or a verified portable implementation. */

void FUN_007ec1a4(int param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_40;
  uint local_3c;
  uint uStack_38;
  undefined4 local_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 uStack_20;
  
  FUN_007edb08(&local_40,param_1 + 0x16);
  uVar4 = uStack_38;
  uVar3 = local_3c;
  uVar2 = local_40;
  local_40 = (uint)*(byte *)(param_1 + 0x22);
  uStack_38 = (int)(uStack_38 << 0x10) >> 0x18;
  iVar5 = local_3c << 0x10;
  cVar1 = (char)local_3c;
  local_3c = (uint)*(byte *)(param_1 + 0x23);
  FUN_005cd0b8(&local_34,uVar2,(int)cVar1,iVar5 >> 0x18);
  if ((*(byte *)(param_1 + 0x24) & 1) != 0) {
    local_40 = uVar3;
    local_3c = uVar4;
    iVar5 = FUN_005cd080(local_34,uStack_30,uStack_2c,uVar2);
    if (iVar5 == 0) {
      FUN_005cd428(&local_34,1);
    }
  }
  local_28 = local_34;
  local_24 = uStack_30;
  uStack_20 = uStack_2c;
  FUN_005cd7b0(&local_28,param_3);
  local_40 = local_24;
  local_3c = uStack_20;
  FUN_005cd080(*param_2,param_2[1],param_2[2],local_28);
  return;
}


