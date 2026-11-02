/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 008a5160. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_008a5160(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_20;
  char *local_1c;
  
  for (iVar2 = *(int *)(param_1 + 0x13c); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    FUN_0060f000(iVar2 + 0xc);
    FUN_00121a30(iVar2 + 0x14);
  }
  for (iVar2 = *(int *)(param_1 + 0x154); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    FUN_0060f000(iVar2 + 0xc);
    FUN_00121a30(iVar2 + 0x14);
  }
  FUN_001193a8(param_1 + 0x138);
  FUN_001193a8(param_1 + 0x144);
  FUN_001193a8(param_1 + 0x150);
  FUN_00124be4(param_1 + 0x144,param_1 + 8);
  FUN_00113b48(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    local_1c = "ResourceMgr";
    local_20 = DAT_008a5250;
    uVar1 = FUN_005c774c(param_1,param_3,param_2,&local_20,1);
  }
  return uVar1;
}


