/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0060046c. Provisional types; not original source or a verified portable implementation. */

void FUN_0060046c(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0x35ec);
joined_r0x00600490:
  while( true ) {
    do {
      iVar1 = iVar3;
      if (iVar1 == 0) {
        if ((-1 < (int)param_2 && -1 < (int)param_3) && (param_2 < 0x70 && param_3 < 0x60)) {
          param_2 = param_2 + param_3 * 0x70;
          iVar3 = param_1 + 0x360c + ((int)param_2 >> 5) * 4;
          *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & ~(1 << (param_2 & 0x1f));
        }
        return;
      }
      uVar2 = *(uint *)(iVar1 + 0x28);
      iVar3 = *(int *)(iVar1 + 8);
      bVar4 = uVar2 != param_2;
      if (!bVar4) {
        uVar2 = *(uint *)(iVar1 + 0x2c);
      }
    } while (bVar4 || uVar2 != param_3);
    if (param_4 == 0) break;
    if ((*(uint *)(iVar1 + 100) & 4) == 0) goto LAB_006004cc;
    if (param_4 == 1) break;
  }
  goto LAB_006004d4;
LAB_006004cc:
  if (param_4 == 2) {
LAB_006004d4:
    FUN_005fc97c(param_1,iVar1,1);
  }
  goto joined_r0x00600490;
}


