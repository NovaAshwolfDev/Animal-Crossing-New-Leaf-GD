/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 001b9550. Provisional types; not original source or a verified portable implementation. */

undefined1 * FUN_001b9550(undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [12];
  
  *param_1 = 0xff;
  FUN_0039cf88(param_1 + 2);
  FUN_001b8448(param_1 + 0x304);
  FUN_00128418(param_1 + 0xb74,0x22);
  iVar1 = DAT_001b9694;
  FUN_00756d40(auStack_30,DAT_001b9694);
  iVar3 = iVar1 + 0x80;
  FUN_00756d40(auStack_2c,iVar3);
  FUN_0039cd7c(param_1 + 2,auStack_30);
  FUN_0039d26c(param_1 + 2,auStack_2c);
  FUN_001b7e8c(param_1 + 0x304,0x13);
  FUN_0074a878(param_1 + 0x304);
  FUN_0066c0fc(auStack_20);
  FUN_007f0898(*DAT_001b96a4,auStack_20,"STR_Common",0x29);
  puVar2 = (undefined4 *)FUN_0066c09c(&local_34,param_1 + 0xb74,0x11);
  *puVar2 = DAT_001b96a8;
  (**(code **)(local_34 + 0x14))(&local_34,auStack_20);
  FUN_00756d40(auStack_28,iVar1);
  FUN_00756d40(auStack_24,iVar3);
  FUN_0039cd7c(param_1 + 2,auStack_28);
  FUN_0039d26c(param_1 + 2,auStack_24);
  param_1[0x20] = 4;
  return auStack_28;
}


