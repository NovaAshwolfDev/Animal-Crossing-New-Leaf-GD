/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0061f74c. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Removing unreachable block (ram,0x0061f8b8) */

void FUN_0061f74c(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  bVar1 = *(byte *)(param_1 + 9);
  if (bVar1 == 0xb) {
    *(undefined1 *)(param_1 + 8) = 0x21;
    FUN_0063aca4();
    *(undefined1 *)(param_1 + 9) = 0xff;
    *(undefined1 *)(param_1 + 10) = 9;
    *(undefined1 *)(param_1 + 0xb) = 0xff;
    *(undefined1 *)(param_1 + 0xc) = 0xff;
    return;
  }
  if (param_2 == 0) {
    iVar2 = FUN_005cd9b0();
    if (((iVar2 != 0) && (*(byte *)(param_1 + 8) < 0x21)) && (*(char *)(param_1 + 9) != '\x03')) {
      FUN_007edb08(&local_28,param_1);
      puVar3 = (undefined4 *)FUN_005cc158();
      iVar2 = FUN_005cd080(*puVar3,puVar3[1],puVar3[2],local_28,local_24,uStack_20);
      if (iVar2 == 0) goto LAB_0061f7b0;
    }
    if (bVar1 == 1) {
      *(undefined1 *)(param_1 + 9) = 6;
      FUN_00636e3c();
      iVar2 = FUN_006378a0();
      iVar2 = FUN_006138d4(iVar2 + 4,(int)*(char *)(param_1 + 0xc));
      if (iVar2 != 0) {
        iVar4 = *(int *)(DAT_0061f904 + 0x234);
        if ((iVar4 != 0) && (iVar2 = FUN_0061f908(iVar2,0xffffffff,iVar4 + 0x55a6,1), 0 < iVar2)) {
          FUN_0023bed8(iVar4,iVar2,1);
          return;
        }
        return;
      }
    }
  }
  else {
    if (bVar1 < 3) {
      FUN_00636e3c();
      iVar2 = FUN_006378a0();
      iVar2 = FUN_006138d4(iVar2 + 4,(int)*(char *)(param_1 + 0xb));
      if (iVar2 != 0) {
        FUN_0061f8ac(iVar2,0xfffffffe,0,1);
      }
    }
LAB_0061f7b0:
    *(undefined1 *)(param_1 + 8) = 0x21;
    FUN_0063aca4(param_1);
    *(undefined1 *)(param_1 + 9) = 0xff;
    *(undefined1 *)(param_1 + 10) = 9;
    *(undefined1 *)(param_1 + 0xb) = 0xff;
    *(undefined1 *)(param_1 + 0xc) = 0xff;
  }
  return;
}


