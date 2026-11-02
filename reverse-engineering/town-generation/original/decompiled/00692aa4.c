/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00692aa4. Provisional types; not original source or a verified portable implementation. */

void FUN_00692aa4(int param_1,uint param_2,uint param_3,undefined2 *param_4)

{
  int iVar1;
  
  iVar1 = param_1 + (param_3 & 0xf) * 0xa0 + (param_2 & 0xf) * 10;
  *(undefined2 *)(iVar1 + 0x1c) = *param_4;
  *(undefined2 *)(iVar1 + 0x1e) = param_4[1];
  *(undefined2 *)(iVar1 + 0x20) = param_4[2];
  *(undefined2 *)(iVar1 + 0x22) = param_4[3];
  *(undefined1 *)(iVar1 + 0x24) = *(undefined1 *)(param_4 + 4);
  *(undefined1 *)(iVar1 + 0x25) = *(undefined1 *)((int)param_4 + 9);
  return;
}


