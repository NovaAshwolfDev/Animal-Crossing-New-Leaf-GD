/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062809c. Provisional types; not original source or a verified portable implementation. */

void FUN_0062809c(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_1c [8];
  
  if ((param_2 != 0) && (iVar3 = FUN_007aae1c(param_2 + 0x55a6), iVar3 != 0)) {
    bVar1 = *(byte *)(param_1 + 8);
    bVar6 = bVar1 < 0x21;
    if (bVar6) {
      bVar1 = *(byte *)(param_1 + 9);
    }
    if (bVar6 && bVar1 < 3) {
      uVar5 = 0;
      do {
        uVar4 = FUN_007c3f50(param_2 + 0x6bb0,uVar5,0);
        FUN_00756da4(auStack_1c,uVar4);
        iVar3 = FUN_007fe108(auStack_1c);
        if ((iVar3 == 0x4c) && (iVar3 = FUN_007549e8(auStack_1c,0x4c,0x4d), iVar3 != 0)) {
          FUN_00362e70(param_2 + 0x6bb0,uVar5,auStack_1c,0,1);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x10);
    }
  }
  *(undefined1 *)(param_1 + 8) = 0x21;
  *(undefined1 *)(param_1 + 9) = 3;
  FUN_007570b8(param_1 + 0xc);
  uVar2 = (undefined2)DAT_006281b8;
  *(undefined2 *)(param_1 + 0x22) = uVar2;
  uVar5 = 0;
  do {
    iVar3 = param_1 + uVar5 * 0x18;
    FUN_007570b8(iVar3 + 0x24);
    uVar5 = uVar5 + 1;
    *(undefined2 *)(iVar3 + 0x3a) = uVar2;
  } while (uVar5 < 6);
  return;
}


