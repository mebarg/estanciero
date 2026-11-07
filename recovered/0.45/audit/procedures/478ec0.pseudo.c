/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00478ec0(uint param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int extraout_ECX;
  int iVar7;
  int extraout_EDX;
  uint uVar8;
  ushort in_FPUStatusWord;
  ushort uVar9;
  float10 fVar10;
  float10 extraout_ST0;
  undefined8 uVar11;
  float fVar12;
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
  local_10 = &stack0xffffff3c;
  local_c = &DAT_00401260;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  uVar2 = (uint)DAT_0049107a;
  if (5 < uVar2 - 1) {
    __vbaGenerateBoundsError();
  }
  if (0x29 < DAT_0049108e) {
    __vbaGenerateBoundsError();
  }
  if (0x29 < DAT_0049108e) {
    __vbaGenerateBoundsError();
  }
  if (DAT_00491000 != 0) {
    adj_fdiv_m32(0x41200000);
  }
  if ((in_FPUStatusWord & 0xd) != 0) {
LAB_004792a6:
    __vbaFPException();
    return;
  }
  fVar10 = (float10)__vbaFpR4();
  uVar9 = 0;
  local_58 = 0x80020004;
  local_48 = 0x80020004;
  local_38 = 0x80020004;
  local_60[0] = 10;
  local_50[0] = 10;
  local_40[0] = 10;
  if ((float10)*(float *)(DAT_0049106c + 8 + (uVar2 - 1) * 0x2c) < fVar10) {
    __vbaVarDup();
    Ordinal_595(local_30,0,local_40);
    __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
  }
  else {
    uVar2 = (uint)DAT_0049108e;
    if (0x29 < uVar2) {
      __vbaGenerateBoundsError();
    }
    uVar5 = (uint)DAT_0049108e;
    if (0x29 < uVar5) {
      __vbaGenerateBoundsError();
    }
    uVar11 = CONCAT44(uVar2 * 7,DAT_00491034);
    if (DAT_00491000 == 0) {
      fVar10 = (float10)*(float *)(DAT_00491034 + 0x68 + uVar5 * 0x74) / (float10)10.0;
    }
    else {
      uVar11 = adj_fdiv_m32();
      fVar10 = extraout_ST0;
    }
    if ((uVar9 & 0xd) != 0) goto LAB_004792a6;
    fVar12 = (float)(fVar10 + (float10)*(float *)((int)uVar11 + 0x68 +
                                                 (uVar2 + (int)((ulonglong)uVar11 >> 0x20) * 4) * 4)
                    );
    __vbaStrR4(fVar12);
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
      uVar5 = (uint)DAT_0049108e;
      if (0x29 < uVar5) {
        __vbaGenerateBoundsError();
      }
      uVar8 = (uint)DAT_0049108e;
      if (0x29 < uVar8) {
        __vbaGenerateBoundsError();
      }
      uVar6 = (uint)DAT_0049107a;
      if (5 < uVar6 - 1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = (uVar2 - 1) * 0xb;
      if (DAT_00491000 == 0) {
        fVar10 = (float10)*(float *)(DAT_00491034 + 0x68 + uVar8 * 0x74) / (float10)10.0;
        iVar7 = DAT_00491034;
      }
      else {
        fVar12 = 10.0;
        fVar10 = (float10)adj_fdiv_m32();
        iVar7 = extraout_ECX;
        iVar4 = extraout_EDX;
      }
      *(float *)(DAT_0049106c + 8 + (uVar6 - 1) * 0x2c) =
           (float)((float10)*(float *)(DAT_0049106c + 8 + iVar4 * 4) -
                  (fVar10 + (float10)*(float *)(iVar7 + 0x68 + uVar5 * 0x74)));
      if ((uVar9 & 0xd) != 0) goto LAB_004792a6;
      uVar2 = (uint)DAT_0049108e;
      if (0x29 < uVar2) {
        __vbaGenerateBoundsError(fVar12);
      }
      *(undefined2 *)(DAT_00491034 + 0x6c + uVar2 * 0x74) = 0;
      FUN_00489260(&DAT_0049107a);
      iVar4 = (**(code **)(*piVar1 + 0x708))(piVar1,&DAT_0049107a);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar1,&DAT_00470614,0x708);
      }
    }
  }
  return;
}


