/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0014d6bc. Provisional types; not original source or a verified portable implementation. */

void FUN_0014d6bc(uint param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar3;
  
  if (param_3 != 0) {
    unaff_r4 = DAT_0014d724;
    unaff_r5 = DAT_0014d720;
  }
  param_1 = param_1 & 0xffff;
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      iVar2 = 4;
      do {
        if ((param_1 & 0x8000) == 0) {
          uVar1 = unaff_r4 & param_1 << 1;
        }
        else {
          uVar1 = (unaff_r5 ^ param_1 << 1) & 0xffff;
        }
        if ((uVar1 & 0x8000) == 0) {
          param_1 = unaff_r4 & uVar1 << 1;
        }
        else {
          param_1 = (unaff_r5 ^ uVar1 << 1) & 0xffff;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      uVar3 = uVar3 + 1;
      param_1 = param_1 ^ *param_2;
      param_2 = param_2 + 1;
    } while (uVar3 < param_3);
  }
  return;
}


