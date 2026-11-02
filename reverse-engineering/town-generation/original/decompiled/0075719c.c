/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0075719c. Provisional types; not original source or a verified portable implementation. */

void FUN_0075719c(byte *param_1)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  
  if (*DAT_0075726c != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_0063653c();
  }
  puVar2 = (uint *)*DAT_00757274;
  if (((*DAT_00757274 & 1) == 0) &&
     (puVar2 = (uint *)FUN_003025cc(DAT_00757274), puVar2 != (uint *)0x0)) {
    puVar2 = DAT_00757274;
  }
  pbVar1 = DAT_00757278;
  uVar3 = FUN_005e3528(puVar2);
  FUN_001151b0(pbVar1,uVar3,0x10);
  iVar4 = 0;
  iVar5 = 0;
  iVar7 = 8;
  do {
    pbVar6 = pbVar1;
    if ((uint)(iVar4 * 2) < 0x10) {
      pbVar6 = pbVar1 + iVar5;
    }
    pbVar8 = pbVar1;
    if (iVar4 * 2 + 1U < 0x10) {
      pbVar8 = pbVar1 + iVar5 + 1;
    }
    iVar7 = iVar7 + -1;
    iVar5 = iVar5 + 2;
    iVar4 = iVar4 + 1;
    *param_1 = *pbVar6 & 0xf | *pbVar8 << 4;
    param_1 = param_1 + 1;
  } while (iVar7 != 0);
  return;
}


