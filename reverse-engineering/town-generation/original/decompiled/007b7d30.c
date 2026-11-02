/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007b7d30. Provisional types; not original source or a verified portable implementation. */

uint FUN_007b7d30(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float in_s0;
  int iVar4;
  float fVar5;
  
  iVar3 = 0x7b7d3c;
  FUN_005c62d8();
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = 0;
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
  if (0 < iVar2) {
    param_4 = *(int *)(param_1 + 0xc);
    iVar3 = 1;
  }
  iVar4 = (int)(in_s0 * fVar5);
  if (0 < iVar2) {
    do {
      if ((*(uint *)(param_4 + ((int)uVar1 >> 5) * 4) & iVar3 << (uVar1 & 0x1f)) != 0) {
        if (iVar4 == 0) {
          return uVar1;
        }
        iVar4 = iVar4 + -1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < iVar2);
  }
  return 0xffffffff;
}


