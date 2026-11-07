/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void FUN_004885f0(void)

{
  ushort in_FPUStatusWord;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff90;
  local_c = &DAT_00401458;
  local_30 = 0x80020004;
  local_28 = 0;
  local_38[0] = 10;
  ExceptionList = &pvStack_18;
  Ordinal_593(local_38);
  if ((in_FPUStatusWord & 0xd) == 0) {
    __vbaFPInt();
    __vbaVarMove();
    __vbaFreeVar();
    return;
  }
  __vbaFPException();
  return;
}


