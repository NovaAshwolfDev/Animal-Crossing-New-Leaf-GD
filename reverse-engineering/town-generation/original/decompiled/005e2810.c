/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 005e2810. Provisional types; not original source or a verified portable implementation. */

void FUN_005e2810(undefined2 *param_1)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  
  puVar3 = param_1 + 0x20;
  if (param_1 < puVar3) {
    uVar2 = (undefined2)DAT_005e284c;
    do {
      for (puVar1 = param_1; puVar1 < param_1 + 0x10; puVar1 = puVar1 + 1) {
        *puVar1 = uVar2;
      }
      param_1 = param_1 + 0x10;
    } while (param_1 < puVar3);
  }
  return;
}


