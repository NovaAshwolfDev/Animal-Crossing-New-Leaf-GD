/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007aa6d4. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_007aa6d4(int param_1,undefined4 *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    return 0;
  }
  param_2[2] = 0x20;
  bVar1 = *(byte *)(param_1 + 0x69);
  if (5 < bVar1) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[3] = 0x20;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    return 1;
  }
  if (param_3 != 2 && param_3 != 3) {
    *(undefined1 *)(param_2 + 4) = 0;
    *param_2 = 0;
    param_2[3] = 0x20;
    if (*(byte *)(param_1 + 0x69) < 3) {
      if (param_3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x10;
      }
      *(undefined1 *)((int)param_2 + 0x11) = 1;
      param_2[5] = uVar2;
    }
    else {
      *(undefined1 *)((int)param_2 + 0x11) = 0;
    }
    param_2[1] = (uint)(param_3 != 0);
    return 1;
  }
  if (bVar1 != 2 && bVar1 != 5) {
    param_2[3] = 0x10;
    *(undefined1 *)(param_2 + 4) = 1;
    if (param_3 == 2) {
      uVar2 = 0x10;
    }
    else {
      uVar2 = 0;
    }
    param_2[1] = 2;
    *param_2 = uVar2;
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    if (*(char *)(param_1 + 0x69) == '\x01' || *(char *)(param_1 + 0x69) == '\x04') {
      param_2[2] = 0x10;
      return 1;
    }
    return 1;
  }
  return 0;
}


