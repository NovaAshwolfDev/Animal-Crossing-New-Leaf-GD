/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ec334. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007ec334(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (*(byte *)(param_1 + 8) < 0x21) {
    uVar1 = 0;
    do {
      if ((int)(uint)*(byte *)(param_1 + 8) < *(int *)(DAT_007ec43c + uVar1 * 4)) {
        if ((uVar1 & 0xff) != 5) {
          return 1;
        }
        iVar2 = FUN_00802710(param_1 + 0x6c);
        if (iVar2 != 0) {
          return 1;
        }
        FUN_0011a3e0(&uStack_20,param_1);
        FUN_0063ac4c(&uStack_20);
        FUN_0063ad54(&uStack_20,0,0x12,0,0);
        if (*(char *)(param_1 + 10) == '\x04') {
          FUN_0063ad54(&uStack_20,1,0,0,0);
        }
        FUN_007edb08(&local_30,&uStack_20);
        FUN_007edb08(&local_24,param_2);
        iVar2 = FUN_005cd080(local_24,uStack_20,uStack_1c,local_30,local_2c,uStack_28);
        if (iVar2 != 0) {
          return 1;
        }
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < 0xc);
  }
  return 1;
}


