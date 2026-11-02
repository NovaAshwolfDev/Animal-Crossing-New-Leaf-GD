/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00754fc8. Provisional types; not original source or a verified portable implementation. */

void FUN_00754fc8(int param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = FUN_005a20f8();
  if ((iVar2 != 0) && (iVar2 = FUN_007dcdac(), iVar2 != 0)) {
    iVar2 = FUN_005a20f8(param_1);
    if (iVar2 != 0) {
      FUN_007dcdac();
    }
    uVar1 = *(ushort *)(param_1 + 2);
    *(ushort *)(param_1 + 2) = uVar1 & 0x3fff;
    if (param_2 < 4) {
      *(ushort *)(param_1 + 2) = uVar1 & 0x3fff | (ushort)(param_2 << 0xe);
    }
  }
  return;
}


