/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00628000. Provisional types; not original source or a verified portable implementation. */

void FUN_00628000(int param_1,int param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_1c [12];
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\0') {
    if (param_2 < 1) {
      if (param_2 != 0) {
        FUN_0062809c(param_1,param_3);
        return;
      }
    }
    else {
      iVar4 = FUN_007eb368(param_1,0);
      if (iVar4 != 0) {
        *(undefined1 *)(param_1 + 9) = 2;
      }
    }
  }
  else {
    if (cVar1 == '\x01') {
      FUN_00797a94(0xf,1);
      FUN_002901a8(0x16,1);
    }
    else if (cVar1 != '\x02') {
      return;
    }
    if (param_2 != 0) {
      if ((param_3 != 0) && (iVar4 = FUN_007aae1c(param_3 + 0x55a6), iVar4 != 0)) {
        bVar2 = *(byte *)(param_1 + 8);
        bVar7 = bVar2 < 0x21;
        if (bVar7) {
          bVar2 = *(byte *)(param_1 + 9);
        }
        if (bVar7 && bVar2 < 3) {
          uVar6 = 0;
          do {
            uVar5 = FUN_007c3f50(param_3 + 0x6bb0,uVar6,0);
            FUN_00756da4(auStack_1c,uVar5);
            iVar4 = FUN_007fe108(auStack_1c);
            if ((iVar4 == 0x4c) && (iVar4 = FUN_007549e8(auStack_1c,0x4c,0x4d), iVar4 != 0)) {
              FUN_00362e70(param_3 + 0x6bb0,uVar6,auStack_1c,0,1);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < 0x10);
        }
      }
      *(undefined1 *)(param_1 + 8) = 0x21;
      *(undefined1 *)(param_1 + 9) = 3;
      FUN_007570b8(param_1 + 0xc);
      uVar3 = (undefined2)DAT_006281b8;
      *(undefined2 *)(param_1 + 0x22) = uVar3;
      uVar6 = 0;
      do {
        iVar4 = param_1 + uVar6 * 0x18;
        FUN_007570b8(iVar4 + 0x24);
        uVar6 = uVar6 + 1;
        *(undefined2 *)(iVar4 + 0x3a) = uVar3;
      } while (uVar6 < 6);
      return;
    }
  }
  return;
}


