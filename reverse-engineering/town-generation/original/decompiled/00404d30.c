/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00404d30. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00404d30(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uStack_20;
  
  if (param_2 < 0x10) {
    uStack_20 = param_4;
    FUN_00756da4(&uStack_20,param_3);
    iVar3 = FUN_007fe108(&uStack_20);
    if (iVar3 == 0x31) {
      uVar2 = FUN_007fe108(&uStack_20);
      FUN_007549e8(&uStack_20,uVar2,0x2f);
    }
    else if (iVar3 == 0x56) {
      uVar2 = FUN_007fe108(&uStack_20);
      FUN_007549e8(&uStack_20,uVar2,0x54);
    }
    else if (iVar3 == 0x57) {
      uVar2 = FUN_007fe108(&uStack_20);
      FUN_007549e8(&uStack_20,uVar2,0x55);
    }
    iVar3 = FUN_007553f4(&uStack_20);
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = FUN_005a2164(&uStack_20);
    if ((iVar3 == 0) || (-1 < *(char *)(iVar3 + 2))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    FUN_00756eb0(param_1 + param_2 * 4,&uStack_20);
    if (bVar1) {
      *(undefined1 *)(param_1 + param_2 + 0x40) = 2;
    }
    else {
      *(char *)(param_1 + param_2 + 0x40) = (char)param_4;
    }
    if (param_5 != 0) {
      FUN_00756eb0(param_5,&uStack_20);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


