/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007a1454. Provisional types; not original source or a verified portable implementation. */

void FUN_007a1454(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 0) {
    return;
  }
  iVar1 = FUN_007e2290(param_3,param_1,param_2,0,param_4);
  if ((((iVar1 != 0) && (iVar2 = FUN_008026b8(), iVar2 != 0)) &&
      (iVar1 = FUN_005f2ff4(iVar1), iVar1 != 0)) &&
     ((int)((uint)*(byte *)(iVar1 + 0xd) << 0x1c) < 0)) {
    uVar3 = 0;
    FUN_005e0f70(param_3,DAT_007a14f0,param_1,param_2);
    iVar1 = FUN_005fbfb0();
    if (iVar1 != 0) {
      FUN_005fc8dc(param_1,param_2,1,uVar3);
      return;
    }
  }
  return;
}


