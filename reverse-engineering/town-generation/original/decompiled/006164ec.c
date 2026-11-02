/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006164ec. Provisional types; not original source or a verified portable implementation. */

void FUN_006164ec(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_007eb480(param_2 + 0x16);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = FUN_00636e3c();
  iVar2 = FUN_007b8ff8(iVar2 + 0x20,param_2);
  if (iVar2 == 0) goto LAB_00616554;
  cVar1 = *(char *)(param_2 + 0x1e);
  if (cVar1 == '\x0e') {
    if (*(char *)(param_2 + 0x1f) != '\0') {
      return;
    }
    iVar2 = FUN_007ec31c(param_2,0);
    if (iVar2 != 0) goto LAB_006165dc;
    iVar2 = FUN_007ec31c(param_2,1);
  }
  else {
    if (cVar1 == '\x0f') {
      if (*(char *)(param_2 + 0x1f) == '\x01') {
        return;
      }
LAB_00616554:
      FUN_00628810(param_2);
      return;
    }
    if (cVar1 != '\x10') {
      if (cVar1 != '\x11') {
        return;
      }
      if (*(char *)(param_2 + 0x1f) == '\x01') {
        return;
      }
      goto LAB_00616554;
    }
    if (*(char *)(param_2 + 0x1f) != '\0') {
      return;
    }
    iVar2 = FUN_007ec31c(param_2,0);
    if (iVar2 != 0) goto LAB_006165dc;
    iVar2 = FUN_007ec31c(param_2,1);
  }
  if (iVar2 == 0) {
    return;
  }
LAB_006165dc:
  *(undefined1 *)(param_2 + 0x1f) = 3;
  return;
}


