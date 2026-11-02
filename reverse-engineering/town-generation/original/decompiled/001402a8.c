/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001402a8. Provisional types; not original source or a verified portable implementation. */

void FUN_001402a8(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar5 = iVar4;
    iVar4 = iVar5 + 1;
  } while (iVar5 + 1 < 8);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(*param_1 + iVar5 + 5);
  uVar1 = *(ushort *)(*param_1 + iVar5 + 7);
  uVar2 = (uint)uVar1;
  *(ushort *)((int)param_1 + 10) = uVar1;
  if (uVar2 != 0) {
    uVar2 = FUN_00140458();
  }
  param_1[3] = uVar2;
  iVar4 = 0;
  param_1[1] = *(int *)(*param_1 + iVar5 + 0xb);
  uVar2 = 0x20;
  if (*(short *)((int)param_1 + 10) != 0) {
    do {
      piVar3 = (int *)(param_1[3] + iVar4 * 0x10);
      *piVar3 = *param_1 + uVar2 + 0x10;
      iVar4 = iVar4 + 1;
      *(undefined1 *)(piVar3 + 1) = *(undefined1 *)(*param_1 + uVar2);
      *(undefined1 *)((int)piVar3 + 5) = *(undefined1 *)(*param_1 + uVar2 + 1);
      *(undefined1 *)((int)piVar3 + 6) = *(undefined1 *)(*param_1 + uVar2 + 2);
      *(undefined1 *)((int)piVar3 + 7) = *(undefined1 *)(*param_1 + uVar2 + 3);
      iVar5 = *(int *)(*param_1 + uVar2 + 4);
      piVar3[2] = iVar5;
      *(undefined2 *)(piVar3 + 3) = *(undefined2 *)(*param_1 + uVar2 + 8);
      uVar2 = iVar5 + uVar2 + 0x10 + 0xf & 0xfffffff0;
    } while (iVar4 < (int)(uint)*(ushort *)((int)param_1 + 10));
  }
  return;
}


