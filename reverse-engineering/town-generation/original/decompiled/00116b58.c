/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00116b58. Provisional types; not original source or a verified portable implementation. */

void FUN_00116b58(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_00116b84;
  puVar1 = DAT_00116b80;
  DAT_00116b80[1] = 0;
  *(short *)(puVar1 + 2) = (short)uVar2;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 8) = param_2;
  *(undefined4 *)(puVar1 + 4) = param_1;
  FUN_0010b62c();
  return;
}


