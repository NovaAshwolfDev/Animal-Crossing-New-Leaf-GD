/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00592534. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_00592534(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  int local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined1 *local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  char local_e8;
  undefined1 local_e7;
  undefined1 *local_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 local_b0 [4];
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined1 auStack_a0 [4];
  uint local_9c;
  undefined4 local_98;
  int iStack_94;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 auStack_78 [8];
  byte local_70 [8];
  char local_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [20];
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  piStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  puVar2 = (undefined1 *)FUN_00591d40(*param_1,param_1[1],param_2);
  if (puVar2 != (undefined1 *)0x0) {
    uVar3 = FUN_005dc500();
    FUN_0059b104(&local_120,uVar3);
    local_110 = 7;
    local_10c = 7;
    FUN_007dcaa4(auStack_d0,&local_120,&local_110);
    FUN_007dcaec(auStack_e0,auStack_d0,param_1);
    iVar4 = FUN_00769904(param_2);
    if (iVar4 == 0) {
      FUN_00692a80(auStack_c0);
      uVar3 = FUN_0074702c(param_3);
      FUN_0059ace8(&local_118,param_1);
      iVar4 = FUN_007e206c(uVar3,local_118,local_114);
      if (iVar4 != 0) {
        FUN_0059abf0(&local_120,param_1);
        FUN_007fce4c(iVar4,auStack_c0,local_120,local_11c);
        FUN_007f353c(auStack_c0);
      }
      local_e4 = auStack_e0;
      uVar3 = FUN_00692a4c(auStack_90,auStack_c0);
      local_108 = FUN_0074702c(param_3);
      uVar5 = FUN_005dc500();
      FUN_0059b104(local_68,uVar5);
      FUN_00692a80(auStack_78);
      FUN_007dc9d8(auStack_58,local_68);
      FUN_007dca10(local_b0,local_68);
      iVar4 = FUN_007dc980(local_b0,auStack_58);
      while (iVar4 != 0) {
        FUN_007dc958(&local_80,&local_a8,local_e4);
        iVar4 = FUN_007e2124(local_108,local_80,uStack_7c);
        if (iVar4 != 0) {
          FUN_00692a4c(&local_f0,puVar2 + local_a8 * 10 + local_a4 * 0xa0);
          FUN_0059ace8(&local_98,&local_80);
          FUN_0059abf0(&local_f8,&local_80);
          iVar4 = FUN_007e206c(local_108,local_98,iStack_94);
          if (iVar4 != 0) {
            FUN_007fce4c(iVar4,auStack_78,local_f8,local_f4);
            cVar1 = local_e8;
            local_9c = (uint)local_70[0];
            if (local_e8 == '\0') {
LAB_005929f8:
              FUN_00692a4c(auStack_48,auStack_78);
            }
            else {
              uVar5 = FUN_00610c2c();
              iVar6 = FUN_00611914(0x400,uVar5);
              if ((iVar6 != 0) && (cVar1 == '1' || cVar1 == '2')) goto LAB_005929f8;
              FUN_00692a4c(&local_114,auStack_78);
              FUN_00692a4c(&local_120,&local_f0);
              FUN_00692910(&local_120,uVar3);
              if (cVar1 == -0x52) {
                local_114 = (undefined1 *)local_120;
LAB_005929dc:
                local_10c = CONCAT31(local_10c._1_3_,cVar1);
              }
              else {
                if (cVar1 == -0x51) {
                  local_114 = (undefined1 *)CONCAT22(local_114._2_2_,(undefined2)local_120);
                  local_110 = CONCAT22(local_11c._2_2_,(undefined2)local_110);
                  goto LAB_005929dc;
                }
                if (cVar1 == -0x50) {
                  local_114 = (undefined1 *)CONCAT22(local_120._2_2_,(undefined2)local_114);
                  local_110 = CONCAT22(local_110._2_2_,(undefined2)local_11c);
                  goto LAB_005929dc;
                }
                if (cVar1 == -0x4f) {
                  local_110 = local_11c;
                  goto LAB_005929dc;
                }
                local_114 = (undefined1 *)local_120;
                local_110 = local_11c;
                if (cVar1 != '\x05') goto LAB_005929dc;
              }
              if ((local_9c == 0x31) && (cVar1 == '3' || cVar1 == '2')) {
                local_10c = CONCAT31(local_10c._1_3_,0x31);
              }
              local_10c._0_2_ = CONCAT11(local_e7,(undefined1)local_10c);
              uVar5 = FUN_007f34d0(auStack_78);
              FUN_00692954(&local_114,uVar5);
              FUN_00692a4c(auStack_48,&local_114);
            }
            FUN_00692aa4(iVar4,local_f8,local_f4,auStack_48);
          }
        }
        FUN_0059b024(local_b0);
        iVar4 = FUN_007dc980(local_b0,auStack_58);
      }
      if (local_28 != 0) {
        FUN_0059afc0(&local_110);
        FUN_0059afd4(&local_110,auStack_e0);
        local_118 = CONCAT31(local_118._1_3_,(char)param_3);
        local_f8 = CONCAT31(local_f8._1_3_,(char)param_3);
        local_114 = puVar2;
        local_f4 = puVar2;
        iVar4 = FUN_0059afac(&local_f0,&local_110);
        FUN_007dc9d8(&local_80,auStack_e0);
        FUN_007dca10(auStack_a0,auStack_e0);
        iVar6 = FUN_007dc980(auStack_a0,&local_80);
        while (iVar6 != 0) {
          local_120 = FUN_0074702c(*(undefined1 *)(iVar4 + -8));
          FUN_007dc900(&local_108,&local_98,iVar4);
          FUN_00692a4c(local_70,*(int *)(iVar4 + -4) + local_104 * 0xa0 + local_108 * 10);
          cVar1 = local_68[0];
          if (local_68[0] != '\0') {
            iVar6 = FUN_0063b060();
            if (iVar6 == 0) {
              FUN_007a28e8(local_98,iStack_94,local_120);
            }
            else {
              iVar6 = FUN_0063b060(cVar1);
              if (iVar6 == 1) {
                FUN_007a1454(local_98,iStack_94,local_120);
              }
            }
            if (cVar1 == '\x03') {
              FUN_007a28e8(local_98,iStack_94 + 1,local_120);
              FUN_007a28e8(local_98,iStack_94 + 2,local_120);
            }
          }
          FUN_0059b024(auStack_a0);
          iVar6 = FUN_007dc980(auStack_a0,&local_80);
        }
        local_b0[0] = *(undefined1 *)(iVar4 + -8);
        local_ac = *(undefined4 *)(iVar4 + -4);
        FUN_0059afac(&local_a8,iVar4);
        iVar4 = FUN_0074702c(param_3);
        iVar6 = FUN_0074702c(1);
        if (iVar4 == iVar6) {
          pcVar7 = (char *)FUN_00636178(param_2);
          FUN_0026b7d4((int)*pcVar7 + *param_1,(int)pcVar7[1] + param_1[1],(int)pcVar7[2] + *param_1
                       ,(int)pcVar7[3] + param_1[1]);
        }
      }
    }
    else {
      local_e8 = (char)param_2;
      uVar3 = FUN_0074702c(param_3);
      uVar5 = FUN_005dc500();
      FUN_0059b104(auStack_c0,uVar5);
      FUN_00692a80(auStack_a0);
      FUN_007dc9d8(local_b0,auStack_c0);
      FUN_007dca10(&local_118,auStack_c0);
      iVar4 = FUN_007dc980(&local_118,local_b0);
      while (iVar4 != 0) {
        FUN_007dc958(&local_f0,&local_110,auStack_e0);
        iVar4 = FUN_007e2124(uVar3,local_f0,uStack_ec);
        if (iVar4 != 0) {
          FUN_00692a4c(&iStack_94,puVar2 + local_110 * 10 + local_10c * 0xa0);
          FUN_0059ace8(&local_f8,&local_f0);
          FUN_0059abf0(&local_100,&local_f0);
          iVar4 = FUN_007e206c(uVar3,local_f8,local_f4);
          if (iVar4 != 0) {
            FUN_007fce4c(iVar4,auStack_a0,local_100,uStack_fc);
            FUN_00591f90(auStack_88,&local_e8,auStack_a0,&iStack_94);
            FUN_00692aa4(iVar4,local_100,uStack_fc,auStack_88);
          }
        }
        FUN_0059b024(&local_118);
        iVar4 = FUN_007dc980(&local_118,local_b0);
      }
    }
    puVar2 = auStack_e0;
  }
  return puVar2;
}


