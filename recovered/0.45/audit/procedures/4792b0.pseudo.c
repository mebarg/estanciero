/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_004792b0(uint param_1,short *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_7c [5];
  undefined4 local_68 [4];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [4];
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
  local_10 = &stack0xffffff60;
  local_c = &DAT_00401270;
  local_8 = param_1 & 1;
  piVar5 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar5 + 4))(piVar5);
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  local_7c[0] = 0;
  uVar2 = (**(code **)(*piVar5 + 0x388))(piVar5,7,0,&DAT_004711c4);
  uVar2 = __vbaObjSet(&local_24,uVar2);
  uVar2 = __vbaLateIdCallLd(local_38,uVar2);
  uVar2 = __vbaCastObjVar(uVar2);
  piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x1c))(piVar3,local_7c);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_004711c4,0x1c);
  }
  bVar1 = 0 < local_7c[0];
  __vbaFreeObjList(2,&local_24,&local_28);
  __vbaFreeVar();
  if ((bVar1) && (*param_2 == 2)) {
    uVar2 = (**(code **)(*piVar5 + 0x388))(piVar5,0xd,0,&DAT_004711d4);
    uVar2 = __vbaObjSet(&local_24,uVar2);
    uVar2 = __vbaLateIdCallLd(local_38,uVar2);
    uVar2 = __vbaCastObjVar(uVar2);
    piVar3 = (int *)__vbaObjSet(&local_28,uVar2);
    iVar4 = (**(code **)(*piVar3 + 0x4c))(piVar3,&local_1c);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar3,&DAT_004711d4,0x4c);
    }
    local_40 = local_1c;
    local_50 = 0x80020004;
    local_58[0] = 10;
    local_1c = 0;
    local_48[0] = 8;
    Ordinal_632(local_68,local_48,2,local_58);
    uVar2 = __vbaStrVarVal(&local_20,local_68);
    Ordinal_581(uVar2);
    DAT_0049108e = __vbaFpUI1();
    __vbaFreeStr();
    __vbaFreeObjList(2,&local_24,&local_28);
    __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
    iVar4 = (**(code **)(*piVar5 + 0x724))(piVar5,&DAT_0049108e);
    if (iVar4 < 0) {
      __vbaHresultCheckObj(iVar4,piVar5,&DAT_00470614,0x724);
    }
  }
  return;
}


