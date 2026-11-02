/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0064ccb4. Provisional types; not original source or a verified portable implementation. */

void FUN_0064ccb4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = param_4;
  uVar1 = DAT_0064cd5c;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  local_30 = uVar1;
  local_2c = param_6;
  FUN_008a1824(param_1 + 0x14,&local_30);
  local_30 = uVar1;
  local_2c = param_8;
  FUN_008a1824(param_1 + 0x40,&local_30);
  local_30 = uVar1;
  local_2c = param_10;
  FUN_008a1824(param_1 + 0x6c,&local_30);
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined4 *)(param_1 + 0xa8) = param_11;
  *(undefined4 *)(param_1 + 0x98) = param_7;
  *(undefined4 *)(param_1 + 0x9c) = param_9;
  return;
}


