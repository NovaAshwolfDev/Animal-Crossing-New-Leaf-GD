/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001aea7c. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_001aea7c(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  puVar2 = (undefined4 *)FUN_00807374(param_3);
  puVar3 = puVar2;
  if ((puVar2 == (undefined4 *)0x0) && (puVar7 = (undefined4 *)0x0, param_2 != (undefined4 *)0x0)) {
    do {
      puVar3 = (undefined4 *)FUN_00756eb0(param_1,DAT_001aebc8);
      puVar7 = (undefined4 *)((int)puVar7 + 1);
      param_1 = param_1 + 4;
    } while (puVar7 < param_2);
  }
  puVar7 = puVar2;
  iVar6 = param_1;
  if (puVar2 < param_2) {
    for (; puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)((int)puVar7 - 1)) {
      uVar4 = FUN_0011df38(puVar7);
      sVar1 = FUN_008072dc(param_3,uVar4);
      FUN_00756d40(&uStack_20,sVar1 + 0x2000);
      FUN_00756eb0(iVar6,&uStack_20);
      FUN_0079ae8c(param_3,iVar6);
      param_2 = (undefined4 *)((int)param_2 - 1);
      puVar3 = &uStack_20;
      iVar6 = iVar6 + 4;
    }
    for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)((int)param_2 - 1)) {
      iVar5 = FUN_0011df38(puVar2);
      puVar3 = (undefined4 *)FUN_00756eb0(iVar6,param_1 + iVar5 * 4);
      iVar6 = iVar6 + 4;
    }
  }
  else if (param_2 != (undefined4 *)0x0) {
    do {
      uVar4 = FUN_0011df38(puVar2);
      sVar1 = FUN_008072dc(param_3,uVar4);
      FUN_00756d40(&uStack_20,sVar1 + 0x2000);
      FUN_00756eb0(param_1,&uStack_20);
      FUN_0079ae8c(param_3,param_1);
      param_2 = (undefined4 *)((int)param_2 - 1);
      param_1 = param_1 + 4;
      puVar2 = (undefined4 *)((int)puVar2 - 1);
    } while (param_2 != (undefined4 *)0x0);
    return &uStack_20;
  }
  return puVar3;
}


