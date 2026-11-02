/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00285eb8. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_00285eb8(void)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 auStack_c8 [8];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  int local_a8;
  int local_a4;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [24];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined1 local_50 [8];
  int local_48;
  int iStack_44;
  undefined1 auStack_38 [16];
  int local_28;
  int iStack_24;
  undefined1 auStack_20 [12];
  
  puVar3 = DAT_002861b0;
  FUN_007acd50(auStack_70,*DAT_002861b0);
  FUN_007acdd0(auStack_c8,*puVar3);
  iVar4 = FUN_007acd1c(auStack_c8,auStack_70);
  uVar2 = local_b8;
  while (iVar4 != 0) {
    local_b8 = uVar2;
    iVar4 = FUN_0074702c(1);
    if (iVar4 != 0) {
      pcVar5 = (char *)FUN_00636178(uVar2);
      iStack_44 = (int)pcVar5[3];
      local_48 = (int)pcVar5[2];
      iStack_24 = (int)pcVar5[1];
      local_28 = (int)*pcVar5;
      uVar6 = FUN_0059b0e0(auStack_38,&local_28,&local_48);
      FUN_007dcaec(auStack_a0,uVar6,local_50);
      FUN_007dc9d8(auStack_90,auStack_a0);
      FUN_007dca10(auStack_80,auStack_a0);
      iVar7 = FUN_007dc980(auStack_80,auStack_90);
      while (iVar7 != 0) {
        FUN_0059afac(auStack_20,auStack_78);
        FUN_0059ace8(&local_58,auStack_20);
        FUN_0059abf0(&local_a8,auStack_20);
        puVar8 = (undefined2 *)FUN_007e23e0(iVar4,local_58,uStack_54);
        if (puVar8 != (undefined2 *)0x0) {
          uVar1 = *puVar8;
          uVar6 = FUN_001cd62c();
          iVar7 = FUN_001cd81c(uVar6,uVar1);
          if (((iVar7 != 0) && (*(char *)(iVar7 + local_a4 * 0xa0 + local_a8 * 10 + 8) != '\0')) &&
             (iVar9 = FUN_007e206c(iVar4,local_58,uStack_54), iVar9 != 0)) {
            FUN_00692aa4(iVar9,local_a8,local_a4,iVar7 + local_a4 * 0xa0 + local_a8 * 10);
          }
        }
        FUN_0059b024(auStack_80);
        iVar7 = FUN_007dc980(auStack_80,auStack_90);
      }
    }
    FUN_00592db8(1,local_c0,local_bc,local_b8);
    FUN_001cbd60(auStack_c8);
    iVar4 = FUN_007acd1c(auStack_c8,auStack_70);
    uVar2 = local_b8;
  }
  iVar4 = FUN_00636e3c();
  FUN_0063a874(iVar4 + 0x49520);
  return auStack_70;
}


