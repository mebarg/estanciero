/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void FUN_00487b90(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  code *pcVar6;
  undefined4 local_104 [4];
  undefined4 local_f4 [4];
  undefined4 local_e4 [4];
  undefined4 local_d4 [8];
  undefined4 local_b4 [2];
  undefined4 local_ac;
  undefined4 local_a4 [2];
  undefined2 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  int *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34 [4];
  undefined4 local_24 [4];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401656;
  pvStack_14 = ExceptionList;
  local_c = &stack0xfffffee4;
  local_8 = &DAT_00401440;
  local_94 = 2;
  local_a4[0] = 2;
  local_b4[0] = 2;
  local_8c = 1;
  local_ac = 1;
  local_9c = DAT_00491080;
  local_24[0] = 0;
  local_34[0] = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = (int *)0x0;
  local_54[0] = 0;
  local_64[0] = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  local_d4[0] = 0;
  local_e4[0] = 0;
  local_f4[0] = 0;
  local_104[0] = 0;
  ExceptionList = &pvStack_14;
  iVar2 = __vbaVarForInit(local_34,local_d4,local_e4,local_b4,local_a4,&local_94);
  while (iVar2 != 0) {
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    if (*(short *)(DAT_0049106c + 0x2a + (iVar2 - 1U) * 0x2c) == 0) {
      __vbaVarCopy();
    }
    iVar2 = __vbaVarForNext(local_34,local_d4,local_e4);
  }
  local_7c = 0x80020004;
  local_6c = 0x80020004;
  local_5c = 0x80020004;
  local_84[0] = 10;
  local_74[0] = 10;
  local_64[0] = 10;
  iVar2 = __vbaI4Var(local_24);
  if (5 < iVar2 - 1U) {
    __vbaGenerateBoundsError();
  }
  local_4c = __vbaStrCat(L" ES EL GANADOR!!!!!!!!",
                         *(undefined4 *)(DAT_0049106c + 4 + (iVar2 - 1U) * 0x2c));
  local_54[0] = 8;
  Ordinal_595(local_54,0,local_64,local_74,local_84);
  __vbaFreeVarList(4,local_54,local_64,local_74,local_84);
  iVar2 = __vbaI4Var(local_24);
  if (5 < iVar2 - 1U) {
    __vbaGenerateBoundsError();
  }
  __vbaStrCat(*(undefined4 *)(DAT_0049106c + 4 + (iVar2 - 1U) * 0x2c),L"FIN DE JUEGO ");
  uVar3 = __vbaStrMove();
  __vbaStrCat(L" HA GANADO",uVar3);
  __vbaStrMove();
  FUN_00487700(&local_3c);
  __vbaFreeStrList(2,&local_38,&local_3c);
  DAT_00491078 = 0;
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar3 = (**(code **)(*DAT_00491010 + 0x304))(DAT_00491010);
  pcVar6 = __vbaObjSet_exref;
  piVar4 = (int *)__vbaObjSet(&local_40,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x94))(piVar4,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00471368,0x94);
  }
  __vbaFreeObj();
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar3 = (**(code **)(*DAT_00491010 + 0x31c))(DAT_00491010);
  piVar4 = (int *)__vbaObjSet(&local_40,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x8c))(piVar4,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00471378,0x8c);
  }
  __vbaFreeObj();
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar3 = (**(code **)(*DAT_00491010 + 0x2fc))(DAT_00491010);
  piVar4 = (int *)__vbaObjSet(&local_40,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x1e8))(piVar4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_00471af8,0x1e8);
  }
  __vbaFreeObj();
  local_8c = 0;
  local_94 = 0xb;
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar3 = (**(code **)(*DAT_00491010 + 0x374))
                    (DAT_00491010,0x80010007,local_94,local_90,local_8c,local_88);
  uVar3 = __vbaObjSet(&local_40,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  local_8c = 0;
  local_94 = 0xb;
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar3 = (**(code **)(*DAT_00491010 + 0x380))
                    (DAT_00491010,0x6803001b,local_94,local_90,local_8c,local_88);
  uVar3 = __vbaObjSet(&local_40,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  local_8c = 0;
  local_94 = 0xb;
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar3 = (**(code **)(*DAT_00491010 + 900))
                    (DAT_00491010,0x6803001b,local_94,local_90,local_8c,local_88);
  uVar3 = __vbaObjSet(&local_40,uVar3);
  __vbaLateIdSt(uVar3);
  __vbaFreeObj();
  if (DAT_00491010 == (int *)0x0) {
    __vbaNew2(&DAT_0046f194,&DAT_00491010);
  }
  uVar3 = (**(code **)(*DAT_00491010 + 0x300))(DAT_00491010);
  piVar4 = (int *)__vbaObjSet(&local_40,uVar3);
  iVar2 = (**(code **)(*piVar4 + 0x94))(piVar4,0);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar4,&DAT_004717a8,0x94);
  }
  __vbaFreeObj();
  local_94 = 2;
  local_a4[0] = 2;
  local_b4[0] = 2;
  local_8c = 1;
  local_ac = 1;
  local_9c = DAT_00491080;
  iVar2 = __vbaVarForInit(local_34,local_f4,local_104,local_b4,local_a4,&local_94);
  while (iVar2 != 0) {
    if (DAT_00491010 == (int *)0x0) {
      __vbaNew2(&DAT_0046f194,&DAT_00491010);
    }
    uVar3 = (**(code **)(*DAT_00491010 + 0x318))(DAT_00491010);
    piVar4 = (int *)(*pcVar6)(&local_40,uVar3);
    iVar2 = *piVar4;
    uVar3 = __vbaI2Var(local_34,&local_44);
    iVar2 = (**(code **)(iVar2 + 0x40))(piVar4,uVar3);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470e74,0x40);
    }
    piVar4 = local_44;
    iVar2 = (**(code **)(*local_44 + 0x9c))(local_44,0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00471330,0x9c);
    }
    __vbaFreeObjList(2,&local_40,&local_44);
    if (DAT_00491010 == (int *)0x0) {
      __vbaNew2(&DAT_0046f194,&DAT_00491010);
    }
    uVar3 = (**(code **)(*DAT_00491010 + 0x310))(DAT_00491010);
    piVar4 = (int *)__vbaObjSet(&local_40,uVar3);
    iVar2 = *piVar4;
    uVar3 = __vbaI2Var(local_34,&local_44);
    iVar2 = (**(code **)(iVar2 + 0x40))(piVar4,uVar3);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470e74,0x40);
    }
    piVar4 = local_44;
    iVar2 = (**(code **)(*local_44 + 0x8c))(local_44,0);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar4,&DAT_00470e84,0x8c);
    }
    __vbaFreeObjList(2,&local_40,&local_44);
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    __vbaStrCopy();
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    uVar1 = __vbaUI1I2();
    *(undefined1 *)(DAT_0049106c + 0x10 + (iVar2 - 1U) * 0x2c) = uVar1;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    *(undefined4 *)(DAT_0049106c + 0x20 + (iVar2 - 1U) * 0x2c) = 0;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_0049106c + 0x18 + (iVar2 - 1U) * 0x2c) = 0;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    uVar1 = __vbaUI1I2();
    *(undefined1 *)(DAT_0049106c + 0x11 + (iVar2 - 1U) * 0x2c) = uVar1;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_0049106c + 0x16 + (iVar2 - 1U) * 0x2c) = 0;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    *(undefined4 *)(DAT_0049106c + 8 + (iVar2 - 1U) * 0x2c) = 0;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    uVar1 = __vbaUI1I2();
    *(undefined1 *)(DAT_0049106c + 0x1d + (iVar2 - 1U) * 0x2c) = uVar1;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    uVar1 = __vbaUI1I2();
    *(undefined1 *)(DAT_0049106c + 0x1c + (iVar2 - 1U) * 0x2c) = uVar1;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_0049106c + 0x2a + (iVar2 - 1U) * 0x2c) = 0;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    uVar1 = __vbaUI1I2();
    *(undefined1 *)(DAT_0049106c + 0x12 + (iVar2 - 1U) * 0x2c) = uVar1;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    iVar5 = __vbaI4Var(local_34);
    if (5 < iVar5 - 1U) {
      __vbaGenerateBoundsError();
    }
    __vbaRedim(0x80,2,DAT_0049106c + 0xc + (iVar5 - 1U) * 0x2c,2,1,
               *(undefined1 *)(DAT_0049106c + 0x12 + (iVar2 - 1U) * 0x2c),0);
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    uVar1 = __vbaUI1I2();
    *(undefined1 *)(DAT_0049106c + 0x24 + (iVar2 - 1U) * 0x2c) = uVar1;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_0049106c + 0x1a + (iVar2 - 1U) * 0x2c) = 0;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_0049106c + 0x26 + (iVar2 - 1U) * 0x2c) = 0;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_0049106c + 0x28 + (iVar2 - 1U) * 0x2c) = 0;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    uVar1 = __vbaUI1I2();
    *(undefined1 *)(DAT_0049106c + 0x25 + (iVar2 - 1U) * 0x2c) = uVar1;
    iVar2 = __vbaI4Var(local_34);
    if (5 < iVar2 - 1U) {
      __vbaGenerateBoundsError();
    }
    *(undefined2 *)(DAT_0049106c + 0x14 + (iVar2 - 1U) * 0x2c) = 0;
    iVar2 = __vbaVarForNext(local_34,local_f4,local_104);
    pcVar6 = __vbaObjSet_exref;
  }
  DAT_00491080 = 0;
  __vbaFreeVarList(4,local_d4,local_e4,local_f4,local_104,&LAB_004885db);
  __vbaFreeVar();
  __vbaFreeVar();
  return;
}


