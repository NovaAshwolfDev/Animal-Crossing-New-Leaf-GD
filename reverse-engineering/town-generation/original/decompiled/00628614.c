/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 00628614. Provisional types; not original source or a verified portable implementation. */

void FUN_00628614(int param_1,uint param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  uVar1 = DAT_00628684;
  if (param_2 == 0) {
    return;
  }
  if (*(byte *)(param_1 + 8) < 0x21) {
    bVar2 = param_2 == 1;
    if (bVar2) {
      param_2 = (uint)*(byte *)(param_1 + 9);
    }
    if (bVar2 && param_2 == 0) {
      *(undefined1 *)(param_1 + 9) = 1;
      return;
    }
  }
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_0063aca4(param_1);
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 9;
  *(short *)(param_1 + 0xc) = (short)uVar1;
  *(undefined1 *)(param_1 + 0xe) = 4;
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  return;
}


