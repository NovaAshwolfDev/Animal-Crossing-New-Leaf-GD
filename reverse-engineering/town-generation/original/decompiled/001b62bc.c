/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001b62bc. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001b62bc(int param_1,uint param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  iVar1 = FUN_007fe108(param_3);
  if (iVar1 == 0x4e) {
    FUN_00636e3c();
    iVar1 = FUN_006378a0();
    FUN_00627184(iVar1 + 4 + DAT_001b642c);
  }
  else if (param_2 < 0x10) {
    iVar1 = FUN_007fe014(param_3);
    iVar2 = param_1 + param_2 * 4;
    if (iVar1 != 0) {
      FUN_00756eb0(iVar2,param_3);
      FUN_00754ae4(iVar2);
      *(undefined1 *)(param_1 + param_2 + 0x40) = param_4;
      return 1;
    }
    iVar1 = FUN_007fecf4(param_3);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_00756da4(auStack_20,param_3);
    iVar1 = FUN_007fe108(auStack_20);
    if (iVar1 == 0x2b) {
      iVar1 = FUN_00802834(auStack_20);
      if (iVar1 == 0) {
        FUN_00754ae4(auStack_20);
        goto LAB_001b6408;
      }
    }
    else {
      FUN_00754ae4();
      if (iVar1 != 0x27 && iVar1 != 0x24) {
        if (iVar1 == 0x3f) {
          FUN_00754e70(auStack_1c,auStack_20);
          FUN_00756eb0(auStack_20,auStack_1c);
        }
LAB_001b6408:
        FUN_00756eb0(iVar2,auStack_20);
        *(undefined1 *)(param_1 + param_2 + 0x40) = param_4;
        return 1;
      }
    }
  }
  return 0;
}


