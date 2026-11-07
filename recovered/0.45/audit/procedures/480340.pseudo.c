/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00480340(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort in_FPUStatusWord;
  float10 fVar6;
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
  local_10 = &stack0xffffff50;
  local_c = &DAT_00401378;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_60[0] = 10;
  local_50[0] = 10;
  local_40[0] = 10;
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_58 = 0x80020004;
  local_48 = 0x80020004;
  local_38 = 0x80020004;
  if (0x29 < DAT_0049108e) {
    __vbaGenerateBoundsError();
  }
  if (DAT_00491000 != 0) {
    adj_fdiv_m32(0x40000000,L"Va a vender su propiedad al Banco por: $");
  }
  if ((in_FPUStatusWord & 0xd) == 0) {
    fVar6 = (float10)__vbaFPInt();
    __vbaStrR4((float)fVar6);
    uVar2 = __vbaStrMove();
    __vbaStrCat(uVar2);
    uVar2 = __vbaStrMove();
    local_28 = __vbaStrCat(L" Esta Seguro?",uVar2);
    local_30[0] = 8;
    iVar3 = Ordinal_595(local_30,4,local_40,local_50,local_60);
    __vbaFreeStrList(2,&local_1c,&local_20);
    __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
    if (iVar3 != 6) {
      return;
    }
    uVar4 = (uint)DAT_0049107a;
    if (5 < uVar4 - 1) {
      __vbaGenerateBoundsError();
    }
    if (0x29 < DAT_0049108e) {
      __vbaGenerateBoundsError();
    }
    uVar5 = (uint)DAT_0049107a;
    if (5 < uVar5 - 1) {
      __vbaGenerateBoundsError();
    }
    if (DAT_00491000 != 0) {
      adj_fdiv_m32();
    }
    if ((in_FPUStatusWord & 0xd) == 0) {
      fVar6 = (float10)__vbaFPInt();
      *(float *)(DAT_0049106c + 8 + (uVar5 - 1) * 0x2c) =
           (float)(fVar6 + (float10)*(float *)(DAT_0049106c + 8 + (uVar4 - 1) * 0x2c));
      if ((in_FPUStatusWord & 0xd) == 0) {
        FUN_00486d20(&DAT_0049107a,&DAT_0049108e);
        FUN_00489260(&DAT_0049107a);
        iVar3 = (**(code **)(*piVar1 + 0x708))(piVar1,&DAT_0049107a);
        if (-1 < iVar3) {
          return;
        }
        __vbaHresultCheckObj(iVar3,piVar1,&DAT_00470614,0x708);
        return;
      }
    }
  }
  __vbaFPException();
  return;
}


