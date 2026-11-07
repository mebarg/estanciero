/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00480e00(int *param_1,byte *param_2)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  code *pcVar10;
  undefined4 local_b0 [4];
  undefined4 local_a0 [5];
  int *local_8c;
  int *local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff28;
  local_c = &DAT_004013c0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_28[0] = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_40 = 0;
  local_50 = 0;
  local_60 = 0;
  local_70 = 0;
  local_80 = 0;
  local_a0[0] = 0;
  local_b0[0] = 0;
  uVar3 = (**(code **)(*param_1 + 0x368))(param_1);
  pcVar10 = __vbaObjSet_exref;
  local_84 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
  pcVar9 = __vbaHresultCheckObj_exref;
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_84,&DAT_00471358,0x74);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x344))(param_1);
  local_84 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_84,&DAT_00471358,0x74);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x348))(param_1);
  local_84 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_84,&DAT_00471358,0x74);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x364))(param_1);
  local_84 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_84,&DAT_00471358,0x74);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x34c))(param_1);
  local_84 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_84,&DAT_00471358,0x74);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x354))(param_1);
  local_84 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_84,&DAT_00471358,0x74);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x35c))(param_1);
  local_84 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_84,&DAT_00471358,0x74);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x360))(param_1);
  local_84 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_84,&DAT_00471358,0x74);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x350))(param_1);
  local_84 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_84,&DAT_00471358,0x74);
  }
  __vbaFreeObj();
  uVar3 = (**(code **)(*param_1 + 0x358))(param_1);
  local_84 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar4 = (**(code **)(*local_84 + 0x40))
                    (local_84,CONCAT22((short)((uint)&local_30 >> 0x10),(ushort)DAT_0049107a),
                     &local_30);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_84,&DAT_00470e74,0x40);
  }
  local_8c = local_30;
  iVar4 = (**(code **)(*local_30 + 0x74))(local_30,0);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_8c,&DAT_00471358,0x74);
  }
  __vbaFreeObjList(2,&local_2c,&local_30);
  uVar3 = (**(code **)(*param_1 + 0x36c))(param_1);
  local_84 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,local_84,&DAT_00471358,0x74);
  }
  __vbaFreeObj();
  local_50 = 2;
  local_60 = 2;
  local_70 = 2;
  local_48 = 1;
  local_68 = 1;
  local_58 = CONCAT22(local_58._2_2_,DAT_00491080);
  iVar4 = __vbaVarForInit(local_28,local_a0,local_b0,&local_70,&local_60,&local_50);
  while (iVar4 != 0) {
    local_48 = CONCAT31(local_48._1_3_,DAT_0049107a);
    local_50 = 0x8011;
    sVar2 = __vbaVarTstEq(&local_50,local_28);
    if (sVar2 == 0) {
      uVar3 = (**(code **)(*param_1 + 0x358))(param_1);
      piVar5 = (int *)(*pcVar10)(&local_2c,uVar3);
      iVar4 = *piVar5;
      uVar3 = __vbaI2Var(local_28,&local_30);
      iVar4 = (**(code **)(iVar4 + 0x40))(piVar5,uVar3);
      pcVar9 = __vbaHresultCheckObj_exref;
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar5,&DAT_00470e74,0x40);
      }
      piVar5 = local_30;
      iVar4 = (**(code **)(*local_30 + 0x74))(local_30,0xffffffff);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar5,&DAT_00471358,0x74);
      }
      __vbaFreeObjList(2,&local_2c,&local_30);
      pcVar10 = __vbaObjSet_exref;
    }
    else {
      uVar3 = (**(code **)(*param_1 + 0x358))(param_1);
      local_84 = (int *)(*pcVar10)(&local_2c,uVar3);
      iVar4 = *local_84;
      uVar3 = __vbaI2Var(local_28,&local_30);
      piVar5 = local_84;
      iVar4 = (**(code **)(iVar4 + 0x40))(local_84,uVar3);
      pcVar9 = __vbaHresultCheckObj_exref;
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,piVar5,&DAT_00470e74,0x40);
      }
      local_8c = local_30;
      iVar4 = (**(code **)(*local_30 + 0x74))(local_30,0);
      if (iVar4 < 0) {
        __vbaHresultCheckObj(iVar4,local_8c,&DAT_00471358,0x74);
      }
      __vbaFreeObjList(2,&local_2c,&local_30);
    }
    iVar4 = __vbaVarForNext(local_28,local_a0,local_b0);
  }
  bVar1 = *param_2;
  if (0x29 < bVar1) {
    uVar3 = (**(code **)(*param_1 + 0x354))(param_1);
    local_84 = (int *)(*pcVar10)(&local_2c,uVar3);
    iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0xffffffff);
    if (iVar4 < 0) {
      (*pcVar9)(iVar4,local_84,&DAT_00471358,0x74);
    }
    __vbaFreeObj();
    local_84 = (int *)(DAT_0049107a - 1);
    if ((int *)0x5 < local_84) {
      __vbaGenerateBoundsError();
    }
    if (*(short *)(DAT_0049106c + 0x16 + (int)local_84 * 0x2c) == -1) {
      uVar3 = (**(code **)(*param_1 + 0x36c))(param_1);
      local_84 = (int *)(*pcVar10)(&local_2c,uVar3);
      iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0xffffffff);
      if (iVar4 < 0) {
        (*pcVar9)(iVar4,local_84,&DAT_00471358,0x74);
      }
      __vbaFreeObj();
    }
    goto LAB_004818ac;
  }
  if (bVar1 == 4 || bVar1 == 0x29) {
    uVar3 = (**(code **)(*param_1 + 0x360))(param_1);
    local_84 = (int *)(*pcVar10)(&local_2c,uVar3);
    iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0xffffffff);
    if (iVar4 < 0) {
      (*pcVar9)(iVar4,local_84,&DAT_00471358,0x74);
    }
    __vbaFreeObj();
  }
  local_84 = (int *)(uint)*param_2;
  if ((int *)0x29 < local_84) {
    __vbaGenerateBoundsError();
  }
  uVar8 = (uint)DAT_0049107a;
  if (5 < uVar8 - 1) {
    __vbaGenerateBoundsError();
  }
  bVar1 = *param_2;
  if (*(byte *)(DAT_0049106c + 0x10 + (uVar8 - 1) * 0x2c) == bVar1 &&
      *(char *)(DAT_00491034 + 0x65 + (int)local_84 * 0x74) == '\0') {
    local_84 = (int *)(uint)bVar1;
    if ((int *)0x29 < local_84) {
      __vbaGenerateBoundsError();
    }
    bVar1 = *param_2;
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    local_8c = (int *)(uint)*param_2;
    if ((int *)0x29 < local_8c) {
      __vbaGenerateBoundsError();
    }
    iVar4 = __vbaStrCmp(&DAT_004713b8,*(undefined4 *)(DAT_00491034 + 4 + (uint)bVar1 * 0x74));
    iVar6 = __vbaStrCmp(&DAT_004713a8,*(undefined4 *)(DAT_00491034 + 4 + (int)local_84 * 0x74));
    iVar7 = __vbaStrCmp(&DAT_004713b0,*(undefined4 *)(DAT_00491034 + 4 + (int)local_8c * 0x74));
    pcVar9 = __vbaHresultCheckObj_exref;
    if (iVar7 != 0 && (iVar4 != 0 && iVar6 != 0)) goto LAB_004818ac;
    uVar3 = (**(code **)(*param_1 + 0x368))(param_1);
  }
  else {
    if (0x29 < bVar1) {
      __vbaGenerateBoundsError();
    }
    if (*(byte *)(DAT_00491034 + 0x65 + (uint)bVar1 * 0x74) == DAT_0049107a) {
      bVar1 = *param_2;
      if (0x29 < bVar1) {
        __vbaGenerateBoundsError();
      }
      iVar4 = __vbaStrCmp(&DAT_004713a8,*(undefined4 *)(DAT_00491034 + 4 + (uint)bVar1 * 0x74));
      pcVar9 = __vbaHresultCheckObj_exref;
      if (iVar4 == 0) {
        bVar1 = *param_2;
        if (0x29 < bVar1) {
          __vbaGenerateBoundsError();
        }
        if (*(byte *)(DAT_00491034 + 0x66 + (uint)bVar1 * 0x74) < 4) {
          uVar3 = (**(code **)(*param_1 + 0x344))(param_1);
          piVar5 = (int *)(*pcVar10)(&local_2c,uVar3);
          iVar4 = (**(code **)(*piVar5 + 0x74))(piVar5,0xffffffff);
          pcVar9 = __vbaHresultCheckObj_exref;
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piVar5,&DAT_00471358,0x74);
          }
          __vbaFreeObj();
          uVar3 = (**(code **)(*param_1 + 0x348))(param_1);
          local_84 = (int *)(*pcVar10)(&local_2c,uVar3);
          iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
        }
        else {
          bVar1 = *param_2;
          if (0x29 < bVar1) {
            __vbaGenerateBoundsError();
          }
          if (*(char *)(DAT_00491034 + 0x66 + (uint)bVar1 * 0x74) != '\x04') {
            uVar3 = (**(code **)(*param_1 + 0x348))(param_1);
            piVar5 = (int *)(*pcVar10)(&local_2c,uVar3);
            iVar4 = (**(code **)(*piVar5 + 0x74))(piVar5,0);
            pcVar9 = __vbaHresultCheckObj_exref;
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,piVar5,&DAT_00471358,0x74);
            }
            __vbaFreeObj();
            uVar3 = (**(code **)(*param_1 + 0x344))(param_1);
            local_84 = (int *)(*pcVar10)(&local_2c,uVar3);
            iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
            if (iVar4 < 0) {
              __vbaHresultCheckObj(iVar4,local_84,&DAT_00471358,0x74);
            }
            __vbaFreeObj();
            goto LAB_004816df;
          }
          uVar3 = (**(code **)(*param_1 + 0x348))(param_1);
          piVar5 = (int *)(*pcVar10)(&local_2c,uVar3);
          iVar4 = (**(code **)(*piVar5 + 0x74))(piVar5,0xffffffff);
          pcVar9 = __vbaHresultCheckObj_exref;
          if (iVar4 < 0) {
            __vbaHresultCheckObj(iVar4,piVar5,&DAT_00471358,0x74);
          }
          __vbaFreeObj();
          uVar3 = (**(code **)(*param_1 + 0x344))(param_1);
          local_84 = (int *)(*pcVar10)(&local_2c,uVar3);
          iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0);
        }
        if (iVar4 < 0) {
          (*pcVar9)(iVar4,local_84,&DAT_00471358,0x74);
        }
        __vbaFreeObj();
      }
LAB_004816df:
      local_84 = (int *)(uint)*param_2;
      if (0x29 < local_84) {
        __vbaGenerateBoundsError();
      }
      if (*(short *)(DAT_00491034 + 0x6c + (int)local_84 * 0x74) == 0) {
        uVar3 = (**(code **)(*param_1 + 0x34c))(param_1);
        local_84 = (int *)(*pcVar10)(&local_2c,uVar3);
        iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0xffffffff);
      }
      else {
        uVar3 = (**(code **)(*param_1 + 0x350))(param_1);
        local_84 = (int *)(*pcVar10)(&local_2c,uVar3);
        iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0xffffffff);
      }
      if (iVar4 < 0) {
        (*pcVar9)(iVar4,local_84,&DAT_00471358,0x74);
      }
      __vbaFreeObj();
      uVar3 = (**(code **)(*param_1 + 0x354))(param_1);
      local_84 = (int *)(*pcVar10)(&local_2c,uVar3);
      iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0xffffffff);
      if (iVar4 < 0) {
        (*pcVar9)(iVar4,local_84,&DAT_00471358,0x74);
      }
      __vbaFreeObj();
      uVar3 = (**(code **)(*param_1 + 0x35c))(param_1);
      local_84 = (int *)(*pcVar10)(&local_2c,uVar3);
      iVar4 = (**(code **)(*local_84 + 0x74))(local_84,0xffffffff);
      if (iVar4 < 0) {
        (*pcVar9)(iVar4,local_84,&DAT_00471358,0x74);
      }
      __vbaFreeObj();
      goto LAB_004818ac;
    }
    pcVar9 = __vbaHresultCheckObj_exref;
    if (DAT_00491084 == 0) goto LAB_004818ac;
    uVar3 = (**(code **)(*param_1 + 0x364))(param_1);
  }
  piVar5 = (int *)(*pcVar10)(&local_2c,uVar3);
  iVar4 = (**(code **)(*piVar5 + 0x74))(piVar5,0xffffffff);
  pcVar9 = __vbaHresultCheckObj_exref;
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00471358,0x74);
    __vbaFreeObj();
  }
  else {
    __vbaFreeObj();
  }
LAB_004818ac:
  iVar4 = *param_1;
  local_70 = 10;
  local_60 = 10;
  local_50 = 10;
  local_68 = 0x80020004;
  local_58 = 0x80020004;
  local_48 = 0x80020004;
  uVar3 = (**(code **)(iVar4 + 0x340))
                    (param_1,10,local_4c,0x80020004,local_44,10,local_5c,0x80020004,local_54,10,
                     local_6c,0x80020004,local_64,10,local_7c,0x80020004,local_74);
  uVar3 = (*pcVar10)(&local_2c,uVar3);
  iVar4 = (**(code **)(iVar4 + 700))(param_1,uVar3);
  if (iVar4 < 0) {
    (*pcVar9)(iVar4,param_1,&DAT_004705e4,700);
  }
  __vbaFreeObj();
  __vbaFreeVarList(2,local_a0,local_b0,&LAB_004819c0);
  __vbaFreeVar();
  return;
}


