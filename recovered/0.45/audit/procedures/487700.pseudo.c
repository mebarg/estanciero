/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

/* WARNING: Removing unreachable block (ram,0x004878ad) */
/* WARNING: Removing unreachable block (ram,0x004878dc) */
/* WARNING: Removing unreachable block (ram,0x004878de) */
/* WARNING: Removing unreachable block (ram,0x004878f1) */
/* WARNING: Removing unreachable block (ram,0x004878fd) */
/* WARNING: Removing unreachable block (ram,0x004878ff) */
/* WARNING: Removing unreachable block (ram,0x0048791c) */
/* WARNING: Removing unreachable block (ram,0x00487926) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint __cdecl FUN_00487700(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401656;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffffb0;
  local_8 = &DAT_00401420;
  local_18 = 0;
  local_1c = 0;
  ExceptionList = &pvStack_14;
  puVar1 = &stack0xffffffb0;
  if (DAT_00491010 == (int *)0x0) {
    ExceptionList = &pvStack_14;
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
    puVar1 = local_c;
  }
  local_c = puVar1;
  uVar2 = (**(code **)(*DAT_00491010 + 0x2fc))(DAT_00491010);
  piVar3 = (int *)__vbaObjSet(&local_18,uVar2);
  iVar4 = (**(code **)(*piVar3 + 0x1ec))(piVar3,*param_1,10,local_28,0x80020004,local_20);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00471af8,0x1ec);
  }
  __vbaFreeObj();
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar2 = (**(code **)(*DAT_00491010 + 0x2fc))(DAT_00491010);
  piVar3 = (int *)__vbaObjSet(&local_1c,uVar2);
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar2 = (**(code **)(*DAT_00491010 + 0x2fc))(DAT_00491010);
  piVar5 = (int *)__vbaObjSet(&local_18,uVar2);
  iVar4 = (**(code **)(*piVar5 + 0xd8))(piVar5);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar5,&DAT_00471af8,0xd8);
  }
  iVar4 = (**(code **)(*piVar3 + 0xe4))(piVar3,0xffff);
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,piVar3,&DAT_00471af8,0xe4);
  }
  uVar6 = __vbaFreeObjList(2,&local_18,&local_1c);
  return uVar6;
}


