/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00757ee4. Provisional types; not original source or a verified portable implementation. */

void FUN_00757ee4(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar1 = DAT_00757f34;
  uVar2 = param_1 - param_2;
  bVar6 = uVar2 == 0;
  uVar3 = uVar2;
  if (0 < (int)uVar2) {
    uVar3 = DAT_00757f34 - uVar2;
    bVar6 = DAT_00757f34 == uVar2;
  }
  if (bVar6 || (int)uVar3 < 0 != (0 < (int)uVar2 && SBORROW4(DAT_00757f34,uVar2))) {
    FUN_00302e88();
    return;
  }
  uVar3 = 0;
  do {
    iVar4 = param_2 + uVar3;
    iVar5 = param_1 + uVar3;
    *(undefined1 *)(param_1 + uVar3) = *(undefined1 *)(param_2 + uVar3);
    uVar3 = uVar3 + 2;
    *(undefined1 *)(iVar5 + 1) = *(undefined1 *)(iVar4 + 1);
  } while (uVar3 < uVar1);
  return;
}


