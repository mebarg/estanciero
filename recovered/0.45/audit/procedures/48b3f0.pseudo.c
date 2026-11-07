/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void FUN_0048b3f0(uint param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  code *pcVar9;
  undefined4 local_38;
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
  local_10 = &stack0xffffff28;
  local_c = &DAT_00401550;
  local_8 = param_1 & 1;
  piVar8 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar8 + 4))(piVar8);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  uVar3 = (uint)DAT_0049107a;
  *(byte *)(piVar8 + 0xd) = DAT_0049107a;
  if (5 < uVar3 - 1) {
    __vbaGenerateBoundsError();
  }
  bVar1 = *(byte *)(DAT_0049106c + 0x10 + (uVar3 - 1) * 0x2c);
  *(byte *)((int)piVar8 + 0x35) = bVar1;
  if (0x29 < bVar1) {
    __vbaGenerateBoundsError();
  }
  __vbaStrCopy();
  iVar4 = __vbaStrCmp(&DAT_004713a8,0);
  if (iVar4 == 0) {
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = *piVar6;
    __vbaStrCat(&DAT_0047375c,L"ESCRITURA");
    pcVar9 = __vbaStrMove_exref;
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStr();
    __vbaFreeObj();
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_34,uVar5);
    bVar1 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = *piVar6;
    __vbaStrCat(&DAT_0047375c,*(undefined4 *)(DAT_00491034 + 8 + (uint)bVar1 * 0x74));
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStrList(2,&local_1c,&local_20);
    __vbaFreeObj();
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
    }
    bVar1 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = *piVar6;
    __vbaStrCat(*(undefined4 *)(DAT_00491034 + 0xc + (uint)bVar1 * 0x74),local_1c);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStrList(4,&local_1c,&local_20,&local_24,&local_28);
    __vbaFreeObjList(2,&local_34,&local_38);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
    }
    bVar1 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = *piVar6;
    __vbaStrCat(L"Alquiler por el campo: $",local_1c);
    uVar5 = __vbaStrMove();
    __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x14 + (uint)bVar1 * 0x74),uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
    __vbaFreeObjList(2,&local_34,&local_38);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
    }
    bVar1 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = *piVar6;
    __vbaStrCat(L"Idem con 1 chacra: $",local_1c);
    uVar5 = __vbaStrMove();
    __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x18 + (uint)bVar1 * 0x74),uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
    __vbaFreeObjList(2,&local_34,&local_38);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
    }
    bVar1 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = *piVar6;
    __vbaStrCat(L"Idem con 2 chacras: $",local_1c);
    uVar5 = __vbaStrMove();
    __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x1c + (uint)bVar1 * 0x74),uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
    __vbaFreeObjList(2,&local_34,&local_38);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
    }
    bVar1 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = *piVar6;
    __vbaStrCat(L"Idem con 3 chacras: $",local_1c);
    uVar5 = __vbaStrMove();
    __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x20 + (uint)bVar1 * 0x74),uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
    __vbaFreeObjList(2,&local_34,&local_38);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
    }
    bVar1 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = *piVar6;
    __vbaStrCat(L"Idem con 4 chacras: $",local_1c);
    uVar5 = __vbaStrMove();
    __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x24 + (uint)bVar1 * 0x74),uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
    __vbaFreeObjList(2,&local_34,&local_38);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
    }
    bVar1 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = *piVar6;
    __vbaStrCat(L"Idem con 1 estancia: $",local_1c);
    uVar5 = __vbaStrMove();
    __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x28 + (uint)bVar1 * 0x74),uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStrList(6,&local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30);
    __vbaFreeObjList(2,&local_34,&local_38);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
    }
    iVar4 = *piVar6;
    __vbaStrCat(L"Teniendo una provincia completa el alquiler de los campos se duplica",local_1c);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
    __vbaFreeObjList(2,&local_34,&local_38);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
    }
    bVar1 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = *piVar6;
    __vbaStrCat(L"1 chacra vale: $",local_1c);
    uVar5 = __vbaStrMove();
    __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x2c + (uint)bVar1 * 0x74),uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
    __vbaFreeObjList(2,&local_34,&local_38);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
    uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
    }
    bVar1 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = *piVar6;
    __vbaStrCat(L"1 estancia vale: $",local_1c);
    uVar5 = __vbaStrMove();
    __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x30 + (uint)bVar1 * 0x74),uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(L" mas 4 chacras",uVar5);
    uVar5 = __vbaStrMove();
    __vbaStrCat(&DAT_0047375c,uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
    }
    __vbaFreeStrList(6,&local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30);
    __vbaFreeObjList(2,&local_34,&local_38);
    uVar5 = (**(code **)(*piVar8 + 0x310))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_34,uVar5);
    bVar1 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    iVar4 = *piVar6;
    __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x10 + (uint)bVar1 * 0x74),&DAT_0047399c);
    uVar5 = __vbaStrMove();
    __vbaStrCat(uVar5);
    uVar5 = __vbaStrMove();
    iVar4 = (**(code **)(iVar4 + 0x54))(piVar6,uVar5);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00471330,0x54);
    }
  }
  else {
    iVar4 = __vbaStrCmp(&DAT_004713b8,0);
    if (iVar4 == 0) {
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_34,uVar5);
      iVar4 = *piVar6;
      __vbaStrCat(&DAT_0047375c,L"ESCRITURA");
      pcVar9 = __vbaStrMove_exref;
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStr();
      __vbaFreeObj();
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_34,uVar5);
      bVar1 = *(byte *)((int)piVar8 + 0x35);
      if (0x29 < bVar1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = *piVar6;
      __vbaStrCat(&DAT_0047375c,*(undefined4 *)(DAT_00491034 + 8 + (uint)bVar1 * 0x74));
      uVar5 = __vbaStrMove();
      __vbaStrCat(&DAT_0047375c,uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStrList(2,&local_1c,&local_20);
      __vbaFreeObj();
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
      iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
      }
      iVar4 = *piVar6;
      __vbaStrCat(L"Alquileres",local_1c);
      uVar5 = __vbaStrMove();
      __vbaStrCat(&DAT_0047375c,uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
      __vbaFreeObjList(2,&local_34,&local_38);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
      iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
      }
      iVar4 = *piVar6;
      __vbaStrCat(L"Teniendo 1 compania cobrese 100 veces lo que indican los dados",local_1c);
      uVar5 = __vbaStrMove();
      __vbaStrCat(&DAT_0047375c,uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
      __vbaFreeObjList(2,&local_34,&local_38);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
      iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
      }
      iVar4 = *piVar6;
      __vbaStrCat(L"Teniendo 2 compania cobrese 200 veces lo que indican los dados",local_1c);
      uVar5 = __vbaStrMove();
      __vbaStrCat(&DAT_0047375c,uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
      __vbaFreeObjList(2,&local_34,&local_38);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
      iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
      }
      iVar4 = *piVar6;
      __vbaStrCat(L"Teniendo 3 compania cobrese 300 veces lo que indican los dados",local_1c);
      uVar5 = __vbaStrMove();
      __vbaStrCat(&DAT_0047375c,uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
      __vbaFreeObjList(2,&local_34,&local_38);
      uVar5 = (**(code **)(*piVar8 + 0x310))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_34,uVar5);
      bVar1 = *(byte *)((int)piVar8 + 0x35);
      if (0x29 < bVar1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = *piVar6;
      __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x10 + (uint)bVar1 * 0x74),&DAT_0047399c);
      uVar5 = __vbaStrMove();
      __vbaStrCat(uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0x54))(piVar6,uVar5);
    }
    else {
      iVar4 = __vbaStrCmp(&DAT_004713b0,0);
      pcVar9 = __vbaStrMove_exref;
      if (iVar4 != 0) goto LAB_0048cd42;
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_34,uVar5);
      iVar4 = *piVar6;
      __vbaStrCat(&DAT_0047375c,L"ESCRITURA");
      pcVar9 = __vbaStrMove_exref;
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStr();
      __vbaFreeObj();
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_34,uVar5);
      bVar1 = *(byte *)((int)piVar8 + 0x35);
      if (0x29 < bVar1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = *piVar6;
      __vbaStrCat(&DAT_0047375c,*(undefined4 *)(DAT_00491034 + 8 + (uint)bVar1 * 0x74));
      uVar5 = __vbaStrMove();
      __vbaStrCat(&DAT_0047375c,uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStrList(2,&local_1c,&local_20);
      __vbaFreeObj();
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
      iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
      }
      iVar4 = *piVar6;
      __vbaStrCat(L"Alquileres",local_1c);
      uVar5 = __vbaStrMove();
      __vbaStrCat(&DAT_0047375c,uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStrList(3,&local_1c,&local_20,&local_24);
      __vbaFreeObjList(2,&local_34,&local_38);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
      iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
      }
      bVar1 = *(byte *)((int)piVar8 + 0x35);
      if (0x29 < bVar1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = *piVar6;
      __vbaStrCat(L"Teniendo 1 ferrocarril: $",local_1c);
      uVar5 = __vbaStrMove();
      __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x18 + (uint)bVar1 * 0x74),uVar5);
      uVar5 = __vbaStrMove();
      __vbaStrCat(uVar5);
      uVar5 = __vbaStrMove();
      __vbaStrCat(&DAT_0047375c,uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
      __vbaFreeObjList(2,&local_34,&local_38);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
      iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
      }
      bVar1 = *(byte *)((int)piVar8 + 0x35);
      if (0x29 < bVar1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = *piVar6;
      __vbaStrCat(L"Teniendo 2 ferrocarril: $",local_1c);
      uVar5 = __vbaStrMove();
      __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x1c + (uint)bVar1 * 0x74),uVar5);
      uVar5 = __vbaStrMove();
      __vbaStrCat(uVar5);
      uVar5 = __vbaStrMove();
      __vbaStrCat(&DAT_0047375c,uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
      __vbaFreeObjList(2,&local_34,&local_38);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
      iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
      }
      bVar1 = *(byte *)((int)piVar8 + 0x35);
      if (0x29 < bVar1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = *piVar6;
      __vbaStrCat(L"Teniendo 3 ferrocarril: $",local_1c);
      uVar5 = __vbaStrMove();
      __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x20 + (uint)bVar1 * 0x74),uVar5);
      uVar5 = __vbaStrMove();
      __vbaStrCat(uVar5);
      uVar5 = __vbaStrMove();
      __vbaStrCat(&DAT_0047375c,uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
      __vbaFreeObjList(2,&local_34,&local_38);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_38,uVar5);
      uVar5 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
      piVar7 = (int *)__vbaObjSet(&local_34,uVar5);
      iVar4 = (**(code **)(*piVar7 + 0xa0))(piVar7,&local_1c);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar7,&DAT_00472250,0xa0);
      }
      bVar1 = *(byte *)((int)piVar8 + 0x35);
      if (0x29 < bVar1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = *piVar6;
      __vbaStrCat(L"Teniendo 4 ferrocarril: $",local_1c);
      uVar5 = __vbaStrMove();
      __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x24 + (uint)bVar1 * 0x74),uVar5);
      uVar5 = __vbaStrMove();
      __vbaStrCat(uVar5);
      uVar5 = __vbaStrMove();
      __vbaStrCat(&DAT_0047375c,uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0xa4))(piVar6,uVar5);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar6,&DAT_00472250,0xa4);
      }
      __vbaFreeStrList(5,&local_1c,&local_20,&local_24,&local_28,&local_2c);
      __vbaFreeObjList(2,&local_34,&local_38);
      uVar5 = (**(code **)(*piVar8 + 0x310))(piVar8);
      piVar6 = (int *)__vbaObjSet(&local_34,uVar5);
      bVar1 = *(byte *)((int)piVar8 + 0x35);
      if (0x29 < bVar1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = *piVar6;
      __vbaStrR4(*(undefined4 *)(DAT_00491034 + 0x10 + (uint)bVar1 * 0x74),&DAT_0047399c);
      uVar5 = __vbaStrMove();
      __vbaStrCat(uVar5);
      uVar5 = __vbaStrMove();
      iVar4 = (**(code **)(iVar4 + 0x54))(piVar6,uVar5);
    }
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_00471330,0x54);
    }
  }
  __vbaFreeStrList(2,&local_1c,&local_20);
  __vbaFreeObj();
LAB_0048cd42:
  bVar1 = *(byte *)((int)piVar8 + 0x35);
  if (0x29 < bVar1) {
    __vbaGenerateBoundsError();
  }
  bVar2 = *(byte *)(piVar8 + 0xd);
  if (5 < bVar2 - 1) {
    __vbaGenerateBoundsError();
  }
  if (*(float *)(DAT_0049106c + 8 + (bVar2 - 1) * 0x2c) <
      *(float *)(DAT_00491034 + 0x10 + (uint)bVar1 * 0x74)) {
    bVar1 = *(byte *)(piVar8 + 0xd);
    if (5 < bVar1 - 1) {
      __vbaGenerateBoundsError();
    }
    bVar2 = *(byte *)((int)piVar8 + 0x35);
    if (0x29 < bVar2) {
      __vbaGenerateBoundsError();
    }
    __vbaStrCat(L" no tiene dinero para la compra de ",
                *(undefined4 *)(DAT_0049106c + 4 + (bVar1 - 1) * 0x2c));
    uVar5 = (*pcVar9)();
    __vbaStrCat(*(undefined4 *)(DAT_00491034 + 8 + (uint)bVar2 * 0x74),uVar5);
    (*pcVar9)();
    FUN_00487700(&local_20);
    __vbaFreeStrList(2,&local_1c,&local_20);
    uVar5 = (**(code **)(*piVar8 + 0x304))(piVar8);
    piVar6 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar6 + 0x8c))(piVar6,0);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar6,&DAT_004717a8,0x8c);
    }
    __vbaFreeObj();
    uVar5 = (**(code **)(*piVar8 + 0x308))(piVar8);
    piVar8 = (int *)__vbaObjSet(&local_34,uVar5);
    iVar4 = (**(code **)(*piVar8 + 0x9c))(piVar8,0xffffffff);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar8,&DAT_00471330,0x9c);
    }
    __vbaFreeObj();
  }
  local_8 = 0;
  __vbaFreeStr(&LAB_0048cef2);
  return;
}


