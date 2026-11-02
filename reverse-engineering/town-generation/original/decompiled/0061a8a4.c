/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061a8a4. Provisional types; not original source or a verified portable implementation. */

void FUN_0061a8a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_38 [12];
  undefined1 *local_2c;
  
  FUN_005806f4(1);
  *(undefined1 *)(param_1 + 0x1750c) = 0xff;
  iVar1 = FUN_005ee68c(2);
  if ((iVar1 == 0) && (iVar1 = FUN_005ee68c(0x24), iVar1 == 0)) {
    FUN_007e68d4(auStack_38,param_1);
    if (param_2 != 0) {
      local_2c = auStack_38;
      FUN_00613a64(param_1,auStack_38,param_2);
      iVar1 = FUN_0074702c(1);
      if (iVar1 != 0) {
        iVar6 = 0x10;
        do {
          iVar4 = 0x10;
          do {
            iVar2 = FUN_007e2290(iVar1,iVar4,iVar6,0);
            if ((((iVar2 != 0) && (iVar3 = FUN_00761de8(iVar4,iVar6,1), iVar3 == 0)) &&
                (iVar3 = FUN_007610d4(iVar4,iVar6,1), iVar3 == 0)) &&
               (iVar2 = FUN_00802710(iVar2), iVar2 != 0)) {
              uVar5 = 1;
              goto LAB_0061a9c8;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < 0x60);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x50);
      }
      uVar5 = 0;
LAB_0061a9c8:
      FUN_00616b58(param_1,local_2c,uVar5);
      FUN_00613910(param_1,local_2c,uVar5);
    }
    FUN_00619c2c(param_1,auStack_38);
    FUN_00619d9c(param_1,auStack_38);
    FUN_0058100c();
  }
  return;
}


