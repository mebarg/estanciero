/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0048e380(uint param_1)

{
  float fVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  ushort uVar8;
  float10 fVar9;
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
  local_10 = &stack0xffffff34;
  local_c = &DAT_004015d0;
  local_8 = param_1 & 1;
  piVar7 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar7 + 4))(piVar7);
  local_1c = 0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  uVar2 = (**(code **)(*piVar7 + 0x2fc))(piVar7);
  piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_1c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00472250,0xa0);
  }
  Ordinal_581(local_1c);
  uVar5 = (uint)DAT_0049108d;
  if (5 < uVar5 - 1) {
    __vbaGenerateBoundsError();
  }
  fVar9 = (float10)__vbaFpR4();
  fVar1 = *(float *)(DAT_0049106c + 8 + (uVar5 - 1) * 0x2c);
  __vbaFreeStr();
  __vbaFreeObj();
  if ((float10)fVar1 <= fVar9) {
    uVar5 = (uint)DAT_0049108d;
    local_58 = 0x80020004;
    local_60[0] = 10;
    local_48 = 0x80020004;
    local_50[0] = 10;
    local_38 = 0x80020004;
    local_40[0] = 10;
    if (5 < uVar5 - 1) {
      __vbaGenerateBoundsError();
    }
    local_28 = __vbaStrCat(L" no tiene suficiente dinero",
                           *(undefined4 *)(DAT_0049106c + 4 + (uVar5 - 1) * 0x2c));
    local_30[0] = 8;
    Ordinal_595(local_30,0,local_40,local_50,local_60);
    __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
    return;
  }
  uVar2 = (**(code **)(*piVar7 + 0x2fc))(piVar7);
  piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_1c);
  uVar8 = 0;
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00472250,0xa0);
  }
  fVar9 = (float10)Ordinal_581(local_1c);
  uVar5 = (uint)DAT_0049108d;
  if (5 < uVar5 - 1) {
    __vbaGenerateBoundsError();
  }
  uVar6 = (uint)DAT_0049108d;
  if (5 < uVar6 - 1) {
    __vbaGenerateBoundsError();
  }
  if ((uVar8 & 0xd) == 0) {
    *(float *)(DAT_0049106c + 8 + (uVar6 - 1) * 0x2c) =
         *(float *)(DAT_0049106c + 8 + (uVar5 - 1) * 0x2c) - (float)fVar9;
    __vbaFreeStr();
    __vbaFreeObj();
    uVar2 = (**(code **)(*piVar7 + 0x2fc))(piVar7);
    piVar3 = (int *)__vbaObjSet(&local_20,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0xa0))(piVar3,&local_1c);
    uVar8 = 0;
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_00472250,0xa0);
    }
    fVar9 = (float10)Ordinal_581(local_1c);
    uVar5 = (uint)DAT_0049107a;
    if (5 < uVar5 - 1) {
      __vbaGenerateBoundsError();
    }
    uVar6 = (uint)DAT_0049107a;
    if (5 < uVar6 - 1) {
      __vbaGenerateBoundsError();
    }
    if ((uVar8 & 0xd) == 0) {
      *(float *)(DAT_0049106c + 8 + (uVar6 - 1) * 0x2c) =
           *(float *)(DAT_0049106c + 8 + (uVar5 - 1) * 0x2c) + (float)fVar9;
      __vbaFreeStr();
      __vbaFreeObj();
      FUN_00487410(&DAT_0049108d,&DAT_0049108e);
      FUN_00486d20(&DAT_0049107a,&DAT_0049108e);
      if (DAT_00491714 == (int *)0x0) {
        __vbaNew2(&LAB_00470d04,&DAT_00491714);
      }
      piVar3 = DAT_00491714;
      iVar4 = *DAT_00491714;
      uVar2 = __vbaObjSetAddref(&local_20,piVar7);
      iVar4 = (**(code **)(iVar4 + 0x10))(piVar3,uVar2);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar3,&DAT_00470cf4,0x10);
      }
      __vbaFreeObj();
      return;
    }
  }
  __vbaFPException();
  return;
}


