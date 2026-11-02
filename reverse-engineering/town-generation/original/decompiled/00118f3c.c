/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00118f3c. Provisional types; not original source or a verified portable implementation. */

void FUN_00118f3c(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 0x6c) & 1;
  if (uVar1 != 0) {
    uVar1 = 1;
  }
  iVar3 = 0;
  if (uVar1 != 0) {
    FUN_0011f990();
    iVar3 = param_1 + 0x50;
  }
  if (*(char *)(param_1 + 0x4c) == '\x01') {
    puVar2 = (undefined4 *)(param_1 + 0x94);
  }
  else {
    puVar2 = *(undefined4 **)(param_1 + 0x18);
  }
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  puVar2[2] = *(int *)(param_1 + 0x1c) + -0xa4;
  FUN_0012162c(param_1);
  if (iVar3 != 0) {
    FUN_001214d0(iVar3);
    return;
  }
  return;
}


