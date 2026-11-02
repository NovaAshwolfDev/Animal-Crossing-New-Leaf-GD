/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00110b90. Provisional types; not original source or a verified portable implementation. */

void FUN_00110b90(uint *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = param_2[1];
  uVar3 = param_2[1];
  lVar2 = (ulonglong)DAT_00110c44 * (ulonglong)uVar6 +
          CONCAT44(((int)uVar6 >> 0x1f) * DAT_00110c44,
                   (int)((ulonglong)DAT_00110c44 * (ulonglong)*param_2 >> 0x20));
  uVar8 = (uint)((ulonglong)lVar2 >> 0x20);
  lVar1 = (ulonglong)DAT_00110c48 * (ulonglong)*param_2;
  uVar7 = (uint)((ulonglong)DAT_00110c48 * (ulonglong)uVar6);
  uVar4 = (int)((ulonglong)lVar1 >> 0x20) + (uint)CARRY4((uint)lVar1,(uint)lVar2);
  iVar5 = ((int)uVar4 >> 0x1f) + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar4,uVar8) +
          ((int)uVar6 >> 0x1f) * DAT_00110c48 +
          (int)((ulonglong)DAT_00110c48 * (ulonglong)uVar6 >> 0x20) +
          (uint)CARRY4(uVar4 + uVar8,uVar7);
  uVar4 = uVar4 + uVar8 + uVar7 >> 0x12 | iVar5 * 0x4000;
  uVar6 = uVar4 + -((int)uVar3 >> 0x1f);
  uVar7 = *param_1;
  *param_1 = uVar6 + uVar7;
  param_1[1] = (iVar5 >> 0x12) + (uint)CARRY4(uVar4,-((int)uVar3 >> 0x1f)) + param_1[1] +
               (uint)CARRY4(uVar6,uVar7);
  return;
}


