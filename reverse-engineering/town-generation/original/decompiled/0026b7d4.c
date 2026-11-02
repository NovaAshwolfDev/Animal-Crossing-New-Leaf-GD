/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0026b7d4. Provisional types; not original source or a verified portable implementation. */

void FUN_0026b7d4(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = FUN_0074702c(1);
  uVar1 = DAT_0026b934;
  if (param_1 <= param_3) {
    do {
      iVar5 = param_2;
      if (param_2 <= param_4) {
        do {
          iVar3 = FUN_007e2290(uVar2,param_1,iVar5,0);
          if (((iVar3 != 0) && (iVar4 = FUN_00285804(1), iVar4 != 0)) &&
             (iVar4 = FUN_007bfff8(iVar4,param_1,iVar5), iVar4 != 0)) {
            iVar4 = FUN_007fdfa0(iVar3,uVar1);
            if (iVar4 == 0) {
              iVar4 = FUN_007fdfa0(iVar3,DAT_0026b938);
              if (iVar4 == 0) {
                iVar4 = FUN_007fdfa0(iVar3,DAT_0026b93c);
                if (iVar4 == 0) {
                  iVar3 = FUN_007fdfa0(iVar3,DAT_0026b940);
                  if (iVar3 == 0) goto LAB_0026b8cc;
                  uVar6 = 3;
                }
                else {
                  uVar6 = 2;
                }
              }
              else {
                uVar6 = 1;
              }
            }
            else {
              uVar6 = 0;
            }
            iVar3 = FUN_00636e3c();
            if (3 < uVar6) {
              uVar6 = 0;
            }
            iVar3 = iVar3 + 0x6a3c8 + uVar6 * 0xc;
            if ((*(byte *)(iVar3 + 10) & 1) != 0) {
              FUN_007a28e8(param_1,iVar5,uVar2);
              FUN_0063aca4(iVar3);
              *(undefined1 *)(iVar3 + 8) = 0;
              *(undefined1 *)(iVar3 + 9) = 0;
              *(undefined1 *)(iVar3 + 10) = 0;
              *(undefined1 *)(iVar3 + 0xb) = 0;
            }
          }
LAB_0026b8cc:
          iVar5 = iVar5 + 1;
        } while (iVar5 <= param_4);
      }
      param_1 = param_1 + 1;
    } while (param_1 <= param_3);
  }
  return;
}


