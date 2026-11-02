/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001e6910. Provisional types; not original source or a verified portable implementation. */

int FUN_001e6910(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  bool bVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int local_dc8;
  int iStack_dc4;
  undefined4 *local_dc0;
  undefined4 *local_dbc;
  undefined4 local_db8;
  undefined4 local_db4;
  undefined1 auStack_db0 [3068];
  int local_1b4;
  int iStack_1b0;
  undefined4 *local_1ac;
  undefined4 *local_1a8;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [8];
  int local_80;
  int local_7c;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  int local_60;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_60 = FUN_0074702c(1);
  if (local_60 != 0) {
    FUN_008a150c(&local_1b4);
    local_48 = 4;
    uStack_44 = 3;
    local_50 = 2;
    uStack_4c = 2;
    FUN_0059b0e0(auStack_78,&local_50,&local_48);
    FUN_007dc9d8(auStack_98,auStack_78);
    FUN_007dca10(&local_dc0,auStack_78);
    iVar3 = FUN_007dc980(&local_dc0,auStack_98);
    if (iVar3 != 0) {
      do {
        iVar3 = FUN_007776cc(local_db8,local_db4,1);
        if ((iVar3 != 0) &&
           (FUN_0059afac(auStack_db0,&local_db8), puVar8 = local_1a8, local_1b4 < iStack_1b0)) {
          if (local_1a8 == (undefined4 *)0x0) {
            uVar7 = 0;
          }
          else {
            local_1a8 = (undefined4 *)*local_1a8;
            uVar7 = FUN_0059afac(puVar8,auStack_db0);
          }
          if (local_1b4 < iStack_1b0) {
            local_1ac[local_1b4] = uVar7;
            local_1b4 = local_1b4 + 1;
          }
        }
        FUN_0059b024(&local_dc0);
        iVar3 = FUN_007dc980(&local_dc0,auStack_98);
      } while (iVar3 != 0);
    }
    FUN_005a6734(&local_1b4,param_3);
    local_54 = 0;
    iVar5 = local_54;
    iVar3 = local_60;
    while (local_60 = iVar5, 0 < local_1b4) {
      if (local_1b4 == 0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        puVar8 = (undefined4 *)*local_1ac;
      }
      local_54 = local_60;
      local_60 = iVar3;
      puVar4 = (undefined2 *)FUN_007e23e0(iVar3,*puVar8,puVar8[1]);
      if (puVar4 != (undefined2 *)0x0) {
        uVar1 = *puVar4;
        uVar7 = FUN_001cd62c();
        iVar3 = FUN_001cd81c(uVar7,uVar1);
        if (iVar3 != 0) {
          FUN_008a1584(&local_dc8);
          uVar7 = FUN_005dc500();
          FUN_007dc9d8(auStack_a8,uVar7);
          FUN_007dca10(auStack_88,uVar7);
          iVar5 = FUN_007dc980(auStack_88,auStack_a8);
          if (iVar5 != 0) {
            do {
              iVar5 = FUN_002873e0(*(undefined1 *)(iVar3 + local_7c * 0xa0 + local_80 * 10 + 8));
              if ((iVar5 != 0) &&
                 (FUN_0059afac(auStack_68,&local_80), puVar6 = local_dbc, local_dc8 < iStack_dc4)) {
                if (local_dbc != (undefined4 *)0x0) {
                  local_dbc = (undefined4 *)*local_dbc;
                  puVar6 = (undefined4 *)FUN_0059afac(puVar6,auStack_68);
                }
                if (local_dc8 < iStack_dc4) {
                  local_dc0[local_dc8] = puVar6;
                  local_dc8 = local_dc8 + 1;
                }
              }
              FUN_0059b024(auStack_88);
              iVar5 = FUN_007dc980(auStack_88,auStack_a8);
            } while (iVar5 != 0);
          }
          bVar2 = false;
          FUN_005a6734(&local_dc8,param_3);
          if (0 < local_dc8) {
            puVar6 = local_dc0;
            if (local_dc8 == 0) {
              puVar6 = (undefined4 *)0x0;
            }
            piVar9 = (int *)0x0;
            if (local_dc8 != 0) {
              piVar9 = (int *)*puVar6;
            }
            FUN_0059adbc(&local_40,puVar8,piVar9);
            uVar7 = FUN_002887e0(*(undefined1 *)(iVar3 + piVar9[1] * 0xa0 + *piVar9 * 10 + 8),
                                 param_2);
            FUN_002876dc(local_40,local_3c,uVar7);
            if (0 < local_dc8) {
              puVar8 = (undefined4 *)*local_dc0;
              *puVar8 = local_dbc;
              local_dbc = puVar8;
            }
            FUN_005a66dc(&local_dc8,0,1);
            bVar2 = true;
          }
          if (bVar2) {
            local_54 = 1;
            if (0 < local_1b4) {
              local_1ac = (undefined4 *)*local_1ac;
              *local_1ac = local_1a8;
              local_1a8 = local_1ac;
            }
            FUN_005a66dc(&local_1b4,0,1);
            return local_54;
          }
        }
      }
      if (0 < local_1b4) {
        puVar8 = (undefined4 *)*local_1ac;
        *puVar8 = local_1a8;
        local_1a8 = puVar8;
      }
      FUN_005a66dc(&local_1b4,0,1);
      iVar5 = local_54;
      iVar3 = local_60;
    }
  }
  return local_60;
}


