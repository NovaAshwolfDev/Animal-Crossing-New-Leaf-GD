/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062a14c. Provisional types; not original source or a verified portable implementation. */

void FUN_0062a14c(int param_1,int param_2,undefined2 param_3,uint param_4,byte param_5)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = param_1 + param_2;
  *(undefined2 *)(param_1 + param_2 * 2) = param_3;
  bVar1 = (byte)((param_4 & 3) << 1);
  switch(param_2) {
  default:
    param_5 = *(byte *)(iVar2 + 0x16) & 0xfe | param_5;
    break;
  case 1:
  case 5:
    param_5 = (*(byte *)(iVar2 + 0x16) & 0xfe | param_5) & 0xf9 | bVar1;
    break;
  case 2:
  case 3:
    *(byte *)(iVar2 + 0x16) =
         (*(byte *)(iVar2 + 0x16) & 0xfe | param_5) & 0xe1 | (byte)(param_4 << 1) & 0x1e;
    return;
  case 6:
    *(byte *)(param_1 + 0x1c) = (*(byte *)(param_1 + 0x1c) & 0xfe | param_5) & 0xf9 | bVar1;
    return;
  case 7:
    iVar2 = param_1 + 7;
    bVar1 = (*(byte *)(param_1 + 0x1d) & 0xfe | param_5) & 0xfd | (byte)((param_4 & 1) << 1);
    goto LAB_0062a240;
  case 8:
    iVar2 = param_1 + 8;
    bVar1 = (*(byte *)(param_1 + 0x1e) & 0xfe | param_5) & 0xf9 | bVar1;
LAB_0062a240:
    *(byte *)(iVar2 + 0x16) = bVar1;
    return;
  }
  *(byte *)(iVar2 + 0x16) = param_5;
  return;
}


