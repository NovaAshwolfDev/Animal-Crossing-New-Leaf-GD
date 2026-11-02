/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0030c630. Provisional types; not original source or a verified portable implementation. */

void FUN_0030c630(void)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  iVar6 = DAT_0030c78c;
  uVar5 = DAT_0030c788;
  uVar4 = DAT_0030c784;
  uVar9 = 0;
  uVar11 = DAT_0030c784 + 3;
  uVar12 = uVar11 + ((int)DAT_0030c788 >> 8);
  uVar2 = (int)DAT_0030c788 >> 0xd;
  do {
    uVar10 = uVar9 & 0xff;
    uVar8 = uVar11;
    if (uVar10 != 0x3b) {
      if (uVar10 < 0x3b) {
        uVar8 = uVar4;
        if (uVar10 != 0x2b) {
          if (uVar10 == 0x39) {
            uVar8 = 0x23c0;
          }
          else {
            uVar8 = uVar5;
            if (uVar10 == 0x3a) {
              uVar8 = DAT_0030c790;
            }
          }
        }
      }
      else {
        uVar8 = DAT_0030c794;
        if ((uVar10 != 0x3d) && (uVar8 = uVar5, uVar10 == 0x3e)) {
                    /* WARNING: Subroutine does not return */
          FUN_0063653c();
        }
      }
    }
    *(short *)(iVar6 + uVar9 * 2) = (short)uVar8;
    uVar8 = uVar12;
    if (uVar10 != 0x3b) {
      if (uVar10 < 0x3b) {
        uVar8 = DAT_0030c7a4;
        if (((uVar10 != 0x2b) && (uVar8 = DAT_0030c7a8, uVar10 != 0x39)) &&
           (uVar8 = uVar5, uVar10 == 0x3a)) {
          uVar8 = 0x2440;
        }
      }
      else {
        uVar8 = uVar12 ^ uVar2;
        if ((uVar10 != 0x3d) && (uVar8 = uVar5, uVar10 == 0x3e)) {
                    /* WARNING: Subroutine does not return */
          FUN_0063653c();
        }
      }
    }
    iVar1 = uVar9 * 2;
    uVar9 = uVar9 + 1;
    *(short *)(DAT_0030c7b4 + iVar1) = (short)uVar8;
    psVar7 = DAT_0030c7bc;
    if (0x97 < (int)uVar9) {
      sVar3 = (short)DAT_0030c7b8;
      *DAT_0030c7bc = sVar3;
      psVar7[1] = sVar3 + 0x7f;
      return;
    }
  } while( true );
}


