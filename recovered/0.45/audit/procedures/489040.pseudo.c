/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00489040(undefined4 param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  short sVar4;
  uint uVar5;
  byte *unaff_ESI;
  ushort in_FPUStatusWord;
  undefined4 uStack_84;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined4 *puStack_78;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 local_28 [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff94;
  local_c = &DAT_00401488;
  local_28[0] = 0;
  local_38 = 0;
  local_48[0] = 0;
  local_58[0] = 0x11;
  if (!CARRY1(*param_2,*param_3)) {
    local_50 = CONCAT31(local_50._1_3_,*param_2 + *param_3);
    ExceptionList = &pvStack_18;
    local_10 = &stack0xffffff94;
    __vbaVarMove();
    local_50 = 0x29;
    local_58[0] = 0x8002;
    puStack_78 = (undefined4 *)0x4890ba;
    sVar4 = __vbaVarTstGt();
    if (sVar4 != 0) {
      puStack_78 = local_28;
      puStack_7c = local_58;
      puStack_80 = local_48;
      local_50 = 0x2a;
      local_58[0] = 2;
      uStack_84 = 0x4890df;
      __vbaVarSub();
      uStack_84 = 0x4890e6;
      __vbaVarMove();
      puStack_78 = (undefined4 *)0x4890f0;
      FUN_00489160(&DAT_0049107a);
    }
    puStack_78 = (undefined4 *)0x4890fc;
    __vbaVarCopy();
    puStack_78 = (undefined4 *)&LAB_00489126;
    puStack_7c = (undefined4 *)0x489125;
    __vbaFreeVar();
    return;
  }
  ExceptionList = &pvStack_18;
  __vbaErrorOverflow();
  puStack_7c = (undefined4 *)&LAB_00401656;
  puStack_80 = ExceptionList;
  puStack_78 = (undefined4 *)&stack0xffffff64;
  uStack_84 = 0;
  bVar1 = *unaff_ESI;
  ExceptionList = &puStack_80;
  puVar3 = (undefined4 *)&stack0xffffff64;
  if (5 < bVar1 - 1) {
    ExceptionList = &puStack_80;
    __vbaGenerateBoundsError();
    puVar3 = puStack_78;
  }
  puStack_78 = puVar3;
  bVar2 = *unaff_ESI;
  if (5 < bVar2 - 1) {
    __vbaGenerateBoundsError();
  }
  *(float *)(DAT_0049106c + 8 + (bVar2 - 1) * 0x2c) =
       *(float *)(DAT_0049106c + 8 + (bVar1 - 1) * 0x2c) + 5000.0;
  if ((in_FPUStatusWord & 0xd) == 0) {
    FUN_00489260(unaff_ESI);
    uVar5 = (uint)DAT_0049107a;
    if (5 < uVar5 - 1) {
      __vbaGenerateBoundsError();
    }
    __vbaStrCat(L" pasa por la salida y cobra $5000",
                *(undefined4 *)(DAT_0049106c + 4 + (uVar5 - 1) * 0x2c));
    __vbaStrMove();
    FUN_00487700(&uStack_84);
    __vbaFreeStr();
    return;
  }
  __vbaFPException();
  return;
}


