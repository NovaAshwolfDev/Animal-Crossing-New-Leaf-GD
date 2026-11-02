/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 002fe71c. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_002fe71c(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if ((int)(*param_1 << 0x1a) < 0) {
    uVar1 = param_1[7];
    *param_1 = *param_1 & 0xffffffef;
  }
  else {
    uVar1 = 1;
  }
  if (param_2 < (int)uVar1) {
    iVar4 = uVar1 - param_2;
  }
  else {
    iVar4 = 0;
  }
  param_1[6] = param_1[6] - (iVar4 + param_2 + param_4);
  if (-1 < (int)(*param_1 << 0x1b)) {
    FUN_002fe674(param_1);
  }
  for (iVar3 = 0; iVar3 < param_4; iVar3 = iVar3 + 1) {
    (*(code *)param_1[1])(*(undefined1 *)(param_3 + iVar3),param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((int)(*param_1 << 0x1b) < 0) {
    FUN_002fe674(param_1);
  }
  while (0 < iVar4) {
    (*(code *)param_1[1])(0x30,param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar4 = iVar4 + -1;
  }
  while (0 < param_2) {
    (*(code *)param_1[1])(*(undefined1 *)((int)param_1 + param_2 + 0x23),param_1[2]);
    param_1[8] = param_1[8] + 1;
    param_2 = param_2 + -1;
  }
  FUN_002fe6a0(param_1);
  if ((int)(*param_1 << 0x18) < 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}


