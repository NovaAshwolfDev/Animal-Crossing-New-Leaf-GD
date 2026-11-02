/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 007eafb4. Provisional types; not original source or a verified portable implementation. */

undefined4 FUN_007eafb4(int param_1,int param_2,short *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    uVar4 = 0;
    do {
      iVar2 = FUN_007bcf70(param_2 + 0x6f38,uVar4);
      if (iVar2 != 0) {
        bVar1 = *(byte *)(iVar2 + 0x272);
        if (((bVar1 & 0x80) != 0) && ((bVar1 & 0x20) == 0)) {
          iVar2 = param_1;
          if ((bVar1 & 7) < 8) {
            iVar2 = param_1 + (bVar1 & 7) * 0x40;
          }
          if ((((*(short *)(iVar2 + 0x38) == param_3[0x16]) && (*(short *)(iVar2 + 0xc) == *param_3)
               ) && (*(char *)(iVar2 + 0x20) == (char)param_3[10])) &&
             (((iVar3 = FUN_001011c4(iVar2 + 0xe,param_3 + 1,0x12), iVar3 == 0 &&
               (*(short *)(iVar2 + 0x22) == param_3[0xb])) &&
              ((*(char *)(iVar2 + 0x36) == (char)param_3[0x15] &&
               (iVar2 = FUN_001011c4(iVar2 + 0x24,param_3 + 0xc,0x12), iVar2 == 0)))))) {
            return 1;
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 10);
  }
  return 0;
}


