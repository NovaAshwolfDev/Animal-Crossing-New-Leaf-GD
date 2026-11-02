/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00582eac. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_00582eac(uint param_1,uint param_2)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r7;
  uint unaff_r8;
  int iVar5;
  bool bVar6;
  
  uVar2 = 0;
  if (param_1 < 0x23 && param_2 < 0x23) {
    iVar5 = 1;
    uVar4 = 7;
    pbVar1 = DAT_00582ff8;
    do {
      uVar3 = (uint)*pbVar1;
      if (uVar3 == param_1) {
        unaff_r8 = (uint)pbVar1[1];
      }
      if (uVar3 == param_1 && unaff_r8 == param_2) {
LAB_00582efc:
        if (pbVar1 != (byte *)0x0) {
          return 0x80;
        }
        break;
      }
      if (uVar3 == param_2) {
        unaff_r7 = (uint)pbVar1[1];
      }
      if (uVar3 == param_2 && unaff_r7 == param_1) goto LAB_00582efc;
      iVar5 = iVar5 + 1;
      pbVar1 = pbVar1 + 2;
    } while (iVar5 < 7);
    if (param_1 == param_2) {
LAB_00582f70:
      uVar2 = 0x40;
    }
    else {
      if (param_1 < 0x23 && param_2 < 0x23) {
        iVar5 = 1;
        uVar4 = 5;
        pbVar1 = DAT_00582ffc;
        do {
          uVar3 = (uint)*pbVar1;
          if (uVar3 == param_1) {
            unaff_r8 = (uint)pbVar1[1];
          }
          if (uVar3 == param_1 && unaff_r8 == param_2) {
LAB_00582f68:
            if (pbVar1 != (byte *)0x0) goto LAB_00582f70;
            break;
          }
          if (uVar3 == param_2) {
            unaff_r7 = (uint)pbVar1[1];
          }
          if (uVar3 == param_2 && unaff_r7 == param_1) goto LAB_00582f68;
          iVar5 = iVar5 + 1;
          pbVar1 = pbVar1 + 2;
        } while (iVar5 < 5);
      }
      if (param_1 < 0x23 && param_2 < 0x23) {
        iVar5 = 1;
        pbVar1 = DAT_00583000;
        do {
          uVar3 = (uint)*pbVar1;
          if (uVar3 == param_1) {
            uVar4 = (uint)pbVar1[1];
          }
          if (uVar3 == param_1 && uVar4 == param_2) {
LAB_00582fcc:
            if (pbVar1 != (byte *)0x0) {
              return 0;
            }
            break;
          }
          bVar6 = uVar3 == param_2;
          if (bVar6) {
            uVar3 = (uint)pbVar1[1];
          }
          if (bVar6 && uVar3 == param_1) goto LAB_00582fcc;
          iVar5 = iVar5 + 1;
          pbVar1 = pbVar1 + 2;
        } while (iVar5 < 6);
      }
      uVar2 = 0x20;
    }
  }
  return uVar2;
}


