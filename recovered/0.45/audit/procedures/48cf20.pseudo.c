/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0048cf20(uint param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  ushort in_FPUStatusWord;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffa4;
  local_c = &DAT_00401560;
  local_8 = param_1 & 1;
  piVar6 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar6 + 4))(piVar6);
  local_1c = 0;
  local_20 = 0;
  uVar7 = *(byte *)((int)piVar6 + 0x35) - 1;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  if (5 < uVar7) {
    __vbaGenerateBoundsError();
  }
  uVar5 = *(byte *)((int)piVar6 + 0x35) - 1;
  if (5 < uVar5) {
    __vbaGenerateBoundsError();
  }
  *(float *)(DAT_0049106c + 8 + uVar5 * 0x2c) =
       *(float *)(DAT_0049106c + 8 + uVar7 * 0x2c) - (float)piVar6[0xe];
  if ((in_FPUStatusWord & 0xd) == 0) {
    bVar1 = *(byte *)(piVar6 + 0xd);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    uVar7 = *(byte *)(DAT_00491034 + 0x65 + (uint)bVar1 * 0x74) - 1;
    if (5 < uVar7) {
      __vbaGenerateBoundsError();
    }
    bVar1 = *(byte *)(piVar6 + 0xd);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    uVar5 = *(byte *)(DAT_00491034 + 0x65 + (uint)bVar1 * 0x74) - 1;
    if (5 < uVar5) {
      __vbaGenerateBoundsError();
    }
    *(float *)(DAT_0049106c + 8 + uVar5 * 0x2c) =
         *(float *)(DAT_0049106c + 8 + uVar7 * 0x2c) + (float)piVar6[0xe];
    if ((in_FPUStatusWord & 0xd) == 0) {
      uVar7 = *(byte *)((int)piVar6 + 0x35) - 1;
      if (5 < uVar7) {
        __vbaGenerateBoundsError();
      }
      bVar1 = *(byte *)(piVar6 + 0xd);
      if (0x29 < bVar1) {
        __vbaGenerateBoundsError();
      }
      uVar5 = *(byte *)(DAT_00491034 + 0x65 + (uint)bVar1 * 0x74) - 1;
      if (5 < uVar5) {
        __vbaGenerateBoundsError();
      }
      __vbaStrCat(L" paga a ",*(undefined4 *)(DAT_0049106c + 4 + uVar7 * 0x2c));
      uVar3 = __vbaStrMove();
      __vbaStrCat(*(undefined4 *)(DAT_0049106c + 4 + uVar5 * 0x2c),uVar3);
      uVar3 = __vbaStrMove();
      __vbaStrCat(&DAT_00471b60,uVar3);
      uVar3 = __vbaStrMove();
      __vbaStrR4(piVar6[0xe],uVar3);
      uVar3 = __vbaStrMove();
      __vbaStrCat(uVar3);
      uVar3 = __vbaStrMove();
      __vbaStrCat(L" de alquiler",uVar3);
      __vbaStrMove();
      FUN_00487700(&local_30);
      __vbaFreeStrList(6,&local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30);
      uVar7 = *(byte *)((int)piVar6 + 0x35) - 1;
      if (5 < uVar7) {
        __vbaGenerateBoundsError();
      }
      *(undefined4 *)(DAT_0049106c + 0x20 + uVar7 * 0x2c) = 0;
      if (DAT_00491714 == (int *)0x0) {
        __vbaNew2(&LAB_00470d04,&DAT_00491714);
      }
      piVar2 = DAT_00491714;
      iVar4 = *DAT_00491714;
      uVar3 = __vbaObjSetAddref(&local_34,piVar6);
      iVar4 = (**(code **)(iVar4 + 0x10))(piVar2,uVar3);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar2,&DAT_00470cf4,0x10);
      }
      __vbaFreeObj();
      return;
    }
  }
  __vbaFPException();
  return;
}


