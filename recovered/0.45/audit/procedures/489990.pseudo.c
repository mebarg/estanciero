/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00489990(uint param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 local_f8 [4];
  undefined4 local_e8 [10];
  undefined4 local_c0 [5];
  undefined4 local_ac [2];
  undefined4 local_a4;
  undefined4 local_9c [2];
  undefined4 local_94;
  undefined4 local_8c [2];
  wchar_t *local_84;
  undefined4 local_7c [2];
  undefined4 local_74;
  undefined4 local_6c [2];
  undefined4 local_64;
  undefined4 local_5c [2];
  undefined4 local_54;
  undefined4 local_4c [4];
  int *local_3c;
  int *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xfffffef0;
  local_c = &DAT_004014d0;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_28[0] = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = (int *)0x0;
  local_3c = (int *)0x0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_6c[0] = 0;
  local_7c[0] = 0;
  local_8c[0] = 0;
  local_9c[0] = 0;
  local_ac[0] = 0;
  local_c0[0] = 0;
  local_e8[0] = 0;
  local_f8[0] = 0;
  uVar1 = (**(code **)(*piVar5 + 0x308))(piVar5);
  piVar2 = (int *)__vbaObjSet(&local_34,uVar1);
  iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_2c);
  if (iVar3 < 0) {
    __vbaHresultCheckObj(iVar3,piVar2,&DAT_00472250,0xa0);
  }
  iVar3 = __vbaStrCmp(&DAT_00471b58,local_2c);
  __vbaFreeStr();
  __vbaFreeObj();
  if (iVar3 == 0) {
    local_74 = 0x80020004;
    local_64 = 0x80020004;
    local_54 = 0x80020004;
    local_7c[0] = 10;
    local_6c[0] = 10;
    local_5c[0] = 10;
    local_84 = L"Debe ingresar su nombre";
    local_8c[0] = 8;
    __vbaVarDup();
    Ordinal_595(local_4c,0,local_5c,local_6c,local_7c);
    __vbaFreeVarList(4,local_4c,local_5c,local_6c,local_7c);
  }
  else {
    uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
    piVar2 = (int *)__vbaObjSet(&local_34,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_2c);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00472250,0xa0);
    }
    iVar3 = __vbaStrCmp(&DAT_00471b58,local_2c);
    __vbaFreeStr();
    __vbaFreeObj();
    pcVar6 = __vbaObjSet_exref;
    if (iVar3 != 0) {
      uVar1 = (**(code **)(*piVar5 + 0x304))(piVar5);
      pcVar6 = __vbaObjSet_exref;
      piVar2 = (int *)__vbaObjSet(&local_34,uVar1);
      iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_2c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00472250,0xa0);
      }
      __vbaStrCopy();
      __vbaFreeStr();
      __vbaFreeObj();
    }
    uVar1 = (**(code **)(*piVar5 + 800))(piVar5);
    piVar2 = (int *)(*pcVar6)(&local_34,uVar1);
    iVar3 = (**(code **)(*piVar2 + 0xe0))(piVar2,local_c0);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_004735e8,0xe0);
    }
    bVar7 = (short)local_c0[0] == -1;
    __vbaFreeObj();
    if (bVar7) {
      uVar1 = (**(code **)(*piVar5 + 0x308))();
      piVar2 = (int *)(*pcVar6)(&local_34,uVar1);
      iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_2c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00472250,0xa0);
      }
      __vbaStrCopy();
      __vbaFreeStr();
      __vbaFreeObj();
      if (DAT_00491010 == (int *)0x0) {
        __vbaNew2(&DAT_0046f194,&DAT_00491010);
      }
      uVar1 = (**(code **)(*DAT_00491010 + 0x318))(DAT_00491010);
      piVar2 = (int *)(*pcVar6)(&local_38,uVar1);
      iVar3 = (**(code **)(*piVar2 + 0x40))(piVar2,1,&local_3c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00470e74,0x40);
      }
      piVar2 = local_3c;
      uVar1 = (**(code **)(*piVar5 + 0x308))(piVar5);
      piVar4 = (int *)__vbaObjSet(&local_34,uVar1);
      iVar3 = (**(code **)(*piVar4 + 0xa0))(piVar4,&local_2c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar4,&DAT_00472250,0xa0);
      }
      iVar3 = *piVar2;
      __vbaStrCat(L" $ 567890",local_2c);
      uVar1 = __vbaStrMove();
      iVar3 = (**(code **)(iVar3 + 0x54))(piVar2,uVar1);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471330,0x54);
      }
      __vbaFreeStrList(2,&local_2c,&local_30);
      __vbaFreeObjList(3,&local_34,&local_38,&local_3c);
      DAT_00491080 = 1;
      local_84 = (wchar_t *)0x1;
      local_8c[0] = 2;
      local_94 = 6;
      local_9c[0] = 2;
      local_a4 = 2;
      local_ac[0] = 2;
      iVar3 = __vbaVarForInit(local_28,local_e8,local_f8,local_ac,local_9c,local_8c);
      while (iVar3 != 0) {
        if (DAT_00491010 == (int *)0x0) {
          __vbaNew2(&DAT_0046f194,&DAT_00491010);
        }
        uVar1 = (**(code **)(*DAT_00491010 + 0x318))(DAT_00491010);
        piVar2 = (int *)__vbaObjSet(&local_34,uVar1);
        iVar3 = *piVar2;
        uVar1 = __vbaI2Var(local_28,&local_38);
        iVar3 = (**(code **)(iVar3 + 0x40))(piVar2,uVar1);
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar2,&DAT_00470e74,0x40);
        }
        piVar2 = local_38;
        iVar3 = (**(code **)(*local_38 + 0x54))(local_38,L"Esperando jugador");
        if (iVar3 < 0) {
          __vbaHresultCheckObj(iVar3,piVar2,&DAT_00471330,0x54);
        }
        __vbaFreeObjList(2,&local_34,&local_38);
        iVar3 = __vbaVarForNext(local_28,local_e8,local_f8);
      }
    }
    else {
      uVar1 = (**(code **)(*piVar5 + 0x308))(piVar5);
      piVar2 = (int *)(*pcVar6)(&local_34,uVar1);
      iVar3 = (**(code **)(*piVar2 + 0xa0))(piVar2,&local_2c);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar2,&DAT_00472250,0xa0);
      }
      __vbaStrCopy();
      __vbaFreeStr();
      __vbaFreeObj();
    }
    if (DAT_00491714 == (int *)0x0) {
      __vbaNew2(&LAB_00470d04,&DAT_00491714);
    }
    piVar2 = DAT_00491714;
    iVar3 = *DAT_00491714;
    uVar1 = __vbaObjSetAddref(&local_34,piVar5);
    iVar3 = (**(code **)(iVar3 + 0x10))(piVar2,uVar1);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar2,&DAT_00470cf4,0x10);
    }
    __vbaFreeObj();
  }
  local_8 = 0;
  __vbaFreeVarList(2,local_e8,local_f8,&LAB_00489f9a);
  __vbaFreeVar();
  return;
}


