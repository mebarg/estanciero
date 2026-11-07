/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00489160(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  ushort in_FPUStatusWord;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401656;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffd0;
  local_8 = &DAT_004014a0;
  local_18 = 0;
  bVar1 = *param_1;
  ExceptionList = &pvStack_14;
  puVar3 = &stack0xffffffd0;
  if (5 < bVar1 - 1) {
    ExceptionList = &pvStack_14;
    __vbaGenerateBoundsError();
    puVar3 = local_c;
  }
  local_c = puVar3;
  bVar2 = *param_1;
  if (5 < bVar2 - 1) {
    __vbaGenerateBoundsError();
  }
  *(float *)(DAT_0049106c + 8 + (bVar2 - 1) * 0x2c) =
       *(float *)(DAT_0049106c + 8 + (bVar1 - 1) * 0x2c) + 5000.0;
  if ((in_FPUStatusWord & 0xd) == 0) {
    FUN_00489260(param_1);
    uVar4 = (uint)DAT_0049107a;
    if (5 < uVar4 - 1) {
      __vbaGenerateBoundsError();
    }
    __vbaStrCat(L" pasa por la salida y cobra $5000",
                *(undefined4 *)(DAT_0049106c + 4 + (uVar4 - 1) * 0x2c));
    __vbaStrMove();
    FUN_00487700(&local_18);
    __vbaFreeStr();
    return;
  }
  __vbaFPException();
  return;
}


