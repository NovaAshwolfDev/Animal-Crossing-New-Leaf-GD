/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00293dd4. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_00293dd4(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_30 [3];
  undefined4 local_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [8];
  
  iVar5 = 0;
  do {
    FUN_001b7e8c(param_1 + iVar5 * 0x870 + 0x7c,0x16);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  uVar6 = 0;
  while( true ) {
    FUN_00636e3c();
    iVar5 = FUN_006378a0();
    puVar1 = (undefined4 *)FUN_006138d4(iVar5 + 4,uVar6);
    iVar5 = DAT_00294078;
    if (puVar1 != (undefined4 *)0x0) break;
    if (9 < uVar6) goto code_r0x00293e8c;
    uVar6 = uVar6 + 1;
  }
  if (uVar6 < 10) {
    uVar2 = FUN_00756d40(local_30,DAT_00294074);
    FUN_00756eb0(param_1 + 0x24,uVar2);
    *(char *)(param_1 + 0x38) = (char)uVar6 + '\x04';
    FUN_00697eec(param_1 + 0x5c,0x78);
    uVar6 = uVar6 + 1;
    puVar1 = local_30;
    iVar5 = DAT_00294078;
  }
code_r0x00293e8c:
  do {
    FUN_00636e3c(puVar1);
    iVar3 = FUN_006378a0();
    puVar4 = (undefined1 *)FUN_006138d4(iVar3 + 4,uVar6);
    if (puVar4 != (undefined1 *)0x0) break;
    if (9 < uVar6) goto code_r0x00293f2c;
    uVar6 = uVar6 + 1;
    puVar1 = (undefined4 *)(undefined1 *)0x0;
  } while( true );
  if (uVar6 < 10) {
    local_24 = *(undefined4 *)(iVar5 + 8);
    uStack_20 = *(undefined4 *)(iVar5 + 0xc);
    local_30[0] = *(undefined4 *)(iVar5 + 0x1a0);
    local_30[1] = *(undefined4 *)(iVar5 + 0x1a4);
    local_30[2] = *(undefined4 *)(iVar5 + 0x1a8);
    iVar3 = FUN_0011df38(3);
    uVar2 = FUN_00756d40(auStack_1c,*(undefined2 *)((int)&local_24 + iVar3 * 2));
    uVar7 = local_30[iVar3];
    FUN_00756eb0(param_1 + 0x28,uVar2);
    *(char *)(param_1 + 0x39) = (char)uVar6 + '\x04';
    FUN_00697eec(param_1 + 100,uVar7);
    puVar4 = auStack_1c;
    uVar6 = uVar6 + 1;
  }
code_r0x00293f2c:
  do {
    FUN_00636e3c(puVar4);
    iVar3 = FUN_006378a0();
    puVar1 = (undefined4 *)FUN_006138d4(iVar3 + 4,uVar6);
    if (puVar1 != (undefined4 *)0x0) {
      if (uVar6 < 10) {
        uVar2 = FUN_00756d40(local_30,DAT_0029407c);
        FUN_00756eb0(param_1 + 0x2c,uVar2);
        *(char *)(param_1 + 0x3a) = (char)uVar6 + '\x04';
        FUN_00697eec(param_1 + 0x6c,500);
        uVar6 = uVar6 + 1;
        puVar1 = local_30;
      }
code_r0x00293fa4:
      while( true ) {
        FUN_00636e3c(puVar1);
        iVar3 = FUN_006378a0();
        puVar1 = (undefined4 *)FUN_006138d4(iVar3 + 4,uVar6);
        if (puVar1 != (undefined4 *)0x0) {
          if (uVar6 < 10) {
            local_30[0] = *(undefined4 *)(iVar5 + 0x10);
            local_30[1] = *(undefined4 *)(iVar5 + 0x14);
            iVar5 = FUN_0011df38(3);
            uVar2 = FUN_00756d40(local_30 + 2,*(undefined2 *)((int)local_30 + iVar5 * 2));
            FUN_00756eb0(param_1 + 0x30,uVar2);
            *(char *)(param_1 + 0x3b) = (char)uVar6 + '\x04';
            FUN_00697eec(param_1 + 0x74,800);
            puVar1 = local_30 + 2;
          }
          return puVar1;
        }
        if (9 < uVar6) break;
        uVar6 = uVar6 + 1;
        puVar1 = (undefined4 *)0x0;
      }
      return (undefined4 *)0x0;
    }
    if (9 < uVar6) goto code_r0x00293fa4;
    uVar6 = uVar6 + 1;
    puVar4 = (undefined1 *)0x0;
  } while( true );
}


