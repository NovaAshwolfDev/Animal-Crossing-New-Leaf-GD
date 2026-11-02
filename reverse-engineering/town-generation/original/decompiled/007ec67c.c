/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ec67c. Provisional types; not original source or a verified portable implementation. */

int FUN_007ec67c(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int extraout_r1;
  int iVar2;
  int extraout_r1_00;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 4) >> 3;
  if (*(uint *)(param_1 + 4) < 8) {
    iVar3 = 0;
  }
  else {
    FUN_00129b80(param_2 >> 3,uVar1);
    iVar3 = extraout_r1;
  }
  if (*(uint *)(param_1 + 8) < 8) {
    iVar2 = 0;
  }
  else {
    FUN_00129b80(param_3 >> 3,*(uint *)(param_1 + 8) >> 3);
    iVar2 = extraout_r1_00;
  }
  return *(int *)(DAT_007ec6f4 + (param_3 + iVar2 * -8) * 0x20 + (param_2 + iVar3 * -8) * 4) +
         (iVar2 * uVar1 + iVar3) * 0x40;
}


