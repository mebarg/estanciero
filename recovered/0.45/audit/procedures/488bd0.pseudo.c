/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00488bd0(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  short sVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_8c;
  undefined4 local_84;
  undefined4 local_7c;
  undefined4 local_74;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [4];
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [4];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401656;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff30;
  local_8 = &DAT_00401478;
  local_24[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_40[0] = 0;
  local_50[0] = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffff30;
  if (DAT_00491010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar3 = (**(code **)(*DAT_00491010 + 0x314))(DAT_00491010);
  piVar4 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar5 = *piVar4;
  uVar3 = __vbaVarVargNofree(&local_30);
  uVar3 = __vbaI2Var(uVar3);
  iVar5 = (**(code **)(iVar5 + 0x40))(piVar4,uVar3);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e74,0x40);
  }
  piVar4 = local_30;
  iVar5 = (**(code **)(*local_30 + 0xb8))(local_30,&local_28);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e84,0xb8);
  }
  Ordinal_581(local_28);
  pcVar8 = __vbaVarMove_exref;
  __vbaVarMove();
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_2c,&local_30);
  while( true ) {
    local_50[0] = 0x8011;
    local_48 = CONCAT31(local_48._1_3_,*param_2);
    sVar2 = __vbaVarTstEq(local_50,local_24);
    if (sVar2 != 0) break;
    local_48 = 1;
    local_50[0] = 2;
    __vbaVarAdd(local_40,local_50,local_24);
    (*pcVar8)();
    local_48 = 0x2a;
    local_50[0] = 0x8002;
    sVar2 = __vbaVarTstEq(local_50,local_24);
    if (sVar2 != 0) {
      local_48 = 0;
      local_50[0] = 2;
      (*pcVar8)();
    }
    if (DAT_00491010 == (int *)0x0) {
      __vbaNew2(&DAT_0046f194,&DAT_00491010);
    }
    uVar3 = (**(code **)(*DAT_00491010 + 0x314))(DAT_00491010);
    piVar4 = (int *)__vbaObjSet(&local_2c,uVar3);
    iVar5 = *piVar4;
    uVar3 = __vbaVarVargNofree(&local_30);
    uVar3 = __vbaI2Var(uVar3);
    iVar5 = (**(code **)(iVar5 + 0x40))(piVar4,uVar3);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e74,0x40);
    }
    piVar4 = local_30;
    uVar6 = __vbaI4Var(local_24);
    if (0x29 < uVar6) {
      __vbaGenerateBoundsError();
    }
    uVar3 = __vbaVarVargNofree();
    iVar5 = __vbaI4Var(uVar3);
    if (5 < iVar5 - 1U) {
      __vbaGenerateBoundsError();
    }
    uVar3 = *(undefined4 *)(DAT_00491034 + 0x4c + (iVar5 - 1U) * 4 + uVar6 * 0x74);
    uVar6 = __vbaI4Var(local_24);
    if (0x29 < uVar6) {
      __vbaGenerateBoundsError();
    }
    uVar7 = __vbaVarVargNofree();
    iVar5 = __vbaI4Var(uVar7);
    if (5 < iVar5 - 1U) {
      __vbaGenerateBoundsError();
    }
    iVar5 = (**(code **)(*piVar4 + 0x130))
                      (piVar4,*(undefined4 *)(DAT_00491034 + 0x34 + (iVar5 - 1U) * 4 + uVar6 * 0x74)
                       ,4,local_7c,uVar3,local_74,10,local_8c,0x80020004,local_84,10,local_9c,
                       0x80020004,local_94);
    if (iVar5 < 0) {
      __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e84,0x130);
    }
    __vbaFreeObjList(2,&local_2c,&local_30);
    uVar3 = 0x1e;
    FUN_00470c5c();
    __vbaSetSystemError(uVar3);
    pcVar8 = __vbaVarMove_exref;
  }
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar3 = (**(code **)(*DAT_00491010 + 0x314))(DAT_00491010);
  piVar4 = (int *)__vbaObjSet(&local_2c,uVar3);
  iVar5 = *piVar4;
  uVar3 = __vbaVarVargNofree(&local_30);
  uVar3 = __vbaI2Var(uVar3);
  iVar5 = (**(code **)(iVar5 + 0x40))(piVar4,uVar3);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e74,0x40);
  }
  piVar4 = local_30;
  iVar5 = *local_30;
  __vbaStrUI1(*param_2);
  uVar3 = __vbaStrMove();
  iVar5 = (**(code **)(iVar5 + 0xbc))(piVar4,uVar3);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar4,&DAT_00470e84,0xbc);
  }
  __vbaFreeStr();
  __vbaFreeObjList(2,&local_2c,&local_30);
  __vbaFreeVar(&LAB_0048902d);
  return;
}


