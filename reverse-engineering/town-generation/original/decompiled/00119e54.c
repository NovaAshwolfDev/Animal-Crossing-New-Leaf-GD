/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00119e54. Provisional types; not original source or a verified portable implementation. */

longlong FUN_00119e54(uint *param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  longlong lVar9;
  
  uVar6 = *param_1;
  uVar7 = param_1[1];
  lVar9 = (ulonglong)param_3 * (ulonglong)uVar7 +
          CONCAT44(((int)uVar7 >> 0x1f) * param_3,
                   (int)((ulonglong)param_3 * (ulonglong)uVar6 >> 0x20));
  uVar1 = (uint)((ulonglong)lVar9 >> 0x20);
  uVar5 = (uint)((ulonglong)param_4 * (ulonglong)uVar7);
  uVar4 = uVar6 * ((int)param_4 >> 0x1f) + (int)((ulonglong)param_4 * (ulonglong)uVar6 >> 0x20) +
          (uint)CARRY4((uint)((ulonglong)param_4 * (ulonglong)uVar6),(uint)lVar9);
  uVar2 = uVar1 + uVar4 + uVar5;
  iVar3 = uVar7 * ((int)param_4 >> 0x1f) +
          ((int)uVar7 >> 0x1f) * param_4 + (int)((ulonglong)param_4 * (ulonglong)uVar7 >> 0x20) +
          ((int)uVar1 >> 0x1f) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar1,uVar4) +
          (uint)CARRY4(uVar1 + uVar4,uVar5);
  if ((int)param_4 < 0) {
    bVar8 = CARRY4(uVar2,uVar6);
    uVar2 = uVar2 + uVar6;
    iVar3 = iVar3 + uVar7 + (uint)bVar8;
  }
  lVar9 = FUN_0011b128(uVar2,iVar3,param_5);
  return lVar9 + (ulonglong)(uint)-((int)param_1[1] >> 0x1f);
}


