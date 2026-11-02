/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00664428. Provisional types; not original source or a verified portable implementation. */

void FUN_00664428(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 uVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x1a4);
  FUN_0064cd6c(iVar8);
  cVar1 = *(char *)(iVar8 + 0xac);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  else {
    if (cVar1 == '\x01') {
      uVar4 = 0xc;
    }
    else {
      if (cVar1 != '\x02') goto LAB_00664470;
      uVar4 = 0x20;
    }
    *(undefined1 *)(param_1 + 0x28) = uVar4;
  }
LAB_00664470:
  *(int *)(param_1 + 0x184) = iVar8;
  iVar3 = DAT_006644e4;
  bVar2 = *(byte *)(param_1 + 0x28);
  while (bVar2 < 0x24) {
    piVar5 = (int *)(iVar3 + (uint)*(byte *)(param_1 + 0x28) * 8);
    piVar7 = (int *)(param_1 + 0x14 + (piVar5[1] >> 1));
    if ((piVar5[1] & 1U) == 0) {
      pcVar6 = (code *)*piVar5;
    }
    else {
      pcVar6 = *(code **)(*piVar7 + *piVar5);
    }
    (*pcVar6)(piVar7);
    bVar2 = *(byte *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x184) = 0;
  if (*(char *)(param_1 + 0x29) == '\0') {
    *(undefined1 *)(iVar8 + 0xad) = 3;
    return;
  }
  *(undefined1 *)(iVar8 + 0xad) = 2;
  return;
}


