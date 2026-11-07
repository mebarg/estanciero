/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_004886d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_e4 [4];
  undefined4 local_d4 [8];
  undefined4 local_b4 [2];
  undefined4 local_ac;
  undefined4 local_a4 [2];
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84 [4];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64 [4];
  undefined4 local_54;
  int *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [4];
  undefined4 local_34 [4];
  undefined4 local_24 [4];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401656;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff00;
  local_8 = &DAT_00401468;
  local_24[0] = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = (int *)0x0;
  local_54 = 0;
  local_64[0] = 0;
  local_74 = 0;
  local_84[0] = 0;
  local_d4[0] = 0;
  local_e4[0] = 0;
  local_8c = 1;
  local_94 = 2;
  local_a4[0] = 2;
  local_b4[0] = 2;
  local_ac = 1;
  local_9c = 0x19;
  ExceptionList = &pvStack_14;
  iVar1 = __vbaVarForInit(local_24,local_d4,local_e4,local_b4,local_a4,&local_94);
  while (iVar1 != 0) {
    puVar4 = local_64;
    FUN_004885f0();
    __vbaVarMove(puVar4);
    puVar4 = local_64;
    FUN_004885f0();
    __vbaVarMove(puVar4);
    if (DAT_00491010 == (int *)0x0) {
      __vbaNew2(&DAT_0046f194,&DAT_00491010);
    }
    uVar2 = (**(code **)(*DAT_00491010 + 0x38c))(DAT_00491010,4,0,&DAT_00470e54);
    uVar2 = __vbaObjSet(&local_48,uVar2);
    uVar2 = __vbaLateIdCallLd(local_64,uVar2);
    uVar2 = __vbaCastObjVar(uVar2);
    piVar3 = (int *)__vbaObjSet(&local_4c,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x24))(piVar3,local_34,&local_50);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00470e54,0x24);
    }
    piVar3 = local_50;
    iVar1 = (**(code **)(*local_50 + 0x34))(local_50,&local_54);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00470e64,0x34);
    }
    uVar2 = local_54;
    local_74 = 9;
    local_6c = local_54;
    local_94 = 2;
    local_8c = 1;
    local_54 = 0;
    uVar2 = __vbaLateMemCallLd(local_84,*param_1,L"img_dado",1,2,local_90,1,local_88,L"Picture",9,
                               local_70,uVar2,local_68);
    __vbaVarLateMemSt(uVar2);
    __vbaFreeObjList(3,&local_48,&local_4c,&local_50);
    __vbaFreeVarList(3,local_64,&local_74,local_84);
    local_94 = 2;
    local_8c = 1;
    uVar2 = __vbaLateMemCallLd(&local_74,*param_1,L"img_dado",1,2,local_90,1,local_88,L"Refresh",0);
    uVar2 = __vbaObjVar(uVar2);
    __vbaLateMemCall(uVar2);
    __vbaFreeVar();
    if (DAT_00491010 == (int *)0x0) {
      __vbaNew2(&DAT_0046f194,&DAT_00491010);
    }
    uVar2 = (**(code **)(*DAT_00491010 + 0x38c))(DAT_00491010,4,0,&DAT_00470e54);
    uVar2 = __vbaObjSet(&local_48,uVar2);
    uVar2 = __vbaLateIdCallLd(local_64,uVar2);
    uVar2 = __vbaCastObjVar(uVar2);
    piVar3 = (int *)__vbaObjSet(&local_4c,uVar2);
    iVar1 = (**(code **)(*piVar3 + 0x24))(piVar3,local_44,&local_50);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00470e54,0x24);
    }
    piVar3 = local_50;
    iVar1 = (**(code **)(*local_50 + 0x34))(local_50,&local_54);
    if (iVar1 < 0) {
      __vbaHresultCheckObj(iVar1,piVar3,&DAT_00470e64,0x34);
    }
    uVar2 = local_54;
    local_74 = 9;
    local_6c = local_54;
    local_8c = 2;
    local_94 = 2;
    local_54 = 0;
    uVar2 = __vbaLateMemCallLd(local_84,*param_1,L"img_dado",1,2,local_90,2,local_88,L"Picture",9,
                               local_70,uVar2,local_68);
    __vbaVarLateMemSt(uVar2);
    __vbaFreeObjList(3,&local_48,&local_4c,&local_50);
    __vbaFreeVarList(3,local_64,&local_74,local_84);
    local_8c = 2;
    local_94 = 2;
    uVar2 = __vbaLateMemCallLd(&local_74,*param_1,L"img_dado",1,2,local_90,2,local_88,L"Refresh",0);
    uVar2 = __vbaObjVar(uVar2);
    __vbaLateMemCall(uVar2);
    __vbaFreeVar();
    uVar2 = 10;
    FUN_00470c5c();
    __vbaSetSystemError(uVar2);
    iVar1 = __vbaVarForNext(local_24,local_d4,local_e4);
  }
  __vbaFreeVarList(2,local_d4,local_e4,&LAB_00488bb5);
  __vbaFreeVar();
  __vbaFreeVar();
  __vbaFreeVar();
  return;
}


