/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 003c8168. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_003c8168(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  int local_20;
  int local_1c;
  
  *param_1 = 3;
  param_1[1] = 3;
  if (((*DAT_003c82cc & 1) == 0) && (iVar1 = FUN_003025cc(DAT_003c82cc), iVar1 != 0)) {
    local_28 = 3;
    uStack_24 = 3;
    uVar2 = FUN_0059af60();
    FUN_0059b0e0(DAT_003c82d0,uVar2,&local_28);
  }
  uVar2 = DAT_003c82d0;
  FUN_007dc9d8(auStack_38,DAT_003c82d0);
  FUN_007dca10(&local_28,uVar2);
  iVar1 = FUN_007dc980(auStack_38,&local_28);
  while (iVar1 != 0) {
    FUN_00697420(param_1 + local_20 * 2 + local_1c * 8 + 2);
    FUN_0059b024(&local_28);
    iVar1 = FUN_007dc980(auStack_38,&local_28);
  }
  iVar1 = 0;
  do {
    iVar3 = 0;
    do {
      FUN_0079762c(param_1 + iVar3 * 0x400 + iVar1 * 0x800 + 0x22);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  uVar4 = 0;
  do {
    FUN_0029435c(param_1 + uVar4 * 4 + 0x1022);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  return auStack_38;
}


