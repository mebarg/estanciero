/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_004760c0(uint param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  code *pcVar8;
  int *piVar9;
  uint unaff_EDI;
  code *pcVar10;
  code *pcStack_110;
  int *piStack_10c;
  code *pcStack_108;
  code *pcStack_104;
  undefined4 uStack_100;
  int **ppiStack_fc;
  undefined4 *puStack_f8;
  undefined4 uStack_f4;
  int *piStack_f0;
  undefined4 uStack_ec;
  undefined4 *puStack_e8;
  undefined4 uStack_e4;
  int *piStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int *piStack_d4;
  undefined *puStack_d0;
  int *piStack_cc;
  int *piStack_c8;
  int *piStack_c4;
  int *piStack_c0;
  int *piStack_bc;
  int *piStack_b8;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [4];
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff4c;
  local_c = &DAT_004011d8;
  local_8 = param_1 & 1;
  piVar9 = (int *)(param_1 & 0xfffffffe);
  piStack_bc = (int *)0x476103;
  ExceptionList = &pvStack_18;
  piStack_b8 = piVar9;
  (**(code **)(*piVar9 + 4))();
  pcVar10 = __vbaGenerateBoundsError_exref;
  uVar7 = (uint)DAT_0049107a;
  local_1c = 0;
  local_20 = 0;
  local_24 = (int *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (int *)0x0;
  local_34 = 0;
  local_44[0] = 0;
  local_54[0] = 0;
  if (5 < uVar7 - 1) {
    piStack_bc = (int *)0x476136;
    __vbaGenerateBoundsError();
  }
  pcVar8 = __vbaUI1I2_exref;
  *(undefined2 *)(DAT_0049106c + 0x14 + (uVar7 - 1) * 0x2c) = 0;
  if (SCARRY2((ushort)DAT_0049107a,1)) {
LAB_004766cf:
    piStack_bc = (int *)0x4766d5;
    __vbaErrorOverflow();
    piStack_cc = (int *)&LAB_00401656;
    puStack_d0 = ExceptionList;
    piStack_c8 = (int *)&pcStack_110;
    piStack_c4 = (int *)&DAT_004011e8;
    piStack_c0 = (int *)(unaff_EDI & 1);
    piVar6 = (int *)(unaff_EDI & 0xfffffffe);
    ExceptionList = &puStack_d0;
    pcStack_110 = pcVar10;
    piStack_10c = piVar9;
    pcStack_108 = pcVar8;
    piStack_bc = (int *)&stack0xfffffffc;
    (**(code **)(*piVar6 + 4))(piVar6);
    piStack_d4 = (int *)0x0;
    if (DAT_00491714 == (int *)0x0) {
      __vbaNew2(&LAB_00470d04,&DAT_00491714);
    }
    piVar9 = DAT_00491714;
    if (DAT_0049109c == (int *)0x0) {
      __vbaNew2(&DAT_0046d18c,&DAT_0049109c);
    }
    iVar2 = *piVar9;
    uVar4 = __vbaObjSetAddref(&piStack_d4,DAT_0049109c);
    iVar2 = (**(code **)(iVar2 + 0xc))(piVar9,uVar4);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar9,&DAT_00470cf4,0xc);
    }
    __vbaFreeObj();
    if (DAT_0049109c == (int *)0x0) {
      __vbaNew2(&DAT_0046d18c,&DAT_0049109c);
    }
    piVar9 = DAT_0049109c;
    iVar2 = (**(code **)(*DAT_0049109c + 0x2b0))
                      (DAT_0049109c,2,piStack_e0,1,iStack_d8,10,piStack_f0,0x80020004,puStack_e8);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar9,&DAT_00470e94,0x2b0);
    }
    FUN_00489260(&DAT_0049107a);
    iVar2 = (**(code **)(*piVar6 + 0x708))(piVar6,&DAT_0049107a);
    if (iVar2 < 0) {
      __vbaHresultCheckObj(iVar2,piVar6,&DAT_00470614,0x708);
    }
    return;
  }
  piStack_bc = (int *)0x476163;
  DAT_0049107a = __vbaUI1I2();
  if (DAT_00491080 < (short)(ushort)DAT_0049107a) {
    piStack_bc = (int *)0x47617d;
    DAT_0049107a = __vbaUI1I2();
  }
  uVar7 = (uint)DAT_0049107a;
  if (5 < uVar7 - 1) {
    piStack_bc = (int *)0x47618e;
    __vbaGenerateBoundsError();
  }
  if (*(short *)(DAT_0049106c + 0x2a + (uVar7 - 1) * 0x2c) != 0) {
    piStack_c0 = (int *)0x4761ab;
    piStack_bc = piVar9;
    iVar2 = (**(code **)(*piVar9 + 0x744))();
    if (iVar2 < 0) {
      piStack_bc = (int *)0x744;
      piStack_c0 = (int *)&DAT_00470614;
      piStack_cc = (int *)0x4761c1;
      piStack_c8 = (int *)iVar2;
      piStack_c4 = piVar9;
      __vbaHresultCheckObj();
    }
  }
  uVar7 = (uint)DAT_0049107a;
  if (5 < uVar7 - 1) {
    piStack_bc = (int *)0x4761d1;
    __vbaGenerateBoundsError();
  }
  if (*(short *)(DAT_0049106c + 0x16 + (uVar7 - 1) * 0x2c) != 0) {
    uVar7 = (uint)DAT_0049107a;
    if (5 < uVar7 - 1) {
      piStack_bc = (int *)0x4761f9;
      __vbaGenerateBoundsError();
    }
    if (*(byte *)(DAT_0049106c + 0x24 + (uVar7 - 1) * 0x2c) < 2) {
      pcVar8 = (code *)(DAT_0049107a - 1);
      if ((code *)0x5 < pcVar8) {
        piStack_bc = (int *)0x47621c;
        __vbaGenerateBoundsError();
      }
      pcVar10 = (code *)(DAT_0049107a - 1);
      if ((code *)0x5 < pcVar10) {
        piStack_bc = (int *)0x476231;
        __vbaGenerateBoundsError();
      }
      if (SCARRY2((ushort)*(byte *)(DAT_0049106c + 0x24 + (int)pcVar8 * 0x2c),1)) goto LAB_004766cf;
      piStack_bc = (int *)0x476252;
      uVar1 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x24 + (int)pcVar10 * 0x2c) = uVar1;
      piStack_c0 = (int *)0x47626b;
      piStack_bc = piVar9;
      iVar2 = (**(code **)(*piVar9 + 0x744))();
      pcVar10 = __vbaGenerateBoundsError_exref;
      if (iVar2 < 0) {
        piStack_bc = (int *)0x744;
        piStack_c0 = (int *)&DAT_00470614;
        piStack_cc = (int *)0x476281;
        piStack_c8 = (int *)iVar2;
        piStack_c4 = piVar9;
        __vbaHresultCheckObj();
        pcVar10 = __vbaGenerateBoundsError_exref;
      }
    }
  }
  uVar7 = (uint)DAT_0049107a;
  if (5 < uVar7 - 1) {
    piStack_bc = (int *)0x476297;
    (*pcVar10)();
  }
  if (*(char *)(DAT_0049106c + 0x25 + (uVar7 - 1) * 0x2c) != '\0') {
    uVar7 = (uint)DAT_0049107a;
    if (5 < uVar7 - 1) {
      piStack_bc = (int *)0x4762bf;
      (*pcVar10)();
    }
    if (*(char *)(DAT_0049106c + 0x25 + (uVar7 - 1) * 0x2c) == '\x03') {
      uVar7 = (uint)DAT_0049107a;
      if (5 < uVar7 - 1) {
        piStack_bc = (int *)0x4762e2;
        (*pcVar10)();
      }
      piStack_bc = (int *)0x4762ea;
      uVar1 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x25 + (uVar7 - 1) * 0x2c) = uVar1;
    }
    else {
      pcVar8 = (code *)(DAT_0049107a - 1);
      if ((code *)0x5 < pcVar8) {
        piStack_bc = (int *)0x476310;
        __vbaGenerateBoundsError();
      }
      pcVar10 = (code *)(DAT_0049107a - 1);
      if ((code *)0x5 < pcVar10) {
        piStack_bc = (int *)0x476326;
        __vbaGenerateBoundsError();
      }
      if (SCARRY2((ushort)*(byte *)(DAT_0049106c + 0x25 + (int)pcVar8 * 0x2c),1)) goto LAB_004766cf;
      piStack_bc = (int *)0x476348;
      uVar1 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x25 + (int)pcVar10 * 0x2c) = uVar1;
      piStack_c0 = (int *)0x476361;
      piStack_bc = piVar9;
      iVar2 = (**(code **)(*piVar9 + 0x744))();
      if (iVar2 < 0) {
        piStack_bc = (int *)0x744;
        piStack_c0 = (int *)&DAT_00470614;
        piStack_cc = (int *)0x476377;
        piStack_c8 = (int *)iVar2;
        piStack_c4 = piVar9;
        __vbaHresultCheckObj();
      }
    }
  }
  piStack_bc = (int *)&DAT_0049107a;
  piStack_c4 = (int *)0x476385;
  piStack_c0 = piVar9;
  puVar3 = (undefined *)(**(code **)(*piVar9 + 0x708))();
  if ((int)puVar3 < 0) {
    piStack_c4 = (int *)0x708;
    piStack_c8 = (int *)&DAT_00470614;
    piStack_d4 = (int *)0x47639b;
    puStack_d0 = puVar3;
    piStack_cc = piVar9;
    __vbaHresultCheckObj();
  }
  piStack_c4 = (int *)&DAT_0049107a;
  piStack_cc = (int *)0x4763a9;
  piStack_c8 = piVar9;
  iStack_d8 = (**(code **)(*piVar9 + 0x700))();
  if (iStack_d8 < 0) {
    piStack_cc = (int *)0x700;
    puStack_d0 = &DAT_00470614;
    uStack_dc = 0x4763bf;
    piStack_d4 = piVar9;
    __vbaHresultCheckObj();
  }
  uStack_dc = 0x80010007;
  iStack_d8 = 0xb;
  puStack_d0 = (undefined *)0x0;
  uStack_e4 = 0x4763ea;
  piStack_e0 = piVar9;
  uStack_e4 = (**(code **)(*piVar9 + 0x374))();
  puStack_e8 = &local_1c;
  uStack_ec = 0x4763f7;
  uStack_ec = __vbaObjSet();
  piStack_f0 = (int *)0x4763fe;
  __vbaLateIdSt();
  piStack_f0 = (int *)0x476407;
  __vbaFreeObj();
  uStack_f4 = 0x476410;
  piStack_f0 = piVar9;
  uStack_f4 = (**(code **)(*piVar9 + 0x308))();
  puStack_f8 = &local_2c;
  ppiStack_fc = (int **)0x476417;
  pcVar10 = (code *)__vbaObjSet();
  ppiStack_fc = &local_30;
  uStack_100 = 1;
  pcStack_108 = (code *)0x476425;
  pcStack_104 = pcVar10;
  iVar2 = (**(code **)(*(int *)pcVar10 + 0x40))();
  if (iVar2 < 0) {
    pcStack_108 = (code *)0x40;
    piStack_10c = (int *)&DAT_00470e74;
    pcStack_110 = pcVar10;
    __vbaHresultCheckObj(iVar2);
  }
  piVar6 = local_30;
  pcStack_108 = (code *)&DAT_00470e54;
  piStack_10c = (int *)0x0;
  pcStack_110 = (code *)0x4;
  uVar4 = (**(code **)(*piVar9 + 0x38c))(piVar9);
  uVar4 = __vbaObjSet(&local_1c,uVar4);
  uVar4 = __vbaLateIdCallLd(local_44,uVar4);
  uVar4 = __vbaCastObjVar(uVar4);
  piVar5 = (int *)__vbaObjSet(&local_20,uVar4);
  local_4c = 1;
  local_54[0] = 2;
  iVar2 = (**(code **)(*piVar5 + 0x24))(piVar5,local_54,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_00470e54,0x24);
  }
  piVar5 = local_24;
  iVar2 = (**(code **)(*local_24 + 0x34))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar5,&DAT_00470e64,0x34);
  }
  uVar4 = local_28;
  local_28 = 0;
  iVar2 = *piVar6;
  uVar4 = __vbaObjSet(&local_34,uVar4);
  iVar2 = (**(code **)(iVar2 + 0x5c))(piVar6,uVar4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar6,&DAT_00470e84,0x5c);
  }
  __vbaFreeObjList(6,&local_1c,&local_20,&local_24,&local_2c,&local_34,&local_30);
  __vbaFreeVarList(2,local_44,local_54);
  uVar4 = (**(code **)(*piVar9 + 0x308))(piVar9);
  piVar6 = (int *)__vbaObjSet(&local_2c,uVar4);
  iVar2 = (**(code **)(*piVar6 + 0x40))(piVar6,2,&local_30);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar6,&DAT_00470e74,0x40);
  }
  piVar6 = local_30;
  uVar4 = (**(code **)(*piVar9 + 0x38c))(piVar9,4,0,&DAT_00470e54);
  uVar4 = __vbaObjSet(&local_1c,uVar4);
  uVar4 = __vbaLateIdCallLd(local_44,uVar4);
  uVar4 = __vbaCastObjVar(uVar4);
  piVar9 = (int *)__vbaObjSet(&local_20,uVar4);
  local_4c = 1;
  local_54[0] = 2;
  iVar2 = (**(code **)(*piVar9 + 0x24))(piVar9,local_54,&local_24);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar9,&DAT_00470e54,0x24);
  }
  piVar9 = local_24;
  iVar2 = (**(code **)(*local_24 + 0x34))(local_24,&local_28);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar9,&DAT_00470e64,0x34);
  }
  uVar4 = local_28;
  local_28 = 0;
  iVar2 = *piVar6;
  uVar4 = __vbaObjSet(&local_34,uVar4);
  iVar2 = (**(code **)(iVar2 + 0x5c))(piVar6,uVar4);
  if (iVar2 < 0) {
    __vbaHresultCheckObj(iVar2,piVar6,&DAT_00470e84,0x5c);
  }
  __vbaFreeObjList(6,&local_1c,&local_20,&local_24,&local_2c,&local_34,&local_30);
  __vbaFreeVarList(2,local_44,local_54);
  return;
}


