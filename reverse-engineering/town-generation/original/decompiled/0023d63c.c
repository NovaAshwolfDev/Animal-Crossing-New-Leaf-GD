/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0023d63c. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_0023d63c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  FUN_001ebfe0(param_1 + 0x4c);
  iVar1 = DAT_0023d8f4;
  iVar4 = 0;
  iVar5 = DAT_0023d8f4 + 6;
  do {
    FUN_00756dbc(auStack_20);
    FUN_001ebfc8(param_1 + 0x4c,iVar4);
    iVar2 = FUN_007aac1c();
    if (iVar2 == 0) {
      if (3 < iVar4) goto switchD_0023d69c_caseD_4;
      uVar3 = FUN_00756d40(auStack_1c,iVar1);
      FUN_00756eb0(auStack_20,uVar3);
    }
    else {
      iVar2 = FUN_001ebfc8(param_1 + 0x4c,iVar4);
      switch(*(undefined1 *)(iVar2 + 0x69)) {
      case 0:
        uVar3 = FUN_00756d40(auStack_1c,DAT_0023d8fc);
        FUN_00756eb0(auStack_20,uVar3);
        break;
      case 1:
        uVar3 = FUN_00756d40(auStack_1c,DAT_0023d8f8);
        FUN_00756eb0(auStack_20,uVar3);
        break;
      case 2:
        uVar3 = FUN_00756d40(auStack_1c,DAT_0023d900);
        FUN_00756eb0(auStack_20,uVar3);
        break;
      case 3:
        uVar3 = FUN_00756d40(auStack_1c,DAT_0023d904);
        FUN_00756eb0(auStack_20,uVar3);
        break;
      default:
switchD_0023d69c_caseD_4:
        uVar3 = FUN_00756d40(auStack_1c,iVar5);
        FUN_00756eb0(auStack_20,uVar3);
        break;
      case 5:
        uVar3 = FUN_00756d40(auStack_1c,DAT_0023d908);
        FUN_00756eb0(auStack_20,uVar3);
        break;
      case 6:
        uVar3 = FUN_00756d40(auStack_1c,DAT_0023d910);
        FUN_00756eb0(auStack_20,uVar3);
        break;
      case 7:
        uVar3 = FUN_00756d40(auStack_1c,DAT_0023d914);
        FUN_00756eb0(auStack_20,uVar3);
        break;
      case 0xb:
        uVar3 = FUN_00756d40(auStack_1c,DAT_0023d90c);
        FUN_00756eb0(auStack_20,uVar3);
      }
    }
    FUN_007558d8(auStack_20,2,0,iVar4);
    FUN_00756eb0(param_1 + iVar4 * 4 + 0x14,auStack_20);
    iVar4 = iVar4 + 1;
    if (7 < iVar4) {
      return auStack_20;
    }
  } while( true );
}


