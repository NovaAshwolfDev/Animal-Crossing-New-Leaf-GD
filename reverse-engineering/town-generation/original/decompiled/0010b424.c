/* Automated Ghidra 11.4.2 output for code SHA256 1ca065692824c8b95c57cc7dfdcb99a517302139b5beab0bcb4415db2de36b04. */
/* Address 0010b424. Provisional types; not original source or a verified portable implementation. */

int FUN_0010b424(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = DAT_0010b48c;
  if (*(int *)(DAT_0010b48c + 4) == 0) {
    iVar2 = FUN_001106cc(DAT_0010b494,*(undefined4 *)(DAT_0010b490 + 4));
    if (iVar2 < 0) {
      if (iVar2 == DAT_0010b49c) {
        return iVar2;
      }
    }
    else {
      *puVar1 = 1;
      *DAT_0010b498 = *DAT_0010b494;
    }
  }
  *(int *)(puVar1 + 4) = *(int *)(puVar1 + 4) + 1;
  return 0;
}


