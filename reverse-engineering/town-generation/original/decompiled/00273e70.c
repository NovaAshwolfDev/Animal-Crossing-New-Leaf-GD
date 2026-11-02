/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00273e70. Provisional types; not original source or a verified portable implementation. */

void FUN_00273e70(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined1 auStack_2c [12];
  
  FUN_00638ee8(auStack_2c);
  FUN_0066c088(param_1 + 0xb0,auStack_2c);
  FUN_00638e98(auStack_2c,param_2);
  FUN_0066c088(param_1 + 0xbc,auStack_2c);
  FUN_00638ec8(auStack_2c,param_2);
  FUN_0066c088(param_1 + 200,auStack_2c);
  FUN_00698054(param_1 + 0xd8,param_5);
  FUN_001b8a6c(param_1 + 0x108,param_6);
  FUN_00638dbc(param_2);
  FUN_0064ccb4(param_1,param_1 + 0xb0,param_1 + 0xbc,param_1 + 200,param_1 + 0xd4,param_3,param_4,
               param_3,param_4,param_3,param_4);
  FUN_00664428(*DAT_00273fe0);
  iVar1 = FUN_007ef588(param_1);
  if (iVar1 == 0) {
    FUN_00638dbc(param_2);
    return;
  }
  FUN_006386f8(param_2,param_7);
  *(undefined1 *)(param_2 + 0x271) = 0;
  FUN_006384bc(param_2,param_6);
  FUN_00698044(param_2,param_5);
  FUN_006384a4(param_2,1);
  if (-1 < *(int *)(param_1 + 0xd4)) {
    *(char *)(param_2 + 0x26e) = (char)*(int *)(param_1 + 0xd4);
    return;
  }
  *(undefined1 *)(param_2 + 0x26e) = 0;
  FUN_00638d70(param_2);
  return;
}


