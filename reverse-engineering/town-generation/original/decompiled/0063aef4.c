/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0063aef4. Provisional types; not original source or a verified portable implementation. */

void FUN_0063aef4(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 < 0xfd) {
    iVar1 = DAT_0063b00c + param_2 * 8;
    uVar3 = *(undefined4 *)(iVar1 + 4);
    uVar2 = CONCAT13(*(undefined1 *)(iVar1 + 3),
                     CONCAT12(*(undefined1 *)(iVar1 + 2),
                              CONCAT11(*(undefined1 *)(iVar1 + 1),
                                       *(undefined1 *)(DAT_0063b00c + param_2 * 8))));
  }
  else {
    uVar2 = 0xfdfdfdfd;
    uVar3 = 0xfdfdfdfd;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}


