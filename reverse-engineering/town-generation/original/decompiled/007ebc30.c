/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007ebc30. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007ebc30(int param_1,short *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*param_2 == *(short *)(param_1 + 0xc)) && ((char)param_2[10] == *(char *)(param_1 + 0x20)))
      && (iVar1 = FUN_001011c4(param_2 + 1,param_1 + 0xe,0x12), iVar1 == 0)) &&
     (param_2[0x16] == *(short *)(param_1 + 0x22))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


