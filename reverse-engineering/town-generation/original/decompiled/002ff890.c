/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002ff890. Provisional types; not original source or a verified portable implementation. */

undefined8 FUN_002ff890(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  uint *local_20;
  uint *local_18;
  
  uVar1 = 0;
  local_18 = param_2;
  do {
    param_1[8] = uVar1;
LAB_002ff89a:
    uVar1 = (*(code *)param_1[3])(param_1);
    iVar6 = DAT_002ffa14;
    if (uVar1 == 0) goto LAB_002ffa10;
    if (uVar1 != 0x25) {
      pcVar5 = (code *)param_1[1];
      uVar4 = param_1[2];
      goto LAB_002ffa06;
    }
    uVar4 = 0;
    while (((uVar1 = (*(code *)param_1[3])(param_1), 0x1f < (int)uVar1 && (uVar1 < 0x31)) &&
           (uVar2 = (uint)*(byte *)(iVar6 + uVar1 + 0x2ff896), uVar2 != 0))) {
      uVar4 = uVar4 | uVar2;
    }
    if ((int)(uVar4 << 0x1e) < 0) {
      uVar4 = uVar4 & 0xfffffffb;
    }
    param_1[7] = 0;
    iVar6 = 0;
    param_1[6] = 0;
    do {
      if (uVar1 == 0x2a) {
        uVar1 = *local_18;
        local_18 = local_18 + 1;
        param_1[iVar6 + 6] = uVar1;
        uVar1 = (*(code *)param_1[3])(param_1);
        if (iVar6 == 1) {
          if ((int)param_1[7] < 0) {
            uVar4 = uVar4 & 0xffffffdf;
          }
          break;
        }
      }
      else {
        iVar3 = FUN_002fe864(uVar1);
        if (iVar3 != 0) {
          local_20 = param_1 + iVar6;
          local_20[6] = uVar1 - 0x30;
          while( true ) {
            uVar1 = (*(code *)param_1[3])(param_1);
            iVar3 = FUN_002fe864();
            if (iVar3 == 0) break;
            local_20[6] = (local_20[6] * 10 + uVar1) - 0x30;
          }
        }
        if (iVar6 == 1) break;
      }
      if (uVar1 != 0x2e) break;
      uVar1 = (*(code *)param_1[3])(param_1);
      uVar4 = uVar4 | 0x20;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    if ((int)param_1[6] < 0) {
      param_1[6] = -param_1[6];
      uVar4 = uVar4 | 1;
    }
    if ((uVar4 & 1) != 0) {
      uVar4 = uVar4 & 0xffffffef;
    }
    if ((uVar1 == 0x6c) || (uVar1 == 0x68)) {
      uVar2 = (*(code *)param_1[3])(param_1);
      if (uVar2 == uVar1) {
        if (uVar1 == 0x6c) goto LAB_002ff9f2;
        uVar1 = 0x400;
        goto LAB_002ff9a2;
      }
      if (uVar1 == 0x6c) {
        uVar1 = 0x40;
      }
      else {
        uVar1 = 0x100;
      }
      uVar4 = uVar4 | uVar1;
      uVar1 = uVar2;
    }
    else {
      if (uVar1 != 0x4c) {
        if (uVar1 == 0x6a) {
LAB_002ff9f2:
          uVar1 = 0x80;
          goto LAB_002ff9a2;
        }
        if ((uVar1 != 0x74) && (uVar1 != 0x7a)) goto LAB_002ff9b8;
      }
      uVar1 = 0;
LAB_002ff9a2:
      uVar4 = uVar4 | uVar1;
      uVar1 = (*(code *)param_1[3])(param_1);
    }
LAB_002ff9b8:
    if (uVar1 == 0) {
LAB_002ffa10:
      return CONCAT44(local_20,param_1[8]);
    }
    if (uVar1 - 0x41 < 0x1a) {
      uVar4 = uVar4 | 0x800;
      uVar1 = uVar1 + 0x20;
    }
    *param_1 = uVar4;
    iVar6 = FUN_001042c0(param_1,uVar1);
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        local_18 = local_18 + 1;
      }
      else {
        local_18 = (uint *)(((int)local_18 + 7U & 0xfffffff8) + 8);
      }
      goto LAB_002ff89a;
    }
    pcVar5 = (code *)param_1[1];
    uVar4 = param_1[2];
LAB_002ffa06:
    (*pcVar5)(uVar1,uVar4);
    uVar1 = param_1[8] + 1;
  } while( true );
}


