/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005dc500. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_005dc500(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (((*DAT_005dc578 & 1) == 0) && (iVar1 = FUN_003025cc(DAT_005dc578), iVar1 != 0)) {
    local_10 = 0xf;
    uStack_c = 0xf;
    uVar2 = FUN_0059af60();
    FUN_0059b0e0(DAT_005dc57c,uVar2,&local_10);
  }
  return DAT_005dc57c;
}


