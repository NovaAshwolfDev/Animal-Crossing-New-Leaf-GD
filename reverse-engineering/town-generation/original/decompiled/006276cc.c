/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 006276cc. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_006276cc(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_310;
  undefined4 uStack_30c;
  undefined1 auStack_308 [640];
  undefined1 auStack_88 [68];
  undefined1 *local_44;
  undefined1 auStack_40 [4];
  int local_3c [3];
  undefined1 *local_30;
  undefined1 auStack_2c [8];
  
  FUN_00636e3c();
  iVar2 = FUN_006378a0();
  puVar3 = (undefined1 *)FUN_006138d4(iVar2 + 4,(int)*(char *)(param_1 + 0xa6));
  if (puVar3 != (undefined1 *)0x0) {
    local_44 = puVar3;
    FUN_00100648(auStack_88,DAT_00627a10,0x16,3);
    iVar2 = 0;
    do {
      FUN_002d5734(auStack_88 + iVar2 * 0x16);
      local_3c[iVar2] = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    iVar8 = 0;
    iVar2 = 0;
    do {
      iVar9 = param_1 + iVar2 * 0x16;
      iVar4 = FUN_007b8ee0(iVar9 + 8);
      if ((iVar4 != 0) && ((*(byte *)(param_1 + 0xaa) >> (iVar2 + 4U & 0xff) & 1) == 0)) {
        bVar1 = true;
        iVar4 = 0;
        if (0 < iVar8) {
          do {
            iVar5 = FUN_007b8ef0(auStack_88 + iVar4 * 0x16,iVar9 + 8);
            if (iVar5 != 0) {
              bVar1 = false;
              local_3c[iVar2] = local_3c[iVar2] + 1;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < iVar8);
          if (!bVar1) goto LAB_006277f0;
        }
        FUN_002d56d4(auStack_88 + iVar8 * 0x16,iVar9 + 8);
        local_3c[iVar8] = local_3c[iVar8] + 1;
        iVar8 = iVar8 + 1;
      }
LAB_006277f0:
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    iVar2 = FUN_00636e3c();
    puVar3 = (undefined1 *)(iVar2 + 0x20);
    iVar2 = 0;
    if (0 < iVar8) {
      local_30 = puVar3;
      do {
        puVar6 = auStack_88 + iVar2 * 0x16;
        puVar3 = (undefined1 *)FUN_007e71c4(local_44);
        if (puVar3 != (undefined1 *)0x0) {
          FUN_00756dbc(auStack_40);
          if (local_3c[iVar2] == 2) {
            FUN_00625400(&local_310,1,0);
            FUN_00756eb0(auStack_40,&local_310);
            uVar7 = 1;
          }
          else if (local_3c[iVar2] == 3) {
            FUN_00625400(&local_310,0,puVar3,*(undefined2 *)(local_44 + 0x2c));
            FUN_00756eb0(auStack_40,&local_310);
            uVar7 = 0;
          }
          else {
            FUN_00625400(&local_310,2,0);
            FUN_00756eb0(auStack_40,&local_310);
            uVar7 = 2;
          }
          FUN_00638fa4(auStack_308);
          local_310 = FUN_00756da4(auStack_2c,auStack_40);
          uStack_30c = 0xffffffff;
          FUN_00625c20(auStack_308,*(undefined2 *)(local_44 + 0x2c),puVar3,5);
          local_310 = 1;
          uStack_30c = 0;
          iVar4 = FUN_0061ddf8(local_44,auStack_308,puVar3,1);
          if (iVar4 == 0) {
            uVar10 = FUN_002d57fc(local_30,puVar6);
            iVar4 = (int)uVar10;
            puVar3 = (undefined1 *)((ulonglong)uVar10 >> 0x20);
            if (iVar4 != 0) {
              puVar3 = local_44;
            }
            if (iVar4 != 0 && puVar3 != (undefined1 *)0x0) {
              local_310 = 0;
              FUN_0062a14c(iVar4 + 0x8b82,5,*(undefined2 *)(puVar3 + 0x2c),uVar7);
            }
          }
          else {
            iVar4 = 0;
            do {
              iVar5 = param_1 + iVar4 * 0x16;
              iVar9 = FUN_007b8ef0(iVar5 + 8,puVar6);
              if (iVar9 != 0) {
                FUN_002d5734(iVar5 + 8);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < 3);
          }
          FUN_00797a2c(0xf,puVar6,1);
          FUN_0011e268(auStack_308);
          puVar3 = auStack_40;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar8);
    }
  }
  return puVar3;
}


