/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00616b58. Provisional types; not original source or a verified portable implementation. */

void FUN_00616b58(int param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined1 auStack_24 [16];
  
  if (param_3 != 0) {
    iVar1 = param_1 + 0x1730c;
    iVar2 = FUN_007ead28(iVar1,*(undefined4 *)(DAT_00616cb0 + 0x234));
    if ((iVar2 != 0) && (iVar2 = FUN_005ee3a4(), iVar2 == 0x25)) {
      if (&local_30 != param_2) {
        local_30 = *param_2;
        local_2c = param_2[1];
        local_28 = param_2[2];
      }
      iVar2 = FUN_007eb0d0(iVar1,&local_30);
      if (iVar2 != 0) {
        uVar3 = FUN_005cc158();
        iVar1 = FUN_007eaec0(iVar1,auStack_24);
        if (iVar1 == 0) {
          iVar1 = FUN_005cc1fc(uVar3,auStack_24,1);
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          iVar1 = (iVar1 + -4) * 5;
          if (0x32 < iVar1) {
            iVar1 = 0x32;
          }
        }
        else {
          iVar1 = FUN_0062e0bc(0);
          if (iVar1 == 0) {
            iVar1 = 0;
          }
          else {
            iVar1 = (*(ushort *)(iVar1 + 0x8bec) - 7) * 0x14;
          }
        }
        iVar2 = FUN_0011df34(100);
        if (iVar2 < iVar1) {
          uVar4 = FUN_007f2db0(&local_30);
          *(char *)(param_1 + 0x1750c) = (char)uVar4;
          if (uVar4 < *param_2) {
            uVar4 = 1 << (uVar4 & 0xff);
            if ((param_2[1] & uVar4) != 0) {
              param_2[1] = param_2[1] & ~uVar4;
              param_2[2] = param_2[2] - 1;
            }
          }
        }
      }
    }
    return;
  }
  return;
}


