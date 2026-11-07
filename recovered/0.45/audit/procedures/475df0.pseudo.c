/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00475df0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  ushort uVar6;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_28 [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff48;
  local_c = &DAT_004011c0;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  uVar2 = (uint)DAT_0049107a;
  local_28[0] = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  if (5 < uVar2 - 1) {
    __vbaGenerateBoundsError();
  }
  uVar4 = (uint)DAT_0049107a;
  if (5 < uVar4 - 1) {
    __vbaGenerateBoundsError();
  }
  uVar6 = 0;
  if (*(float *)(DAT_0049106c + 8 + (uVar2 - 1) * 0x2c) <
      *(float *)(DAT_0049106c + 0x20 + (uVar4 - 1) * 0x2c)) {
    local_50 = 0x80020004;
    local_40 = 0x80020004;
    local_30 = 0x80020004;
    local_58[0] = 10;
    local_48[0] = 10;
    local_38[0] = 10;
    __vbaVarDup();
    Ordinal_595(local_28,0,local_38,local_48,local_58);
    __vbaFreeVarList(4,local_28,local_38,local_48,local_58);
  }
  else {
    uVar2 = (uint)DAT_0049107a;
    if (5 < uVar2 - 1) {
      __vbaGenerateBoundsError();
    }
    uVar4 = (uint)DAT_0049107a;
    if (5 < uVar4 - 1) {
      __vbaGenerateBoundsError();
    }
    uVar1 = (uint)DAT_0049107a;
    if (5 < uVar1 - 1) {
      __vbaGenerateBoundsError();
    }
    *(float *)(DAT_0049106c + 8 + (uVar1 - 1) * 0x2c) =
         *(float *)(DAT_0049106c + 8 + (uVar2 - 1) * 0x2c) -
         *(float *)(DAT_0049106c + 0x20 + (uVar4 - 1) * 0x2c);
    if ((uVar6 & 0xd) != 0) {
      __vbaFPException();
      return;
    }
    uVar2 = (uint)DAT_0049107a;
    if (5 < uVar2 - 1) {
      __vbaGenerateBoundsError();
    }
    *(undefined4 *)(DAT_0049106c + 0x20 + (uVar2 - 1) * 0x2c) = 0;
  }
  iVar3 = (**(code **)(*piVar5 + 0x718))(piVar5);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar5,&DAT_00470614,0x718);
  }
  return;
}


