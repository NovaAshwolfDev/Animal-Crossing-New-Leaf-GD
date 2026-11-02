/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00628ffc. Provisional types; not original source or a verified portable implementation. */

void FUN_00628ffc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 auStack_14 [4];
  
  if (*(char *)(param_1 + 9) == '\x02') {
    FUN_00636e3c();
    iVar1 = FUN_006378a0();
    iVar1 = FUN_006138d4(iVar1 + 4,(int)*(char *)(param_1 + 0x14));
    if (iVar1 != 0) {
      iVar4 = (int)*(char *)(param_1 + 0x16);
      FUN_00756da4(auStack_14,param_1 + 0xc);
      FUN_007e7330(&local_18,iVar1,iVar4);
      iVar2 = FUN_00802710(&local_18);
      if (iVar2 == 0) {
        FUN_0061d9d8(iVar1,&local_18);
      }
      FUN_0061e8dc(iVar1,iVar4,auStack_14,1);
      FUN_00620754(iVar1,iVar4);
    }
    local_18 = FUN_00802674(param_1 + 0xc);
    local_16 = 1;
    FUN_0087724c(4,&local_18);
    *(undefined1 *)(param_1 + 9) = 1;
  }
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_0063aca4(param_1);
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 9;
  uVar3 = FUN_00756eb0(param_1 + 0x10,DAT_00629124);
  FUN_00756eb0(param_1 + 0xc,uVar3);
  *(undefined1 *)(param_1 + 0x14) = 0xff;
  *(undefined1 *)(param_1 + 0x15) = 7;
  *(undefined1 *)(param_1 + 0x16) = 0xff;
  return;
}


