/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001e93ac. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_001e93ac(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 local_680 [2];
  undefined4 local_678;
  undefined1 auStack_674 [4];
  undefined1 auStack_670 [4];
  int local_66c [2];
  undefined4 *local_664;
  int local_260;
  int iStack_25c;
  undefined4 *local_258;
  undefined4 *local_254;
  int local_15c;
  int iStack_158;
  int *local_154;
  undefined4 *local_150;
  undefined4 local_58 [2];
  undefined1 auStack_50 [20];
  undefined4 local_3c;
  undefined4 local_38;
  char *local_34;
  
  FUN_008a150c(&local_15c);
  FUN_008a150c(&local_260);
  uVar2 = FUN_005885ac();
  FUN_007dc9d8(auStack_50,uVar2);
  FUN_007dca10(local_680,uVar2);
  iVar3 = FUN_007dc980(local_680,auStack_50);
  if (iVar3 != 0) {
    do {
      FUN_0059afac(auStack_670,&local_678);
      puVar4 = local_150;
      if (local_15c < iStack_158) {
        if (local_150 == (undefined4 *)0x0) {
          iVar3 = 0;
        }
        else {
          local_150 = (undefined4 *)*local_150;
          iVar3 = FUN_0059afac(puVar4,auStack_670);
        }
        if (local_15c < iStack_158) {
          local_154[local_15c] = iVar3;
          local_15c = local_15c + 1;
        }
      }
      FUN_0059b024(local_680);
      iVar3 = FUN_007dc980(local_680,auStack_50);
    } while (iVar3 != 0);
  }
  piVar7 = local_154 + local_15c;
  if (local_154 != piVar7) {
    piVar6 = local_154;
    do {
      iVar3 = FUN_00777498(*(undefined4 *)*piVar6,((undefined4 *)*piVar6)[1],1);
      if ((iVar3 != 0) &&
         (FUN_0059afac(local_680,*piVar6), puVar4 = local_254, local_260 < iStack_25c)) {
        if (local_254 != (undefined4 *)0x0) {
          local_254 = (undefined4 *)*local_254;
          puVar4 = (undefined4 *)FUN_0059afac(puVar4,local_680);
        }
        if (local_260 < iStack_25c) {
          local_258[local_260] = puVar4;
          local_260 = local_260 + 1;
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar7);
  }
  FUN_005a6734(&local_260,param_2);
  uVar1 = DAT_001e9788;
  uVar2 = DAT_001e9784;
  local_3c = 0;
  if (0 < local_260) {
    do {
      if (local_260 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)*local_258;
      }
      iVar3 = FUN_00697850(*puVar4,puVar4[1]);
      if (iVar3 != 0) {
        uVar5 = FUN_0074702c(1);
        uVar5 = FUN_007e206c(uVar5,*puVar4,puVar4[1]);
        local_678 = uVar1;
        iVar3 = FUN_005c780c(auStack_674);
        *(undefined4 *)(iVar3 + 8) = 0;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        *(undefined4 *)(iVar3 + 0x10) = 0;
        FUN_005a6780((undefined4 *)(iVar3 + 8),0x100,iVar3 + 0x14);
        local_34 = "Checker";
        local_38 = uVar2;
        FUN_005c774c(auStack_674,0x3c00,*DAT_001e978c,&local_38,1);
        FUN_0074921c(uVar5,&local_678);
        if (local_66c[0] != 0) {
          FUN_005a6734(local_66c,param_2);
          if (local_66c[0] < 1) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            puVar8 = (undefined4 *)*local_664;
            FUN_00115538(local_664,local_664 + 1,local_66c[0] * 4 + -4);
            local_66c[0] = local_66c[0] + -1;
          }
          local_58[0] = 0;
          local_680[0] = 0;
          FUN_00745ff8(local_58,local_680,*puVar4,puVar4[1],*puVar8,puVar8[1]);
          FUN_002876dc(local_58[0],local_680[0],0x5c);
          FUN_00113b48(auStack_674);
          local_678 = uVar1;
          FUN_005c7828(auStack_674);
          return 1;
        }
        FUN_00113b48(auStack_674);
        local_678 = uVar1;
        FUN_005c7828(auStack_674);
      }
      if (0 < local_260) {
        puVar4 = (undefined4 *)*local_258;
        *puVar4 = local_254;
        local_254 = puVar4;
      }
      FUN_005a66dc(&local_260,0,1);
    } while (0 < local_260);
  }
  return local_3c;
}


