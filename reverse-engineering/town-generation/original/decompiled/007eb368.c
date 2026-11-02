/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007eb368. Provisional types; not original source or a verified portable implementation. */

bool FUN_007eb368(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = (undefined4 *)FUN_005cc158();
  }
  bVar1 = *(byte *)(param_1 + 10);
  FUN_007edb08(&local_20,param_1);
  local_2c = local_20;
  uStack_28 = uStack_1c;
  uStack_24 = uStack_18;
  if (bVar1 < 9) {
    pcVar3 = *(code **)(DAT_007eb410 + (uint)bVar1 * 4);
    if (pcVar3 == (code *)0x0) {
      local_38 = *param_2;
      uStack_34 = param_2[1];
      uStack_30 = param_2[2];
    }
    else {
      (*pcVar3)(&local_38,&local_2c);
    }
  }
  else {
    local_38 = local_20;
    uStack_34 = uStack_1c;
    uStack_30 = uStack_18;
  }
  iVar2 = FUN_005cd080(local_38,uStack_34,uStack_30,*param_2,param_2[1],param_2[2]);
  return iVar2 == 0;
}


