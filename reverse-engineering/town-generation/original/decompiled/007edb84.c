/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007edb84. Provisional types; not original source or a verified portable implementation. */

void FUN_007edb84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined1 auStack_20 [12];
  
  local_28 = FUN_005cc318(param_2);
  FUN_0080c0b0(auStack_20);
  FUN_0011a3e0(auStack_20,&local_28);
  uVar2 = FUN_007edf28(auStack_20);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_28._0_4_ = param_3;
  local_28._4_4_ = param_4;
  FUN_007edcb0(param_1,uVar1,(int)uVar2,uVar1);
  return;
}


