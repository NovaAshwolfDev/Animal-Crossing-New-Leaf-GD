/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00446314. Provisional types; not original source or a verified portable implementation. */

int FUN_00446314(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_8c;
  undefined1 auStack_88 [12];
  byte local_7c;
  
  iVar2 = FUN_00446674();
  iVar1 = DAT_00446400;
  if ((iVar2 != 0) && (uVar5 = 0, iVar2 = 0, param_1[6] != 0)) {
    do {
      iVar3 = FUN_00446c00(param_1 + uVar5 * 4 + 7);
      iVar4 = iVar1;
      if (iVar3 != 0) {
        local_8c = 0;
        FUN_002fff30(auStack_88,0x60);
        iVar4 = (**(code **)(*param_1 + 0x34))(param_1,auStack_88,0x60,&local_8c,iVar3,2,0x12);
        if ((DAT_00446404 != iVar4 * 0x400000) && (local_8c == 0)) {
          iVar4 = DAT_00446408;
        }
      }
      if ((-1 < iVar4) && ((((uint)local_7c & param_2 & 0xffffff7f) != 0 || (param_2 == 0)))) {
        iVar2 = iVar2 + 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_1[6]);
  }
  return iVar2;
}


