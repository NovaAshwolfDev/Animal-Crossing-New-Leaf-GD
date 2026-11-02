/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007a28e8. Provisional types; not original source or a verified portable implementation. */

void FUN_007a28e8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 0) {
    return;
  }
  iVar1 = FUN_007e2290(param_3,param_1,param_2,0,param_4);
  if ((iVar1 != 0) && (iVar2 = FUN_00802710(), iVar2 == 0)) {
    iVar2 = FUN_007fe108(iVar1);
    if (iVar2 == 0x7a) {
      uVar3 = FUN_00800e9c(iVar1);
      FUN_00636e3c();
      iVar1 = FUN_006378a0();
      FUN_00624aa0(iVar1 + 0x17310,uVar3);
    }
    else {
      iVar2 = FUN_00636e3c();
      FUN_001b6218(iVar2 + DAT_007a29d8,iVar1,1);
    }
    uVar3 = 0;
    FUN_005e0f70(param_3,DAT_007a29dc,param_1,param_2);
    iVar1 = FUN_005fbfb0();
    if (iVar1 != 0) {
      FUN_005fc8dc(param_1,param_2,1,uVar3);
      return;
    }
  }
  return;
}


