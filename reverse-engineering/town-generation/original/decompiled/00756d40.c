/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00756d40. Provisional types; not original source or a verified portable implementation. */

undefined2 * FUN_00756d40(undefined2 *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  
  param_1[1] = 0;
  *param_1 = (short)(param_2 & 0xffff7fff);
  uVar1 = ((param_2 & 0xffff7fff) << 0x11) >> 0x1e;
  if (uVar1 < 2) {
    piVar2 = (int *)(DAT_00756da0 + uVar1 * 8);
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


