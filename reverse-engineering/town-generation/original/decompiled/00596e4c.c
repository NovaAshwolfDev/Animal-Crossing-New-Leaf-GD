/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00596e4c. Provisional types; not original source or a verified portable implementation. */

void FUN_00596e4c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_0063aca4();
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  uVar1 = FUN_0011df38(5);
  uVar1 = FUN_00756c90(&uStack_10,0x33,uVar1);
  FUN_00756eb0(param_1 + 8,uVar1);
  FUN_0063db34(&uStack_10);
  return;
}


