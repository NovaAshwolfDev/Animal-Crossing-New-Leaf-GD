/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00290014. Provisional types; not original source or a verified portable implementation. */

int FUN_00290014(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined1 extraout_r1;
  undefined1 uVar2;
  int local_20;
  int iStack_1c;
  
  iVar1 = FUN_0059b128();
  uVar2 = extraout_r1;
  if (param_5 == 0) {
    uVar2 = 0;
  }
  *(char *)(iVar1 + 0x10) = (char)param_5;
  if (param_5 != 0) {
    if (param_5 == 1) {
      uVar2 = 1;
    }
    else if (param_5 == 2) {
      uVar2 = 0x1e;
    }
    else if (param_5 == 3) {
      uVar2 = 0x1f;
    }
    else {
      uVar2 = 0x2a;
    }
  }
  *(undefined1 *)(iVar1 + 0x11) = uVar2;
  *(undefined1 *)(iVar1 + 0x12) = 0xf8;
  iVar1 = FUN_0059afc0(iVar1 + 0x14);
  *(undefined1 *)(iVar1 + 8) = 0xf8;
  *(undefined1 *)(iVar1 + 9) = 0xf8;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = param_2 + -7;
  *(int *)(iVar1 + 0x14) = param_3 + -7;
  iVar1 = iVar1 + -0x14;
  local_20 = param_2;
  iStack_1c = param_3;
  FUN_0059b164(iVar1,param_4);
  FUN_0059b188(iVar1,&local_20);
  return iVar1;
}


