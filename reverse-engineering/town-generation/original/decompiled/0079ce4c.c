/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0079ce4c. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_0079ce4c(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  FUN_0063aca4();
  iVar3 = FUN_007edfa8();
  if (((iVar3 == 0) || (iVar3 = FUN_007edf70(param_1,1), iVar3 == 0)) &&
     (iVar3 = FUN_006a905c(), iVar3 != 3)) {
    bVar1 = true;
    iVar3 = FUN_007edfa8(param_1);
    if (iVar3 != 0) {
      FUN_007edb08(&uStack_18,param_1);
      uStack_30 = uStack_18;
      uStack_2c = uStack_14;
      uStack_28 = uStack_10;
      FUN_005cd238(&uStack_30);
      puVar4 = (undefined4 *)FUN_005cc158();
      uStack_24 = *puVar4;
      uStack_20 = puVar4[1];
      uStack_1c = puVar4[2];
      FUN_005cd238(&uStack_24);
      iVar3 = FUN_005cc1fc(&uStack_24,&uStack_30,1);
      if (iVar3 == 1) {
        bVar1 = false;
      }
    }
    FUN_0063ad24(param_1);
    FUN_007edb08(&uStack_20,param_1);
    uStack_2c = uStack_20;
    uStack_28 = uStack_1c;
    uStack_24 = uStack_18;
    if (bVar1) {
      uVar2 = FUN_006b1d28();
    }
    else {
      uVar2 = *(undefined1 *)(param_1 + 10);
    }
    *(undefined1 *)(param_1 + 9) = uVar2;
    uStack_30 = 0;
    FUN_005cd014(&uStack_2c,1,0,0);
    uVar2 = FUN_006b1d28(&uStack_2c);
    *(undefined1 *)(param_1 + 10) = uVar2;
    if (*(byte *)(param_1 + 9) < 5) {
      FUN_007edb08(&uStack_24,param_1);
      uStack_30 = uStack_24;
      uStack_2c = uStack_20;
      uStack_28 = uStack_1c;
      uVar2 = FUN_006b2510(&uStack_30,0);
    }
    else {
      uVar2 = 0xff;
    }
    *(undefined1 *)(param_1 + 8) = uVar2;
    return 1;
  }
  return 0;
}


