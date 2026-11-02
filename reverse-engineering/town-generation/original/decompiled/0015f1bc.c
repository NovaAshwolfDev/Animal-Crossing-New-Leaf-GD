/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0015f1bc. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_0015f1bc(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  puVar1 = (undefined4 *)FUN_00756d40(param_1,DAT_0015f370);
  puVar4 = puVar1;
  if (param_2 < 8) {
    iVar2 = FUN_0011df34(100);
    if (0x45 < iVar2) {
      iVar2 = FUN_005cc158();
      puVar4 = (undefined4 *)(int)*(char *)(iVar2 + 4);
      switch(puVar4) {
      case (undefined4 *)0x0:
        goto switchD_0015f234_caseD_0;
      case (undefined4 *)0x1:
      case (undefined4 *)0x2:
      case (undefined4 *)0xc:
        iVar2 = FUN_0011df34(*(undefined4 *)(DAT_0015f394 + param_2 * 4));
        uVar3 = FUN_00756d40(&uStack_10,
                             *(undefined2 *)(*(int *)(DAT_0015f398 + param_2 * 4) + iVar2 * 2));
        FUN_00756eb0(puVar1,uVar3);
        return &uStack_10;
      case (undefined4 *)0x3:
      case (undefined4 *)0x4:
      case (undefined4 *)0x5:
        iVar2 = FUN_0011df34(*(undefined4 *)(DAT_0015f37c + param_2 * 4));
        uVar3 = FUN_00756d40(&uStack_10,
                             *(undefined2 *)(*(int *)(DAT_0015f380 + param_2 * 4) + iVar2 * 2));
        FUN_00756eb0(puVar1,uVar3);
        return &uStack_10;
      case (undefined4 *)0x6:
      case (undefined4 *)0x7:
      case (undefined4 *)0x8:
        iVar2 = FUN_0011df34(*(undefined4 *)(DAT_0015f384 + param_2 * 4));
        uVar3 = FUN_00756d40(&uStack_10,
                             *(undefined2 *)(*(int *)(DAT_0015f388 + param_2 * 4) + iVar2 * 2));
        FUN_00756eb0(puVar1,uVar3);
        return &uStack_10;
      case (undefined4 *)0x9:
      case (undefined4 *)0xa:
      case (undefined4 *)0xb:
        iVar2 = FUN_0011df34(*(undefined4 *)(DAT_0015f38c + param_2 * 4));
        uVar3 = FUN_00756d40(&uStack_10,
                             *(undefined2 *)(*(int *)(DAT_0015f390 + param_2 * 4) + iVar2 * 2));
        FUN_00756eb0(puVar1,uVar3);
        return &uStack_10;
      default:
        return puVar4;
      }
    }
    iVar2 = FUN_0011df34(*(undefined4 *)(DAT_0015f374 + param_2 * 4));
    uVar3 = FUN_00756d40(&uStack_10,
                         *(undefined2 *)(*(int *)(DAT_0015f378 + param_2 * 4) + iVar2 * 2));
    FUN_00756eb0(puVar1,uVar3);
    puVar4 = &uStack_10;
  }
switchD_0015f234_caseD_0:
  return puVar4;
}


