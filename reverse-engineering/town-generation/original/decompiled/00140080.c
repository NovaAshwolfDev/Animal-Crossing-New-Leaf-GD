/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00140080. Provisional types; not original source or a verified portable implementation. */

undefined4 * FUN_00140080(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00140458(0x20);
  *puVar1 = param_1;
  FUN_001402a8(puVar1,"MsgStdBn");
  uVar2 = FUN_0014053c(puVar1,&DAT_00140104);
  puVar1[4] = uVar2;
  uVar2 = FUN_0014053c(puVar1,&DAT_0014010c);
  puVar1[5] = uVar2;
  uVar2 = FUN_0014053c(puVar1,&DAT_00140114);
  puVar1[6] = uVar2;
  uVar2 = FUN_0014053c(puVar1,&DAT_0014011c);
  puVar1[7] = uVar2;
  return puVar1;
}


