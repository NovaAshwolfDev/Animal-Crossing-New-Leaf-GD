/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00581cf4. Provisional types; not original source or a verified portable implementation. */

void FUN_00581cf4(int param_1,int param_2)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = DAT_00581dc4;
  uVar5 = 0;
  iVar7 = 0xb;
  do {
    puVar4 = (undefined2 *)(param_1 + 0x798);
    if (uVar5 < 0xb) {
      puVar4 = (undefined2 *)(param_1 + 0x798) + uVar5;
    }
    iVar7 = iVar7 + -1;
    uVar5 = uVar5 + 1;
    uVar2 = (undefined2)uVar3;
    *puVar4 = uVar2;
  } while (iVar7 != 0);
  *(undefined1 *)(param_1 + 0x7e6) = 0x98;
  *(undefined1 *)(param_1 + 0x7e5) = 0x98;
  if (param_2 != 0) {
    puVar4 = (undefined2 *)(param_1 + 0x7ae);
    iVar7 = 1;
    iVar8 = 1;
    *puVar4 = uVar2;
    do {
      iVar6 = iVar7 + 1;
      puVar4[iVar7] = uVar2;
      iVar8 = iVar8 + 2;
      iVar7 = iVar7 + 2;
      puVar4[iVar6] = uVar2;
    } while (iVar8 < 9);
  }
  iVar8 = 0;
  *(undefined2 *)(param_1 + 0x7e9) = 0;
  iVar7 = *DAT_00581dc8;
  if (iVar7 != 0) {
    iVar6 = 0xb;
    do {
      iVar1 = iVar8 * 2;
      iVar6 = iVar6 + -1;
      iVar8 = iVar8 + 1;
      *(undefined2 *)(iVar7 + iVar1 + 0x6c) = uVar2;
    } while (iVar6 != 0);
    *(undefined1 *)(iVar7 + 0x82) = 0x98;
    *(undefined1 *)(iVar7 + 0x83) = 0x98;
  }
  return;
}


