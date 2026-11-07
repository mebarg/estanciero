/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0047b660(int *param_1,byte *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  ushort uVar5;
  float local_28 [2];
  int *local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffffac;
  local_c = &DAT_004012c0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0;
  local_20 = (int *)0x0;
  local_28[1] = 0.0;
  local_28[0] = 0.0;
  uVar1 = (**(code **)(*param_1 + 0x31c))(param_1);
  piVar2 = (int *)__vbaObjSet(local_28 + 1,uVar1);
  uVar1 = (**(code **)(*param_1 + 0x318))(param_1);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar1);
  iVar4 = (**(code **)(*piVar3 + 0x40))
                    (piVar3,CONCAT22((short)((uint)&local_20 >> 0x10),(ushort)*param_2),&local_20);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00470e74,0x40);
  }
  piVar3 = local_20;
  iVar4 = (**(code **)(*local_20 + 0x78))(local_20,local_28);
  uVar5 = 0;
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00471330,0x78);
  }
  if ((uVar5 & 0xd) != 0) {
    __vbaFPException();
    return;
  }
  iVar4 = (**(code **)(*piVar2 + 0x74))(piVar2,local_28[0] - 4.0);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar2,&DAT_00471378,0x74);
  }
  __vbaFreeObjList(3,&local_1c,&local_20,local_28 + 1);
  return;
}


