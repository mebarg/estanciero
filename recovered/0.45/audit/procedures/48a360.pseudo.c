/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

undefined4 __cdecl FUN_0048a360(uint param_1)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  ushort uVar7;
  int *piVar8;
  undefined4 local_68 [2];
  undefined4 local_60;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_48 [2];
  undefined4 local_40;
  undefined4 local_38 [4];
  int *local_28;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff24;
  local_c = &DAT_00401500;
  local_8 = param_1 & 1;
  piVar8 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar8 + 4))(piVar8);
  local_20 = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_38[0] = 0;
  local_48[0] = 0;
  local_58[0] = 0;
  local_68[0] = 0;
  bVar2 = __vbaUI1I2();
  uVar3 = __vbaUI1I2();
  local_1c = CONCAT31(local_1c._1_3_,uVar3);
  while( true ) {
    if (bVar2 < (byte)local_1c) {
      DAT_00491078 = 0xffff;
      DAT_00491080 = (undefined2)piVar8[0xd];
      if (DAT_00491714 == (int *)0x0) {
        __vbaNew2(&LAB_00470d04,&DAT_00491714);
      }
      piVar5 = DAT_00491714;
      iVar6 = *DAT_00491714;
      uVar4 = __vbaObjSetAddref(&local_24,piVar8);
      iVar6 = (**(code **)(iVar6 + 0x10))(piVar5,uVar4);
      if (iVar6 < 0) {
        __vbaHresultCheckObj(iVar6,piVar5,&DAT_00470cf4,0x10);
      }
      uVar4 = __vbaFreeObj();
      return uVar4;
    }
    uVar4 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar5 = (int *)__vbaObjSet(&local_24,uVar4);
    uVar7 = (ushort)(byte)local_1c;
    iVar6 = (**(code **)(*piVar5 + 0x40))(piVar5,uVar7,&local_28);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00470e74,0x40);
    }
    piVar5 = local_28;
    iVar6 = (**(code **)(*local_28 + 0xa0))(local_28,&local_20);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00472250,0xa0);
    }
    iVar6 = __vbaStrCmp(&DAT_00471b58,local_20);
    __vbaFreeStr();
    __vbaFreeObjList(2,&local_24,&local_28);
    if (iVar6 == 0) break;
    uVar4 = (**(code **)(*piVar8 + 0x2fc))(piVar8);
    piVar5 = (int *)__vbaObjSet(&local_24,uVar4);
    iVar6 = (**(code **)(*piVar5 + 0x40))(piVar5,uVar7,&local_28);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00470e74,0x40);
    }
    piVar5 = local_28;
    iVar6 = (**(code **)(*local_28 + 0xa0))(local_28,&local_20);
    if (iVar6 < 0) {
      __vbaHresultCheckObj(iVar6,piVar5,&DAT_00472250,0xa0);
    }
    uVar1 = (local_1c & 0xff) - 1;
    if (5 < uVar1) {
      __vbaGenerateBoundsError();
    }
    __vbaStrCopy();
    __vbaFreeStr();
    __vbaFreeObjList(2,&local_24,&local_28);
    if (5 < uVar1) {
      __vbaGenerateBoundsError();
    }
    *(ushort *)(DAT_0049106c + uVar1 * 0x2c) = uVar7;
    if (0xfe < (byte)local_1c) {
      __vbaErrorOverflow();
      return 0;
    }
    local_1c = CONCAT31(local_1c._1_3_,(byte)local_1c + 1);
  }
  local_60 = 0x80020004;
  local_50 = 0x80020004;
  local_40 = 0x80020004;
  local_68[0] = 10;
  local_58[0] = 10;
  local_48[0] = 10;
  __vbaVarDup();
  Ordinal_595(local_38,0,local_48,local_58,local_68);
  uVar4 = __vbaFreeVarList(4,local_38,local_48,local_58,local_68);
  return uVar4;
}


