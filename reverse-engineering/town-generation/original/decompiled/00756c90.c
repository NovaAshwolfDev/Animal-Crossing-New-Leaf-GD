/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00756c90. Provisional types; not original source or a verified portable implementation. */

ushort * FUN_00756c90(ushort *param_1,undefined4 param_2,uint param_3)

{
  ushort *puVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  uint uVar5;
  
  uVar5 = DAT_00756d28;
  *param_1 = (ushort)DAT_00756d28;
  param_1[1] = 0;
  puVar1 = (ushort *)FUN_005a19a0(param_2);
  if (param_3 < *(uint *)(puVar1 + 2)) {
    uVar5 = *puVar1 + param_3 & 0xffff;
  }
  *param_1 = *param_1 & 0x8000 | (ushort)(uVar5 & 0xffff7fff);
  uVar5 = ((uVar5 & 0xffff7fff) << 0x11) >> 0x1e;
  if (uVar5 < 2) {
    piVar2 = (int *)(DAT_00756d2c + uVar5 * 8);
    piVar4 = (int *)((int)param_1 + (piVar2[1] >> 1));
    if ((piVar2[1] & 1U) == 0) {
      pcVar3 = (code *)*piVar2;
    }
    else {
      pcVar3 = *(code **)(*piVar4 + *piVar2);
    }
    (*pcVar3)(piVar4);
  }
  return param_1;
}


