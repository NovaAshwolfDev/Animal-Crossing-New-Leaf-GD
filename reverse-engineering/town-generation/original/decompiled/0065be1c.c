/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0065be1c. Provisional types; not original source or a verified portable implementation. */

void FUN_0065be1c(undefined4 *param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r4;
  undefined4 uVar4;
  
  *param_1 = param_2;
  param_1[1] = 0;
  uVar4 = 2;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = *param_2;
  uVar2 = (uint)uVar1;
  if (0xd7ff < uVar2) {
    unaff_r4 = uVar2 - 0xe000;
  }
  uVar3 = uVar2;
  if (0xd7ff < uVar2 && 0x1fff < unaff_r4) {
    uVar4 = 4;
    uVar2 = CONCAT22(uVar1,param_2[1]);
    uVar3 = param_2[1] & 0x3ff | ((uVar1 & 0x3f) << 0x10) >> 6 | (uVar2 >> 6) + 0x10000 & 0xf0000;
  }
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}


