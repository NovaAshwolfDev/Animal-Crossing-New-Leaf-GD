/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00635004. Provisional types; not original source or a verified portable implementation. */

void FUN_00635004(undefined1 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar3 = param_4;
  puVar1 = DAT_006350b0;
  for (puVar2 = param_1 + 2; DAT_006350b0 = puVar1, puVar2 < param_1 + 0xe; puVar2 = puVar2 + 6) {
    *puVar2 = 0;
    uVar3 = uVar3 & 0xffff0000;
    *(undefined2 *)(puVar2 + 1) = 0;
    puVar1 = DAT_006350b0;
  }
  *param_1 = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *puVar1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) & 0xffe0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_00128418(param_1 + 0x1c,0x620,param_1 + 0xe,param_4,uVar3);
  param_1[0x63c] = 0;
  FUN_00128418(param_1 + 0x63d,0x620);
  param_1[0xc5d] = 0;
  FUN_00128418(param_1 + 0xc5e,0x620);
  param_1[0x127e] = 0;
  return;
}


