/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002320ec. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void category_finalize_neighbors(void *arg0)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_38 [16];
  undefined4 local_28;
  undefined4 uStack_24;
  int local_20;
  int local_1c;
  
  if (((*DAT_00232278 & 1) == 0) && (iVar1 = FUN_003025cc(DAT_00232278), iVar1 != 0)) {
    local_28 = 6;
    uStack_24 = 5;
    uVar2 = FUN_0059af60();
    FUN_0059b0e0(DAT_0023227c,uVar2,&local_28);
  }
  uVar2 = DAT_0023227c;
  FUN_007dc9d8(auStack_38,DAT_0023227c);
  FUN_007dca10(&local_28,uVar2);
  iVar1 = FUN_007dc980(&local_28,auStack_38);
  while (iVar1 != 0) {
    if (*(char *)((int)arg0 + local_20 + local_1c * 7) == '!') {
      *(undefined1 *)((int)arg0 + local_1c * 7 + 1 + local_20) = 0x3c;
    }
    if (*(char *)((int)arg0 + local_20 + local_1c * 7) == ' ') {
      *(undefined1 *)((int)arg0 + local_1c * 7 + -1 + local_20) = 0x45;
    }
    FUN_0059b024(&local_28);
    iVar1 = FUN_007dc980(&local_28,auStack_38);
  }
  return;
}


