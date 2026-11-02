/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007b44a8. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007b44a8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  int iStack_2c;
  undefined1 auStack_28 [8];
  char local_20;
  
  iVar1 = FUN_00767d84(*(undefined1 *)(param_1 + 0x1c));
  if (iVar1 == 0) {
    iVar1 = FUN_0074702c(*(undefined1 *)(param_1 + 0x11));
    FUN_007dca10(&local_70,param_1);
    FUN_007dc9d8(&local_40,param_1);
    iVar2 = FUN_007dc980(&local_70,&local_40);
    while (iVar2 != 0) {
      if (iVar1 == 0) {
LAB_007b4750:
        if (*(int *)(param_1 + 0x20) == 0) {
          return 1;
        }
        FUN_007dc900(&local_30,auStack_68,param_1 + 0x24);
        FUN_00692a4c(auStack_28,iStack_2c * 0xa0 + local_30 * 10 + *(int *)(param_1 + 0x20));
        if (local_20 != '\0') {
          return 1;
        }
      }
      else {
        FUN_0059ace8(&local_50,auStack_68);
        iVar2 = FUN_007e206c(iVar1,local_50,uStack_4c);
        if (iVar2 == 0) goto LAB_007b4750;
        FUN_0059abf0(&local_48,auStack_68);
        iVar2 = FUN_007f32bc(iVar2,local_48,uStack_44);
        if ((iVar2 != 0x14 && iVar2 != 0x31) && (iVar2 != 0x32 && iVar2 != 0x33)) goto LAB_007b4750;
      }
      FUN_0059b024(&local_70);
      iVar2 = FUN_007dc980(&local_70,&local_40);
    }
  }
  else {
    iVar1 = FUN_0074702c(1);
    FUN_007dca10(auStack_78,param_1);
    FUN_007dc9d8(auStack_28,param_1);
    iVar2 = FUN_007dc980(auStack_78,auStack_28);
    while (iVar2 != 0) {
      if (iVar1 == 0) {
LAB_007b45c4:
        if (*(int *)(param_1 + 0x20) == 0) {
          return 1;
        }
        FUN_007dc900(&local_40,&local_70,param_1 + 0x24);
        FUN_00692a4c(&local_38,iStack_3c * 0xa0 + local_40 * 10 + *(int *)(param_1 + 0x20));
        if ((char)local_30 != '\0') {
          return 1;
        }
      }
      else {
        FUN_0059ace8(&local_60,&local_70);
        iVar2 = FUN_007e206c(iVar1,local_60,uStack_5c);
        if (iVar2 == 0) goto LAB_007b45c4;
        FUN_0059abf0(&local_58,&local_70);
        iVar2 = FUN_007f32bc(iVar2,local_58,uStack_54);
        if (((iVar2 != 0x14 && iVar2 != 0x31) && (iVar2 != 0x32 && iVar2 != 0x33)) &&
           ((FUN_00285474(&local_38,local_70,uStack_6c,1), 0xf7 < (local_30 & 0xff) ||
            (iVar2 = FUN_007692d4(local_38,uStack_34), iVar2 == 0)))) goto LAB_007b45c4;
      }
      FUN_0059b024(auStack_78);
      iVar2 = FUN_007dc980(auStack_78,auStack_28);
    }
  }
  return 0;
}


