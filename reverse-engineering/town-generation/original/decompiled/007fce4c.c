/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007fce4c. Provisional types; not original source or a verified portable implementation. */

void FUN_007fce4c(int param_1,undefined2 *param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  iVar1 = param_1 + (param_4 & 0xf) * 0xa0 + (param_3 & 0xf) * 10;
  *param_2 = *(undefined2 *)(iVar1 + 0x1c);
  param_2[1] = *(undefined2 *)(iVar1 + 0x1e);
  param_2[2] = *(undefined2 *)(iVar1 + 0x20);
  param_2[3] = *(undefined2 *)(iVar1 + 0x22);
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(iVar1 + 0x24);
  *(undefined1 *)((int)param_2 + 9) = *(undefined1 *)(iVar1 + 0x25);
  return;
}


