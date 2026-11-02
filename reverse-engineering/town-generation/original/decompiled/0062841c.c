/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0062841c. Provisional types; not original source or a verified portable implementation. */

void FUN_0062841c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  if (param_2 == 0) {
    iVar1 = FUN_005cd9b0();
    if (iVar1 == 0) {
      return;
    }
    if (0x20 < *(byte *)(param_1 + 8)) {
      return;
    }
    if (*(char *)(param_1 + 9) != '\0') {
      return;
    }
    FUN_007edb08(&local_18,param_1);
    puVar2 = (undefined4 *)FUN_005cc158();
    iVar1 = FUN_005cd080(*puVar2,puVar2[1],puVar2[2],local_18,local_14,uStack_10);
    if (iVar1 != 0) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 8) = 0x21;
  FUN_0063aca4(param_1);
  *(undefined1 *)(param_1 + 9) = 0xff;
  *(undefined1 *)(param_1 + 10) = 9;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 6;
  *(undefined1 *)(param_1 + 0xf) = 0xff;
  return;
}


