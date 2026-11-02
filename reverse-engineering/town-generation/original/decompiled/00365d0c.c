/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00365d0c. Provisional types; not original source or a verified portable implementation. */

void FUN_00365d0c(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_248 [568];
  
  iVar4 = 0;
  puVar3 = auStack_248;
  do {
    FUN_00756eb0(param_1 + iVar4 * 4,DAT_00366034);
    iVar1 = param_1 + iVar4;
    iVar4 = iVar4 + 1;
    *(undefined1 *)(iVar1 + 0x20) = 0;
  } while (iVar4 < 8);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,99,0x51,0);
  FUN_001aea7c(param_1,1,auStack_248);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,0x5d,0x4b,0);
  FUN_001aea7c(param_1 + 0x10,1,auStack_248);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,0x5f,0x4c,0);
  FUN_001aea7c(param_1 + 0x14,1,auStack_248);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,0x5e,0x4d,0);
  FUN_001aea7c(param_1 + 0x18,1,auStack_248);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,0x62,0x50,0);
  FUN_001aea7c(param_1 + 8,1,auStack_248);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,0x61,0x4f,0);
  FUN_001aea7c(param_1 + 0xc,1,auStack_248);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,0x60,0x4e,0);
  FUN_001aea7c(param_1 + 4,1,auStack_248);
  FUN_0079c070(auStack_248);
  FUN_0079822c(auStack_248,100,0x52,0);
  FUN_001aea7c(param_1 + 0x1c,1,auStack_248);
  uVar5 = 0;
  do {
    iVar4 = FUN_00636e3c(puVar3);
    puVar2 = (undefined1 *)FUN_002d57dc(iVar4 + 0x20,uVar5 & 0xff);
    puVar3 = puVar2;
    if ((puVar2 != (undefined1 *)0x0) &&
       (puVar3 = (undefined1 *)FUN_007aae1c(puVar2 + 0x55a6), puVar3 != (undefined1 *)0x0)) {
      puVar2 = puVar2 + 0x8bce;
      puVar3 = (undefined1 *)FUN_00802710();
      if ((puVar3 == (undefined1 *)0x0) &&
         (puVar3 = (undefined1 *)FUN_00802710(puVar2), puVar3 == (undefined1 *)0x0)) {
        iVar4 = FUN_007fe108(puVar2);
        puVar3 = (undefined1 *)(iVar4 + -0x5d);
        switch(puVar3) {
        case (undefined1 *)0x0:
          iVar4 = param_1 + 0x10;
          break;
        case (undefined1 *)0x1:
          iVar4 = param_1 + 0x18;
          break;
        case (undefined1 *)0x2:
          iVar4 = param_1 + 0x14;
          break;
        case (undefined1 *)0x3:
          iVar4 = param_1 + 4;
          break;
        case (undefined1 *)0x4:
          iVar4 = param_1 + 0xc;
          break;
        case (undefined1 *)0x5:
          iVar4 = param_1 + 8;
          break;
        case (undefined1 *)0x6:
          iVar4 = param_1;
          break;
        case (undefined1 *)0x7:
          iVar4 = param_1 + 0x1c;
          break;
        default:
          goto switchD_00365f98_default;
        }
        puVar3 = (undefined1 *)FUN_00756eb0(iVar4,puVar2);
      }
    }
switchD_00365f98_default:
    uVar5 = uVar5 + 1;
    if (3 < (int)uVar5) {
      return;
    }
  } while( true );
}


