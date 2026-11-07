/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0048f820(uint param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  undefined4 *puVar9;
  byte local_8c [4];
  undefined4 local_88 [2];
  undefined1 *local_80;
  undefined4 local_78 [4];
  undefined4 local_68 [4];
  undefined4 local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c [4];
  undefined4 local_2c [4];
  undefined1 local_1c [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined1 *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff30;
  local_c = &LAB_00401638;
  local_8 = param_1 & 1;
  piVar8 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar8 + 4))(piVar8);
  local_1c[0] = 0;
  local_2c[0] = 0;
  local_3c[0] = 0;
  local_40 = 0;
  local_44 = (int *)0x0;
  local_48 = (int *)0x0;
  local_4c = 0;
  local_50 = 0;
  local_54 = (int *)0x0;
  local_58 = 0;
  local_68[0] = 0;
  local_78[0] = 0;
  local_88[0] = 0;
  local_8c[0] = 0;
  if ((short)piVar8[0xd] == 0) {
    puVar9 = local_68;
    FUN_004885f0();
    __vbaVarMove(puVar9);
    puVar9 = local_68;
    FUN_004885f0();
    __vbaVarMove(puVar9);
    uVar3 = __vbaCastObj(piVar8,&DAT_00471048);
    __vbaObjSet(&local_40,uVar3);
    FUN_004886d0(&local_40);
    __vbaFreeObj();
    uVar3 = (**(code **)(*piVar8 + 0x300))(piVar8);
    piVar4 = (int *)__vbaObjSet(&local_50,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,1,&local_54);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e74,0x40);
    }
    piVar4 = local_54;
    if (DAT_00491010 == (int *)0x0) {
      __vbaNew2(&DAT_0046f194,&DAT_00491010);
    }
    uVar3 = (**(code **)(*DAT_00491010 + 0x38c))(DAT_00491010,4,0,&DAT_00470e54);
    uVar3 = __vbaObjSet(&local_40,uVar3);
    uVar3 = __vbaLateIdCallLd(local_68,uVar3);
    uVar3 = __vbaCastObjVar(uVar3);
    piVar6 = (int *)__vbaObjSet(&local_44,uVar3);
    iVar5 = (**(code **)(*piVar6 + 0x24))(piVar6,local_2c,&local_48);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00470e54,0x24);
    }
    piVar6 = local_48;
    iVar5 = (**(code **)(*local_48 + 0x34))(local_48,&local_4c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00470e64,0x34);
    }
    uVar3 = local_4c;
    local_4c = 0;
    iVar5 = *piVar4;
    uVar3 = __vbaObjSet(&local_58,uVar3);
    iVar5 = (**(code **)(iVar5 + 0x5c))(piVar4,uVar3);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e84,0x5c);
    }
    __vbaFreeObjList(6,&local_40,&local_44,&local_48,&local_50,&local_58,&local_54);
    __vbaFreeVar();
    uVar3 = (**(code **)(*piVar8 + 0x300))(piVar8);
    piVar4 = (int *)__vbaObjSet(&local_50,uVar3);
    iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,2,&local_54);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e74,0x40);
    }
    piVar4 = local_54;
    if (DAT_00491010 == (int *)0x0) {
      __vbaNew2(&DAT_0046f194,&DAT_00491010);
    }
    uVar3 = (**(code **)(*DAT_00491010 + 0x38c))(DAT_00491010,4,0,&DAT_00470e54);
    uVar3 = __vbaObjSet(&local_40,uVar3);
    uVar3 = __vbaLateIdCallLd(local_68,uVar3);
    uVar3 = __vbaCastObjVar(uVar3);
    piVar6 = (int *)__vbaObjSet(&local_44,uVar3);
    iVar5 = (**(code **)(*piVar6 + 0x24))(piVar6,local_3c,&local_48);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00470e54,0x24);
    }
    piVar6 = local_48;
    iVar5 = (**(code **)(*local_48 + 0x34))(local_48,&local_4c);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar6,&DAT_00470e64,0x34);
    }
    uVar3 = local_4c;
    local_4c = 0;
    iVar5 = *piVar4;
    uVar3 = __vbaObjSet(&local_58,uVar3);
    iVar5 = (**(code **)(iVar5 + 0x5c))(piVar4,uVar3);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e84,0x5c);
    }
    __vbaFreeObjList(6,&local_40,&local_44,&local_48,&local_50,&local_58,&local_54);
    __vbaFreeVar();
    sVar2 = __vbaVarTstEq(local_3c,local_2c);
    if (sVar2 == 0) {
      uVar3 = (**(code **)(*piVar8 + 0x308))(piVar8);
      piVar4 = (int *)__vbaObjSet(&local_40,uVar3);
      iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,2,&local_44);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e74,0x40);
      }
      piVar4 = local_44;
      iVar5 = (**(code **)(*local_44 + 0x54))
                        (local_44,
                         L"No tiene suerte, No tiro dobles y permanece 2 turnos en la carcel.");
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_00471330,0x54);
      }
      __vbaFreeObjList(2,&local_40,&local_44);
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        __vbaGenerateBoundsError();
      }
      *(undefined2 *)(DAT_0049106c + 0x16 + (uVar7 - 1) * 0x2c) = 0xffff;
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        __vbaGenerateBoundsError();
      }
      uVar1 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x24 + (uVar7 - 1) * 0x2c) = uVar1;
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        __vbaGenerateBoundsError();
      }
      uVar1 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x10 + (uVar7 - 1) * 0x2c) = uVar1;
      *(undefined2 *)(piVar8 + 0xd) = 0xffff;
    }
    else {
      uVar3 = (**(code **)(*piVar8 + 0x308))(piVar8);
      piVar4 = (int *)__vbaObjSet(&local_40,uVar3);
      iVar5 = (**(code **)(*piVar4 + 0x40))(piVar4,2,&local_44);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e74,0x40);
      }
      piVar4 = local_44;
      iVar5 = (**(code **)(*local_44 + 0x54))
                        (local_44,L"Tiene suerte!!! Tiro dobles y sale de la carcel.");
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar4,&DAT_00471330,0x54);
      }
      __vbaFreeObjList(2,&local_40,&local_44);
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        __vbaGenerateBoundsError();
      }
      *(undefined2 *)(DAT_0049106c + 0x16 + (uVar7 - 1) * 0x2c) = 0;
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        __vbaGenerateBoundsError();
      }
      uVar1 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x24 + (uVar7 - 1) * 0x2c) = uVar1;
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        __vbaGenerateBoundsError();
      }
      uVar1 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x10 + (uVar7 - 1) * 0x2c) = uVar1;
      uVar3 = __vbaVarAdd(local_68,local_3c,local_2c);
      local_8c[0] = __vbaUI1Var(uVar3);
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        __vbaGenerateBoundsError();
      }
      FUN_00489040(local_78,(byte *)(DAT_0049106c + 0x10 + (uVar7 - 1) * 0x2c),local_8c);
      local_1c[0] = __vbaUI1Var(local_78);
      __vbaFreeVarList(2,local_68,local_78);
      local_80 = &DAT_0049107a;
      local_88[0] = 0x4011;
      FUN_00488bd0(local_88,local_1c);
    }
    uVar3 = (**(code **)(*piVar8 + 0x304))(piVar8);
    piVar8 = (int *)__vbaObjSet(&local_40,uVar3);
    iVar5 = (**(code **)(*piVar8 + 0x8c))(piVar8,0xffffffff);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar8,&DAT_004717a8,0x8c);
    }
    __vbaFreeObj();
  }
  local_8 = 0;
  __vbaFreeVar(&LAB_0048feaa);
  __vbaFreeVar();
  return;
}


