/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00593474. Provisional types; not original source or a verified portable implementation. */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void terrain_generate(void *arg0,void *arg1,uint arg2,void *arg3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  byte abStack_90 [10];
  undefined1 local_86;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  int local_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [40];
  
  *(char *)arg0 = (char)arg2;
  uVar1 = *(uint *)((int)arg3 + 0xf8);
  uVar2 = rng_next_u32(arg1);
  FUN_003d56c8(arg3,auStack_40,(int)((ulonglong)uVar1 * (ulonglong)uVar2 >> 0x20));
  if (arg2 == 0) {
    acre_expand_template(abStack_90,auStack_40,DAT_005936cc);
  }
  else {
    acre_expand_template(abStack_90,auStack_40,DAT_005936c4);
  }
  local_86 = 4;
  category_replace_one(abStack_90,0,1,arg1);
  category_replace_one(abStack_90,0,2,arg1);
  category_replace_one(abStack_90,0,3,arg1);
  category_promote_08_13(abStack_90,arg1);
  category_promote_22_23_27(abStack_90,arg1);
  if (arg2 == 0) {
    category_promote_2c_2a(abStack_90,arg1);
  }
  else {
    category_promote_2b_26(abStack_90,arg1);
  }
  category_finalize_neighbors(abStack_90);
  if (((*DAT_005936c8 & 1) == 0) && (iVar3 = FUN_003025cc(DAT_005936c8), iVar3 != 0)) {
    local_60 = 6;
    uStack_5c = 5;
    uVar4 = FUN_0059af60();
    FUN_0059b0e0(DAT_005936d0,uVar4,&local_60);
  }
  uVar4 = DAT_005936d0;
  FUN_007dc9d8(auStack_50,DAT_005936d0);
  FUN_007dca10(&local_60,uVar4);
  iVar3 = FUN_007dc980(&local_60,auStack_50);
  while (iVar3 != 0) {
    puVar5 = (undefined2 *)FUN_006978b0(arg0,local_58,local_54);
    uVar1 = acre_choose_variant((uint)abStack_90[local_58 + local_54 * 7],arg1);
    *puVar5 = (short)uVar1;
    FUN_0059b024(&local_60);
    iVar3 = FUN_007dc980(&local_60,auStack_50);
  }
  return;
}


