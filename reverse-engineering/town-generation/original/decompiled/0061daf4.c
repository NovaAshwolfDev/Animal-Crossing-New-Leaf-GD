/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061daf4. Provisional types; not original source or a verified portable implementation. */

void FUN_0061daf4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  
  iVar4 = param_1 + 0x24b6;
  iVar6 = param_1 + 0x24ba;
  iVar5 = param_1 + 0x24be;
  param_1 = param_1 + 0x24c2;
  iVar2 = iVar4;
  if ((((param_2 == 0) || (iVar2 = iVar6, param_2 == 1)) || (iVar2 = iVar5, param_2 == 2)) ||
     (iVar2 = param_1, param_2 == 3)) {
    FUN_00756eb0(iVar2,param_3);
  }
  FUN_00100648(auStack_38,DAT_0061dc5c,4);
  iVar3 = 0;
  iVar2 = 0;
  do {
    FUN_00756eb0(auStack_38 + iVar2 * 4,DAT_0061dc60);
    if (iVar2 == 0) {
      FUN_00756da4(auStack_28,iVar4);
    }
    else {
      iVar1 = iVar6;
      if (((iVar2 != 1) && (iVar1 = iVar5, iVar2 != 2)) && (iVar1 = DAT_0061dc60, iVar2 == 3)) {
        iVar1 = param_1;
      }
      FUN_00756da4(auStack_28,iVar1);
    }
    iVar1 = FUN_00802710(auStack_28);
    if (iVar1 == 0) {
      FUN_00756eb0(auStack_38 + iVar3 * 4,auStack_28);
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  FUN_00756eb0(iVar4,auStack_38);
  FUN_00756eb0(iVar6,auStack_34);
  FUN_00756eb0(iVar5,auStack_30);
  FUN_00756eb0(param_1,auStack_2c);
  FUN_00100730(auStack_38,DAT_0061dc64,4);
  return;
}


