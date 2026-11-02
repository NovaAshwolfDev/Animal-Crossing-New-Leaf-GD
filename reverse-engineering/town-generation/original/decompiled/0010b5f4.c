/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0010b5f4. Provisional types; not original source or a verified portable implementation. */

void FUN_0010b5f4(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  uVar2 = DAT_0010b628;
  puVar1 = DAT_0010b624;
  DAT_0010b624[1] = 0;
  *puVar1 = param_2;
  *(short *)(puVar1 + 2) = (short)uVar2;
  *(undefined4 *)(puVar1 + 8) = param_3;
  *(undefined4 *)(puVar1 + 4) = param_1;
  FUN_0010b62c();
  return;
}


