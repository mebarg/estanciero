/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00476880(uint param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  ushort uVar6;
  float10 fVar7;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88 [5];
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [2];
  float local_5c;
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
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
  local_10 = &stack0xffffff18;
  local_c = &DAT_00401200;
  local_8 = param_1 & 1;
  piVar1 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar1 + 4))(piVar1);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = (int *)0x0;
  local_40 = (int *)0x0;
  local_44 = (int *)0x0;
  local_48 = 0;
  local_4c = 0;
  local_50 = (int *)0x0;
  local_54 = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_88[0] = 0;
  local_8c = 0;
  local_90 = 0;
  local_94 = 0.0;
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar4 = DAT_00491714;
  iVar2 = (**(code **)(*DAT_00491714 + 0x18))(DAT_00491714,&local_3c);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470cf4,0x18);
  }
  piVar4 = local_3c;
  iVar2 = (**(code **)(*local_3c + 0x88))(local_3c,&local_94);
  uVar6 = 0;
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470ee8,0x88);
  }
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  piVar4 = DAT_00491010;
  if ((uVar6 & 0xd) == 0) {
    iVar2 = (**(code **)(*DAT_00491010 + 0x8c))(DAT_00491010,local_94 * 755.0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_004705e4,0x8c);
    }
    __vbaFreeObj();
    if (DAT_00491714 == (int *)0x0) {
      __vbaNew2(&LAB_00470d04,&DAT_00491714);
    }
    piVar4 = DAT_00491714;
    iVar2 = (**(code **)(*DAT_00491714 + 0x18))(DAT_00491714,&local_3c);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470cf4,0x18);
    }
    piVar4 = local_3c;
    iVar2 = (**(code **)(*local_3c + 0x80))(local_3c,&local_94);
    uVar6 = 0;
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470ee8,0x80);
    }
    if (DAT_00491010 == (int *)0x0) {
      __vbaNew2(&DAT_0046f194,&DAT_00491010);
    }
    piVar4 = DAT_00491010;
    if ((uVar6 & 0xd) == 0) {
      iVar2 = (**(code **)(*DAT_00491010 + 0x84))(DAT_00491010,local_94 * 1024.0);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_004705e4,0x84);
      }
      __vbaFreeObj();
      uVar3 = (**(code **)(*piVar1 + 0x308))(piVar1);
      piVar4 = (int *)__vbaObjSet(&local_4c,uVar3);
      iVar2 = (**(code **)(*piVar4 + 0x40))(piVar4,1,&local_50);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470e74,0x40);
      }
      piVar4 = local_50;
      uVar3 = (**(code **)(*piVar1 + 0x38c))(piVar1,4,0,&DAT_00470e54);
      uVar3 = __vbaObjSet(&local_3c,uVar3);
      uVar3 = __vbaLateIdCallLd(local_64,uVar3);
      uVar3 = __vbaCastObjVar(uVar3);
      piVar5 = (int *)__vbaObjSet(&local_40,uVar3);
      local_6c = 7;
      local_74[0] = 2;
      iVar2 = (**(code **)(*piVar5 + 0x24))(piVar5,local_74,&local_44);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5,&DAT_00470e54,0x24);
      }
      piVar5 = local_44;
      iVar2 = (**(code **)(*local_44 + 0x34))(local_44,&local_48);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5,&DAT_00470e64,0x34);
      }
      uVar3 = local_48;
      local_48 = 0;
      iVar2 = *piVar4;
      uVar3 = __vbaObjSet(&local_54,uVar3);
      iVar2 = (**(code **)(iVar2 + 0x5c))(piVar4,uVar3);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470e84,0x5c);
      }
      __vbaFreeObjList(6,&local_3c,&local_40,&local_44,&local_4c,&local_54,&local_50);
      __vbaFreeVarList(2,local_64,local_74);
      uVar3 = (**(code **)(*piVar1 + 0x308))(piVar1);
      piVar4 = (int *)__vbaObjSet(&local_4c,uVar3);
      iVar2 = (**(code **)(*piVar4 + 0x40))(piVar4,2,&local_50);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470e74,0x40);
      }
      piVar4 = local_50;
      uVar3 = (**(code **)(*piVar1 + 0x38c))(piVar1,4,0,&DAT_00470e54);
      uVar3 = __vbaObjSet(&local_3c,uVar3);
      uVar3 = __vbaLateIdCallLd(local_64,uVar3);
      uVar3 = __vbaCastObjVar(uVar3);
      piVar5 = (int *)__vbaObjSet(&local_40,uVar3);
      local_6c = 7;
      local_74[0] = 2;
      iVar2 = (**(code **)(*piVar5 + 0x24))(piVar5,local_74,&local_44);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5,&DAT_00470e54,0x24);
      }
      piVar5 = local_44;
      iVar2 = (**(code **)(*local_44 + 0x34))(local_44,&local_48);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar5,&DAT_00470e64,0x34);
      }
      uVar3 = local_48;
      local_48 = 0;
      iVar2 = *piVar4;
      uVar3 = __vbaObjSet(&local_54,uVar3);
      iVar2 = (**(code **)(iVar2 + 0x5c))(piVar4,uVar3);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470e84,0x5c);
      }
      __vbaFreeObjList(6,&local_3c,&local_40,&local_44,&local_4c,&local_54,&local_50);
      __vbaFreeVarList(2,local_64,local_74);
      fVar7 = (float10)Ordinal_535();
      local_5c = (float)fVar7;
      local_64[0] = 4;
      Ordinal_594(local_64);
      __vbaFreeVar();
      iVar2 = (**(code **)(*piVar1 + 0x6f8))(piVar1);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar1,&DAT_00470614,0x6f8);
      }
      FUN_004832e0();
      if (DAT_00491714 == (int *)0x0) {
        __vbaNew2(&LAB_00470d04,&DAT_00491714);
      }
      piVar4 = DAT_00491714;
      iVar2 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&local_3c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470cf4,0x14);
      }
      piVar4 = local_3c;
      iVar2 = (**(code **)(*local_3c + 0xb8))(local_3c,local_88);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470f14,0xb8);
      }
      if (DAT_00491714 == (int *)0x0) {
        __vbaNew2(&LAB_00470d04,&DAT_00491714);
      }
      piVar4 = DAT_00491714;
      iVar2 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&local_40);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470cf4,0x14);
      }
      piVar4 = local_40;
      iVar2 = (**(code **)(*local_40 + 0xc0))(local_40,&local_8c);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470f14,0xc0);
      }
      if (DAT_00491714 == (int *)0x0) {
        __vbaNew2(&LAB_00470d04,&DAT_00491714);
      }
      piVar4 = DAT_00491714;
      iVar2 = (**(code **)(*DAT_00491714 + 0x14))(DAT_00491714,&local_44);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470cf4,0x14);
      }
      piVar4 = local_44;
      iVar2 = (**(code **)(*local_44 + 200))(local_44,&local_90);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470f14,200);
      }
      iVar2 = *piVar1;
      __vbaStrI2(local_88[0],L"Estanciero ");
      uVar3 = __vbaStrMove();
      __vbaStrCat(uVar3);
      uVar3 = __vbaStrMove();
      __vbaStrCat(&DAT_00470f28,uVar3);
      uVar3 = __vbaStrMove();
      __vbaStrI2(local_8c,uVar3);
      uVar3 = __vbaStrMove();
      __vbaStrCat(uVar3);
      uVar3 = __vbaStrMove();
      __vbaStrCat(&DAT_00470f28,uVar3);
      uVar3 = __vbaStrMove();
      __vbaStrI2(local_90,uVar3);
      uVar3 = __vbaStrMove();
      __vbaStrCat(uVar3);
      uVar3 = __vbaStrMove();
      iVar2 = (**(code **)(iVar2 + 0x54))(piVar1,uVar3);
      if (iVar2 < 0) {
        __vbaHresultCheckObj(iVar2,piVar1,&DAT_004705e4,0x54);
      }
      __vbaFreeStrList(8,&local_1c,&local_20,&local_24,&local_28,&local_2c,&local_30,&local_34,
                       &local_38);
      __vbaFreeObjList(3,&local_3c,&local_40,&local_44);
      return;
    }
  }
  __vbaFPException();
  return;
}


