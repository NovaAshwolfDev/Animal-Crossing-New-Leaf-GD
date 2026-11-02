/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00583004. Provisional types; not original source or a verified portable implementation. */

uint FUN_00583004(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  iVar3 = FUN_007f3734();
  if ((iVar3 != 0) && (iVar3 = FUN_007f3734(param_2), iVar3 != 0)) {
    uVar4 = FUN_007f37b0(param_1);
    uVar5 = FUN_007f37b0(param_2);
    uVar7 = 0;
    if (uVar4 < 8 && uVar5 < 8) {
      uVar7 = (uint)*(byte *)(DAT_00583134 + uVar4 * 8 + uVar5);
    }
    iVar3 = *(int *)(DAT_00583138 + 4);
    if ((iVar3 == 0) || (0x14c < *(ushort *)(param_1 + 0x2c))) {
      iVar6 = 0;
    }
    else {
      iVar6 = iVar3 + (uint)*(ushort *)(param_1 + 0x2c) * 0x22;
    }
    if ((iVar3 == 0) || (0x14c < *(ushort *)(param_2 + 0x2c))) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + (uint)*(ushort *)(param_2 + 0x2c) * 0x22;
    }
    if (iVar6 != 0 && iVar3 != 0) {
      bVar1 = *(byte *)(iVar3 + 0x1c);
      cVar2 = *(char *)(iVar3 + 3);
      uVar4 = FUN_005cc388(*(byte *)(iVar6 + 0x1c) & 0xf,(int)*(char *)(iVar6 + 3));
      uVar5 = FUN_005cc388(bVar1 & 0xf,(int)cVar2);
      if (uVar4 < 0xc) {
        uVar4 = (uint)*(byte *)(DAT_0058313c + uVar4);
      }
      else {
        uVar4 = 4;
      }
      if (uVar5 < 0xc) {
        uVar5 = (uint)*(byte *)(DAT_0058313c + uVar5);
      }
      else {
        uVar5 = 4;
      }
      if (uVar4 < 4 && uVar5 < 4) {
        uVar4 = (uint)*(byte *)(DAT_00583140 + uVar4 * 4 + uVar5);
      }
      else {
        uVar4 = 0;
      }
      iVar3 = FUN_00582eac(*(undefined1 *)(iVar6 + 2),*(undefined1 *)(iVar3 + 2));
      uVar7 = uVar7 + uVar4 + iVar3;
    }
  }
  return uVar7;
}


