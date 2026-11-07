/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0048b0b0(uint param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  ushort in_FPUStatusWord;
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
  local_10 = &stack0xffffffb0;
  local_c = &DAT_00401530;
  local_8 = param_1 & 1;
  piVar7 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar7 + 4))(piVar7);
  local_1c = 0;
  local_20 = 0;
  uVar8 = *(byte *)(piVar7 + 0xd) - 1;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  if (5 < uVar8) {
    __vbaGenerateBoundsError();
  }
  bVar2 = *(byte *)((int)piVar7 + 0x35);
  if (0x29 < bVar2) {
    __vbaGenerateBoundsError();
  }
  uVar9 = *(byte *)(piVar7 + 0xd) - 1;
  if (5 < uVar9) {
    __vbaGenerateBoundsError();
  }
  *(float *)(DAT_0049106c + 8 + uVar9 * 0x2c) =
       *(float *)(DAT_0049106c + 8 + uVar8 * 0x2c) -
       *(float *)(DAT_00491034 + 0x10 + (uint)bVar2 * 0x74);
  if ((in_FPUStatusWord & 0xd) == 0) {
    pbVar1 = (byte *)((int)piVar7 + 0x35);
    FUN_00487410((byte *)(piVar7 + 0xd),pbVar1);
    uVar8 = *(byte *)(piVar7 + 0xd) - 1;
    if (5 < uVar8) {
      __vbaGenerateBoundsError();
    }
    bVar2 = *pbVar1;
    if (0x29 < bVar2) {
      __vbaGenerateBoundsError();
    }
    bVar3 = *pbVar1;
    if (0x29 < bVar3) {
      __vbaGenerateBoundsError();
    }
    __vbaStrCat(L" compra ",*(undefined4 *)(DAT_0049106c + 4 + uVar8 * 0x2c));
    uVar5 = __vbaStrMove();
    __vbaStrCat(*(undefined4 *)(DAT_00491034 + 8 + (uint)bVar2 * 0x74),uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(L" por $",uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x10 + (uint)bVar3 * 0x74),uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(uVar5);
    __vbaStrMove();
    FUN_00487700(&local_2c);
    __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
    if (DAT_00491714 == (int *)0x0) {
      __vbaNew2(&LAB_00470d04,&DAT_00491714);
    }
    piVar4 = DAT_00491714;
    iVar6 = *DAT_00491714;
    uVar5 = __vbaObjSetAddref(&local_30,piVar7);
    iVar6 = (**(code **)(iVar6 + 0x10))(piVar4,uVar5);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar4,&DAT_00470cf4,0x10);
    }
    __vbaFreeObj();
    return;
  }
  __vbaFPException();
  return;
}


