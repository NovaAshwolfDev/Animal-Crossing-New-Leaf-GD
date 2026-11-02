/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00107664. Provisional types; not original source or a verified portable implementation. */

uint FUN_00107664(void)

{
  undefined1 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  piVar2 = DAT_00107704;
  puVar1 = DAT_00107700;
  if (*(int *)(DAT_00107700 + 4) == 0) {
    uVar7 = *(undefined4 *)(DAT_00107708 + 4);
    iVar4 = FUN_001110ec();
    if (iVar4 < 0) {
      FUN_0011afc4();
    }
    uVar3 = DAT_0010770c;
    uVar6 = DAT_00107710;
    if (*piVar2 == 0) {
      uVar5 = FUN_00301bac(uVar7);
      uVar6 = FUN_00111154(piVar2,uVar7,uVar5,0);
      if ((uVar6 & 0x80000000) != 0) {
        uVar6 = uVar3;
      }
    }
    if ((uVar6 & 0x80000000) == 0) {
      *puVar1 = 1;
    }
    else if (uVar6 == uVar3) {
      return uVar6;
    }
  }
  *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
  return 0;
}


