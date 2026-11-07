/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

undefined4 FUN_00480a10(int *param_1,byte *param_2,float *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  ushort in_FPUStatusWord;
  void *local_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  local_18 = ExceptionList;
  local_10 = &stack0xffffffcc;
  local_c = &DAT_00401398;
  local_8 = 0;
  ExceptionList = &local_18;
  (**(code **)(*param_1 + 4))(param_1);
  bVar1 = *param_2;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  bVar2 = *param_2;
  if (5 < bVar2 - 1) {
    __vbaGenerateBoundsError();
  }
  *(float *)(DAT_0049106c + 8 + (bVar2 - 1) * 0x2c) =
       *(float *)(DAT_0049106c + 8 + (bVar1 - 1) * 0x2c) + *param_3;
  if ((in_FPUStatusWord & 0xd) == 0) {
    (**(code **)(*param_1 + 8))(param_1);
    ExceptionList = local_18;
    return local_8;
  }
  uVar3 = __vbaFPException();
  return uVar3;
}


