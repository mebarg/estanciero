/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0047b7b0(int *param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  float local_4c [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  int *local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff8c;
  local_c = &DAT_004012d0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_20[0] = 0;
  local_24 = 0;
  local_28 = (int *)0x0;
  local_38 = 0;
  local_4c[1] = 0.0;
  local_4c[0] = 1000.0;
  uVar3 = FUN_004878c0(param_2,local_4c);
  if ((short)uVar3 != 0) {
    FUN_00487930(&DAT_0049107a);
    return;
  }
  bVar1 = *param_2;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  __vbaStrCat(L" esta en la comisaria",*(undefined4 *)(DAT_0049106c + 4 + (bVar1 - 1) * 0x2c));
  __vbaStrMove();
  FUN_00487700(local_20);
  __vbaFreeStr();
  bVar1 = *param_2;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  uVar2 = __vbaUI1I2();
  *(undefined1 *)(DAT_0049106c + 0x10 + (bVar1 - 1) * 0x2c) = uVar2;
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar6 = DAT_00491714;
  if (DAT_004910d8 == (int *)0x0) {
    __vbaNew2(&DAT_0046c220,&DAT_004910d8);
  }
  iVar5 = *piVar6;
  uVar4 = __vbaObjSetAddref(&local_24,DAT_004910d8);
  iVar5 = (**(code **)(iVar5 + 0xc))(piVar6,uVar4);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00470cf4,0xc);
  }
  __vbaFreeObj();
  bVar1 = *param_2;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  if (*(short *)(DAT_0049106c + 0x26 + (bVar1 - 1) * 0x2c) != -1) {
    bVar1 = *param_2;
    if (5 < bVar1 - 1) {
      __vbaGenerateBoundsError();
    }
    pcVar7 = __vbaNew2_exref;
    if (*(short *)(DAT_0049106c + 0x28 + (bVar1 - 1) * 0x2c) != -1) {
      if (DAT_004910d8 == (int *)0x0) {
        __vbaNew2(&DAT_0046c220,&DAT_004910d8);
      }
      uVar4 = (**(code **)(*DAT_004910d8 + 0x308))(DAT_004910d8);
      piVar6 = (int *)__vbaObjSet(&local_24,uVar4);
      iVar5 = (**(code **)(*piVar6 + 0x40))(piVar6,1,&local_28);
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar6,&DAT_00470e74,0x40);
      }
      piVar6 = local_28;
      iVar5 = (**(code **)(*local_28 + 0x54))
                        (local_28,
                         L"Usted cayo en la comisaria. Debe pagar $ 1000 de multa y tirar los dados, si saca dobles sale, si no pasara 2 turnos arrestado."
                        );
      if (iVar5 < 0) {
        __vbaHresultCheckObj(iVar5,piVar6,&DAT_00471330,0x54);
      }
      __vbaFreeObjList(2,&local_24,&local_28);
      goto LAB_0047bb3c;
    }
  }
  pcVar7 = __vbaNew2_exref;
  if (DAT_004910d8 == (int *)0x0) {
    __vbaNew2(&DAT_0046c220,&DAT_004910d8);
  }
  uVar4 = (**(code **)(*DAT_004910d8 + 0x308))(DAT_004910d8);
  piVar6 = (int *)__vbaObjSet(&local_24,uVar4);
  iVar5 = (**(code **)(*piVar6 + 0x40))(piVar6,1,&local_28);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00470e74,0x40);
  }
  piVar6 = local_28;
  iVar5 = (**(code **)(*local_28 + 0x54))
                    (local_28,
                     L"Usted cayo en la comisaria. Debe pagar $1000 de multa, como tiene una tarjeta sale automaticamente."
                    );
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_00471330,0x54);
  }
  __vbaFreeObjList(2,&local_24,&local_28);
  if (DAT_004910d8 == (int *)0x0) {
    __vbaNew2(&DAT_0046c220,&DAT_004910d8);
  }
  uVar4 = (**(code **)(*DAT_004910d8 + 0x304))(DAT_004910d8);
  piVar6 = (int *)__vbaObjSet(&local_24,uVar4);
  iVar5 = (**(code **)(*piVar6 + 0x54))(piVar6,L"Usar la tarjeta y salir");
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_004717a8,0x54);
  }
  __vbaFreeObj();
  if (DAT_004910d8 == (int *)0x0) {
    __vbaNew2(&DAT_0046c220,&DAT_004910d8);
  }
  uVar4 = (**(code **)(*DAT_004910d8 + 0x304))(DAT_004910d8);
  piVar6 = (int *)__vbaObjSet(&local_24,uVar4);
  iVar5 = (**(code **)(*piVar6 + 0x8c))(piVar6,0xffffffff);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_004717a8,0x8c);
  }
  __vbaFreeObj();
LAB_0047bb3c:
  if (DAT_004910d8 == (int *)0x0) {
    (*pcVar7)(&DAT_0046c220,&DAT_004910d8);
  }
  piVar6 = DAT_004910d8;
  local_38 = 2;
  iVar5 = (**(code **)(*DAT_004910d8 + 0x2b0))
                    (DAT_004910d8,2,local_34,1,local_2c,10,local_4c[2],0x80020004,local_3c);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,piVar6,&DAT_0047161c,0x2b0);
  }
  iVar5 = (**(code **)(*param_1 + 0x708))(param_1,param_2);
  if (iVar5 < 0) {
    __vbaHresultCheckObj(iVar5,param_1,&DAT_00470614,0x708);
  }
  uVar4 = (**(code **)(*param_1 + 0x374))(param_1,0x80010007,0xb,local_34,0xffffffff,local_2c);
  uVar4 = __vbaObjSet(&local_24,uVar4);
  __vbaLateIdSt(uVar4);
  __vbaFreeObj();
  bVar1 = *param_2;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  *(undefined2 *)(DAT_0049106c + 0x14 + (bVar1 - 1) * 0x2c) = 0xffff;
  return;
}


