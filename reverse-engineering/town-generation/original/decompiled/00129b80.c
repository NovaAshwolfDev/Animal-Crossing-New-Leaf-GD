/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00129b80. Provisional types; not original source or a verified portable implementation. */

undefined8 FUN_00129b80(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  
  iVar3 = 0;
  uVar2 = param_2;
  if (param_2 <= param_1 >> 2) {
    if (param_2 <= param_1 >> 5) {
      if (param_2 <= param_1 >> 8) {
        if (param_1 >> 0xc < param_2) goto LAB_003008c0;
        if (param_1 >> 0x10 < param_2) goto LAB_00300890;
        uVar2 = param_2 << 8;
        iVar3 = -0x1000000;
        if (uVar2 <= param_1 >> 0x10) {
          iVar3 = -0x10000;
          uVar2 = param_2 << 0x10;
        }
        if (param_1 >> 0xc < uVar2) goto LAB_003008c0;
        bVar5 = uVar2 == 0;
        if (bVar5) {
          uVar1 = thunk_FUN_00125538(0,0,iVar3,-uVar2);
          return CONCAT44(param_1,uVar1);
        }
        do {
          if (bVar5) {
            uVar2 = uVar2 >> 8;
          }
LAB_00300890:
          bVar5 = uVar2 <= param_1 >> 0xf;
          if (bVar5) {
            param_1 = param_1 + uVar2 * -0x8000;
          }
          bVar6 = uVar2 <= param_1 >> 0xe;
          if (bVar6) {
            param_1 = param_1 + uVar2 * -0x4000;
          }
          bVar7 = uVar2 <= param_1 >> 0xd;
          if (bVar7) {
            param_1 = param_1 + uVar2 * -0x2000;
          }
          bVar8 = uVar2 <= param_1 >> 0xc;
          if (bVar8) {
            param_1 = param_1 + uVar2 * -0x1000;
          }
          iVar3 = (((iVar3 * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7) * 2 +
                  (uint)bVar8;
LAB_003008c0:
          bVar5 = uVar2 <= param_1 >> 0xb;
          if (bVar5) {
            param_1 = param_1 + uVar2 * -0x800;
          }
          bVar6 = uVar2 <= param_1 >> 10;
          if (bVar6) {
            param_1 = param_1 + uVar2 * -0x400;
          }
          bVar7 = uVar2 <= param_1 >> 9;
          if (bVar7) {
            param_1 = param_1 + uVar2 * -0x200;
          }
          uVar4 = ((iVar3 * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
          bVar6 = uVar2 <= param_1 >> 8;
          if (bVar6) {
            param_1 = param_1 + uVar2 * -0x100;
          }
          bVar5 = CARRY4(uVar4,uVar4) || CARRY4(uVar4 * 2,(uint)bVar6);
          iVar3 = uVar4 * 2 + (uint)bVar6;
        } while (bVar5);
      }
      bVar5 = uVar2 <= param_1 >> 7;
      if (bVar5) {
        param_1 = param_1 + uVar2 * -0x80;
      }
      bVar6 = uVar2 <= param_1 >> 6;
      if (bVar6) {
        param_1 = param_1 + uVar2 * -0x40;
      }
      bVar7 = uVar2 <= param_1 >> 5;
      if (bVar7) {
        param_1 = param_1 + uVar2 * -0x20;
      }
      iVar3 = ((iVar3 * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
    }
    bVar5 = uVar2 <= param_1 >> 4;
    if (bVar5) {
      param_1 = param_1 + uVar2 * -0x10;
    }
    bVar6 = uVar2 <= param_1 >> 3;
    if (bVar6) {
      param_1 = param_1 + uVar2 * -8;
    }
    bVar7 = uVar2 <= param_1 >> 2;
    if (bVar7) {
      param_1 = param_1 + uVar2 * -4;
    }
    iVar3 = ((iVar3 * 2 + (uint)bVar5) * 2 + (uint)bVar6) * 2 + (uint)bVar7;
  }
  bVar5 = uVar2 <= param_1 >> 1;
  if (bVar5) {
    param_1 = param_1 + uVar2 * -2;
  }
  uVar4 = param_1 - uVar2;
  if (uVar2 > param_1) {
    uVar4 = param_1;
  }
  return CONCAT44(uVar4,(iVar3 * 2 + (uint)bVar5) * 2 + (uint)(uVar2 <= param_1));
}


