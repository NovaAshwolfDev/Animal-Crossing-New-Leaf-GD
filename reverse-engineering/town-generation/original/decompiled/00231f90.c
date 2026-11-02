/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00231f90. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void acre_expand_template(void *arg0,void *arg1,void *arg2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  
  if (((*DAT_002320dc & 1) == 0) && (iVar1 = FUN_003025cc(DAT_002320dc), iVar1 != 0)) {
    local_30 = 6;
    uStack_2c = 5;
    uVar2 = FUN_0059af60();
    FUN_0059b0e0(DAT_002320e0,uVar2,&local_30);
  }
  uVar2 = DAT_002320e0;
  FUN_007dc9d8(auStack_40,DAT_002320e0);
  iVar1 = 0;
  FUN_007dca10(&local_30,uVar2);
  iVar3 = FUN_007dc980(&local_30,auStack_40);
  while (iVar3 != 0) {
    cVar4 = *(char *)((int)arg2 + local_28 + local_24 * 7);
    if (cVar4 == 'u') {
      iVar3 = iVar1 * 2;
      iVar1 = iVar1 + 1;
      cVar4 = (char)*(undefined2 *)((int)arg1 + iVar3);
    }
    *(char *)((int)arg0 + local_28 + local_24 * 7) = cVar4;
    FUN_0059b024(&local_30);
    iVar3 = FUN_007dc980(&local_30,auStack_40);
  }
  return;
}


