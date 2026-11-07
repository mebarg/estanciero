/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_004781e0(uint param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort in_FPUStatusWord;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30 [2];
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff40;
  local_c = &DAT_00401228;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  uVar2 = (uint)DAT_0049108e;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  if (0x29 < uVar2) {
    __vbaGenerateBoundsError();
  }
  local_58 = 0x80020004;
  local_60[0] = 10;
  local_48 = 0x80020004;
  local_50[0] = 10;
  local_38 = 0x80020004;
  local_40[0] = 10;
  if (*(short *)(DAT_00491034 + 0x6c + uVar2 * 0x74) == 0) {
    uVar2 = (uint)DAT_0049108e;
    if (0x29 < uVar2) {
      __vbaGenerateBoundsError();
    }
    __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x68 + uVar2 * 0x74),
               L"Va a hipotecar esta propiedad por: $");
    uVar3 = __vbaStrMove();
    __vbaStrCat(uVar3);
    uVar3 = __vbaStrMove();
    local_28 = __vbaStrCat(&DAT_00470fd8,uVar3);
    local_30[0] = 8;
    iVar4 = Ordinal_595(local_30,4,local_40,local_50,local_60);
    __vbaFreeStrList(2,&local_1c,&local_20);
    __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
    if (iVar4 == 6) {
      uVar2 = (uint)DAT_0049107a;
      if (5 < uVar2 - 1) {
        __vbaGenerateBoundsError();
      }
      uVar6 = (uint)DAT_0049108e;
      if (0x29 < uVar6) {
        __vbaGenerateBoundsError();
      }
      uVar5 = (uint)DAT_0049107a;
      if (5 < uVar5 - 1) {
        __vbaGenerateBoundsError();
      }
      *(float *)(DAT_0049106c + 8 + (uVar5 - 1) * 0x2c) =
           *(float *)(DAT_0049106c + 8 + (uVar2 - 1) * 0x2c) +
           *(float *)(DAT_00491034 + 0x68 + uVar6 * 0x74);
      if ((in_FPUStatusWord & 0xd) != 0) {
        __vbaFPException();
        return;
      }
      uVar2 = (uint)DAT_0049108e;
      if (0x29 < uVar2) {
        __vbaGenerateBoundsError();
      }
      *(undefined2 *)(DAT_00491034 + 0x6c + uVar2 * 0x74) = 0xffff;
      FUN_00489260(&DAT_0049107a);
      iVar4 = (**(code **)(*piVar1 + 0x708))(piVar1,&DAT_0049107a);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar1,&DAT_00470614,0x708);
      }
    }
  }
  else {
    __vbaVarDup();
    Ordinal_595(local_30,0,local_40,local_50,local_60);
    __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
  }
  return;
}


