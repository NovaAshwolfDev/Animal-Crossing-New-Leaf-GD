/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00232288. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void category_replace_one(void *arg0,uint arg1,uint arg2,void *arg3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  
  if (((*DAT_0023246c & 1) == 0) && (iVar1 = FUN_003025cc(DAT_0023246c), iVar1 != 0)) {
    local_30 = 6;
    uStack_2c = 5;
    uVar2 = FUN_0059af60();
    FUN_0059b0e0(DAT_00232470,uVar2,&local_30);
  }
  uVar2 = DAT_00232470;
  FUN_007dc9d8(auStack_40,DAT_00232470);
  uVar5 = 0;
  FUN_007dca10(&local_30,uVar2);
  iVar1 = FUN_007dc980(&local_30,auStack_40);
  while (iVar1 != 0) {
    if (*(byte *)((int)arg0 + local_28 + local_24 * 7) == arg1) {
      uVar5 = uVar5 + 1;
    }
    FUN_0059b024(&local_30);
    iVar1 = FUN_007dc980(&local_30,auStack_40);
  }
  iVar1 = 0;
  uVar3 = rng_next_u32(arg3);
  FUN_007dca10(&local_30,uVar2);
  iVar4 = FUN_007dc980(&local_30,auStack_40);
  do {
    if (iVar4 == 0) {
      return;
    }
    if (*(byte *)((int)arg0 + local_28 + local_24 * 7) == arg1) {
      if (iVar1 == (int)((ulonglong)uVar5 * (ulonglong)uVar3 >> 0x20)) {
        *(char *)((int)arg0 + local_28 + local_24 * 7) = (char)arg2;
        return;
      }
      iVar1 = iVar1 + 1;
    }
    FUN_0059b024(&local_30);
    iVar4 = FUN_007dc980(&local_30,auStack_40);
  } while( true );
}


