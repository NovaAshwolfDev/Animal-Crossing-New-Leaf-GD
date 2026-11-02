/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00588350. Provisional types; not original source or a verified portable implementation. */

int FUN_00588350(int *param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  iVar3 = FUN_00697864(*param_1,param_1[1]);
  if ((iVar3 != 0) && (iVar3 = FUN_00697864(*param_2,param_2[1]), iVar3 != 0)) {
    fVar4 = (float)VectorSignedToFloat(*param_1 - *param_2,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar4 < DAT_005883e0) << 0x1f |
            (uint)(fVar4 == DAT_005883e0) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    if ((bool)(bVar2 >> 6 & 1) || (bool)(bVar2 >> 7) != (NAN(fVar4) || NAN(DAT_005883e0))) {
      fVar4 = -fVar4;
    }
    fVar5 = (float)VectorSignedToFloat(param_1[1] - param_2[1],(byte)(uVar1 >> 0x15) & 3);
    if (fVar5 <= DAT_005883e0) {
      fVar5 = -fVar5;
    }
    iVar3 = (int)fVar5;
    if ((int)fVar4 != 1 || iVar3 != 1) {
      iVar3 = 0;
    }
  }
  return iVar3;
}


