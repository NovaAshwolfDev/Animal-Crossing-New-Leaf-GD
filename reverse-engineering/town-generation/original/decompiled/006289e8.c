/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006289e8. Provisional types; not original source or a verified portable implementation. */

void FUN_006289e8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_00636e3c();
  iVar2 = FUN_006378a0();
  iVar2 = FUN_006138d4(iVar2 + 4,(int)*(char *)(param_1 + 0x21));
  iVar3 = FUN_00636e3c();
  iVar3 = FUN_002d57fc(iVar3 + 0x20,param_1);
  if (iVar2 != 0 && iVar3 != 0) {
    cVar1 = *(char *)(param_1 + 0x1e);
    if (cVar1 == '\x0e' || cVar1 == '\x0f') {
      if (1 < *(byte *)(param_1 + 0x1f)) goto LAB_00628ac8;
    }
    else if ((cVar1 != '\x10' && cVar1 != '\x11') || (2 < *(byte *)(param_1 + 0x1f)))
    goto LAB_00628ac8;
    if (cVar1 == '\x0e' || cVar1 == '\x0f') {
      if (*(char *)(param_1 + 0x1f) == '\x01') {
        uVar4 = 0xfffffffe;
      }
      else {
        if ((int)((uint)*(byte *)(param_1 + 0x24) << 0x1d) < 0) goto LAB_00628ac8;
        uVar4 = 0xfffffffb;
      }
    }
    else {
      if ((*(char *)(param_1 + 0x1f) != '\x01') &&
         ((int)((uint)*(byte *)(param_1 + 0x24) << 0x1d) < 0)) goto LAB_00628ac8;
      uVar4 = 0xfffffffd;
    }
    FUN_0061f8ac(iVar2,uVar4,iVar3,1);
  }
LAB_00628ac8:
  *(undefined1 *)(param_1 + 0x1e) = 0x21;
  FUN_0063aca4(param_1 + 0x16);
  *(undefined1 *)(param_1 + 0x1f) = 0xff;
  *(undefined1 *)(param_1 + 0x20) = 9;
  FUN_002d5734(param_1);
  *(undefined1 *)(param_1 + 0x21) = 0xff;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}


