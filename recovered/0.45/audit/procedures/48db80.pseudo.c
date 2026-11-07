/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0048db80(int *param_1,byte *param_2,undefined *param_3)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  code *pcVar11;
  code *pcVar12;
  uint uVar13;
  code *pcVar14;
  int *piVar15;
  code *pcStack_124;
  code *pcStack_120;
  code *pcStack_11c;
  int iStack_118;
  undefined4 uStack_10c;
  undefined4 *puStack_108;
  undefined4 *puStack_104;
  void *pvStack_100;
  undefined1 *puStack_fc;
  undefined1 *puStack_f8;
  byte *pbStack_f4;
  uint uStack_f0;
  undefined4 *puStack_ec;
  undefined4 uStack_e8;
  int *piStack_e4;
  undefined4 *puStack_e0;
  undefined4 *puStack_dc;
  undefined4 uStack_d8;
  undefined4 *puStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  int *piStack_c8;
  undefined4 local_8c [2];
  undefined2 local_84;
  undefined4 local_7c [2];
  undefined2 local_74;
  undefined4 local_6c;
  undefined4 local_68;
  byte *local_64;
  undefined4 local_60;
  undefined4 local_5c [4];
  undefined4 local_4c [4];
  byte local_3c;
  byte local_38 [4];
  byte local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28 [4];
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff3c;
  local_c = &DAT_00401590;
  local_8 = 0;
  piStack_c8 = param_1;
  uStack_cc = 0x48dbba;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))();
  local_28[0] = 0;
  local_30 = 0;
  local_34 = 0;
  local_38[0] = 0;
  local_4c[0] = 0;
  local_5c[0] = 0;
  local_7c[0] = 0;
  local_8c[0] = 0;
  local_64 = &DAT_00473370;
  local_6c = 8;
  uStack_cc = 0x48dbf4;
  __vbaVarDup();
  bVar4 = *param_2;
  if (0x29 < bVar4) {
    uStack_cc = 0x48dc08;
    __vbaGenerateBoundsError();
  }
  uStack_cc = 0;
  puStack_d4 = local_4c;
  uStack_d0 = 0xffffffff;
  uStack_d8 = *(undefined4 *)(DAT_00491034 + 0x70 + (uint)bVar4 * 0x74);
  puStack_dc = local_5c;
  puStack_e0 = (undefined4 *)0x48dc30;
  Ordinal_711();
  puStack_e0 = (undefined4 *)0x48dc3c;
  __vbaVarMove();
  puStack_e0 = (undefined4 *)0x48dc45;
  __vbaFreeVar();
  pcVar12 = __vbaRefVarAry_exref;
  puStack_e0 = local_28;
  piStack_e4 = (int *)0x48dc51;
  puVar6 = (uint *)__vbaRefVarAry();
  pcVar14 = __vbaUbound_exref;
  piStack_e4 = (int *)*puVar6;
  uStack_e8 = 1;
  puStack_ec = (undefined4 *)0x48dc5e;
  iVar7 = __vbaUbound();
  pcVar11 = __vbaUI1I4_exref;
  if (!SCARRY4(iVar7,1)) {
    puStack_ec = (undefined4 *)0x48dc71;
    local_3c = __vbaUI1I4();
    pcVar14 = __vbaGenerateBoundsError_exref;
    pcVar11 = (code *)param_3;
    if (local_3c < 2) {
      bVar4 = *param_3;
      if (5 < bVar4 - 1) {
        puStack_ec = (undefined4 *)0x48de97;
        __vbaGenerateBoundsError();
      }
      bVar4 = *(byte *)(DAT_0049106c + 0x12 + (bVar4 - 1) * 0x2c);
      puStack_ec = (undefined4 *)0x48deb8;
      bVar3 = __vbaUI1I2();
      do {
        local_2c = CONCAT31(local_2c._1_3_,bVar3);
        if (bVar4 < bVar3) goto LAB_0048de76;
        if (5 < (byte)*param_3 - 1) {
          puStack_ec = (undefined4 *)0x48ded1;
          (*pcVar14)();
        }
        bVar3 = *param_3;
        if (5 < bVar3 - 1) {
          puStack_ec = (undefined4 *)0x48dedf;
          (*pcVar14)();
        }
        iVar7 = (bVar3 - 1) * 0x2c;
        if (*(int *)(iVar7 + 0xc + DAT_0049106c) == 0) {
LAB_0048df87:
          puStack_ec = (undefined4 *)0x48df89;
          iVar9 = (*pcVar14)();
        }
        else {
          bVar3 = *param_3;
          if (5 < bVar3 - 1) {
            puStack_ec = (undefined4 *)0x48df08;
            (*pcVar14)();
          }
          iVar7 = (bVar3 - 1) * 0x2c;
          if (**(short **)(iVar7 + 0xc + DAT_0049106c) != 1) goto LAB_0048df87;
          bVar3 = *param_3;
          if (5 < bVar3 - 1) {
            puStack_ec = (undefined4 *)0x48df2f;
            (*pcVar14)();
          }
          uVar13 = (local_2c & 0xff) -
                   *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar3 - 1) * 0x2c) + 0x14);
          bVar3 = *param_3;
          if (5 < bVar3 - 1) {
            puStack_ec = (undefined4 *)0x48df5e;
            __vbaGenerateBoundsError();
          }
          iVar7 = (bVar3 - 1) * 0x2c;
          if (*(uint *)(*(int *)(iVar7 + 0xc + DAT_0049106c) + 0x10) <= uVar13) {
            puStack_ec = (undefined4 *)0x48df7c;
            __vbaGenerateBoundsError();
          }
          iVar9 = uVar13 * 2;
          pcVar14 = __vbaGenerateBoundsError_exref;
        }
        local_84 = *(undefined2 *)(*(int *)(*(int *)(iVar7 + 0xc + DAT_0049106c) + 0xc) + iVar9);
        puStack_ec = local_8c;
        local_6c = 2;
        local_64 = (byte *)0x0;
        pvStack_100 = (void *)0x1;
        local_8c[0] = 0x8002;
        puStack_fc = (undefined1 *)0x2;
        puStack_f8 = (undefined1 *)local_68;
        puStack_104 = local_28;
        pbStack_f4 = (byte *)0x0;
        uStack_f0 = local_60;
        puStack_108 = local_4c;
        uStack_10c = 0x48dfe2;
        uStack_f0 = __vbaVarIndexLoad();
        pbStack_f4 = (byte *)0x48dfec;
        pcVar12 = (code *)__vbaVarTstEq();
        pbStack_f4 = (byte *)0x48dff7;
        __vbaFreeVar();
        if ((short)pcVar12 != 0) goto LAB_0048de6f;
        bVar3 = (byte)local_2c + 1;
      } while ((byte)local_2c != -1);
    }
    else {
      puStack_ec = local_28;
      uStack_f0 = 0x48dc82;
      puVar8 = (undefined4 *)__vbaRefVarAry();
      uStack_f0 = *puVar8;
      pbStack_f4 = (byte *)0x1;
      puStack_f8 = (undefined1 *)0x48dc89;
      __vbaUbound();
      puStack_f8 = (undefined1 *)0x48dc8d;
      bVar3 = __vbaUI1I4();
      puStack_f8 = (undefined1 *)0x48dc9b;
      bVar4 = __vbaUI1I2();
      do {
        local_38[0] = bVar4;
        pcVar14 = __vbaGenerateBoundsError_exref;
        if (bVar3 < local_38[0]) {
          if (local_34 == local_3c) {
LAB_0048de6f:
            local_30 = 0xffffffff;
          }
LAB_0048de76:
          puStack_ec = (undefined4 *)&LAB_0048e02c;
          uStack_f0 = 0x48e02b;
          __vbaFreeVar();
          return;
        }
        pcVar12 = (code *)((byte)*param_3 - 1);
        if ((code *)0x5 < pcVar12) {
          puStack_ec = (undefined4 *)0x48dcc1;
          __vbaGenerateBoundsError();
        }
        bVar4 = *(byte *)(DAT_0049106c + 0x12 + (int)pcVar12 * 0x2c);
        puStack_ec = (undefined4 *)0x48dce2;
        bVar5 = __vbaUI1I2();
        while( true ) {
          local_2c = CONCAT31(local_2c._1_3_,bVar5);
          if (bVar4 < bVar5) break;
          if (5 < (byte)*param_3 - 1) {
            puStack_ec = (undefined4 *)0x48dcff;
            (*pcVar14)();
          }
          bVar5 = *param_3;
          if (5 < bVar5 - 1) {
            puStack_ec = (undefined4 *)0x48dd0d;
            (*pcVar14)();
          }
          iVar7 = (bVar5 - 1) * 0x2c;
          if (*(int *)(iVar7 + 0xc + DAT_0049106c) == 0) {
LAB_0048ddb6:
            puStack_ec = (undefined4 *)0x48ddb8;
            iVar9 = (*pcVar14)();
          }
          else {
            bVar5 = *param_3;
            if (5 < bVar5 - 1) {
              puStack_ec = (undefined4 *)0x48dd36;
              (*pcVar14)();
            }
            iVar7 = (bVar5 - 1) * 0x2c;
            if (**(short **)(iVar7 + 0xc + DAT_0049106c) != 1) goto LAB_0048ddb6;
            bVar5 = *param_3;
            if (5 < bVar5 - 1) {
              puStack_ec = (undefined4 *)0x48dd5d;
              (*pcVar14)();
            }
            bVar1 = *param_3;
            uVar13 = (local_2c & 0xff) -
                     *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar5 - 1) * 0x2c) + 0x14);
            if (5 < bVar1 - 1) {
              puStack_ec = (undefined4 *)0x48dd8d;
              __vbaGenerateBoundsError();
            }
            iVar7 = (bVar1 - 1) * 0x2c;
            if (*(uint *)(*(int *)(iVar7 + 0xc + DAT_0049106c) + 0x10) <= uVar13) {
              puStack_ec = (undefined4 *)0x48ddab;
              __vbaGenerateBoundsError();
            }
            iVar9 = uVar13 * 2;
            pcVar14 = __vbaGenerateBoundsError_exref;
          }
          local_74 = *(undefined2 *)(*(int *)(*(int *)(iVar7 + 0xc + DAT_0049106c) + 0xc) + iVar9);
          puStack_ec = local_7c;
          local_6c = 0x4011;
          pbStack_f4 = local_38;
          pvStack_100 = (void *)0x1;
          local_7c[0] = 0x8002;
          puStack_fc = (undefined1 *)0x4011;
          puStack_f8 = (undefined1 *)local_68;
          puStack_104 = local_28;
          uStack_f0 = local_60;
          puStack_108 = local_4c;
          uStack_10c = 0x48de0c;
          local_64 = pbStack_f4;
          uStack_f0 = __vbaVarIndexLoad();
          pbStack_f4 = (byte *)0x48de16;
          pcVar12 = (code *)__vbaVarTstEq();
          pbStack_f4 = (byte *)0x48de21;
          __vbaFreeVar();
          if ((short)pcVar12 != 0) {
            if (SCARRY2((ushort)local_34,1)) goto LAB_0048e055;
            puStack_ec = (undefined4 *)0x48de3b;
            local_34 = __vbaUI1I2();
          }
          bVar5 = (byte)local_2c + 1;
          if (0xfe < (byte)local_2c) goto LAB_0048e055;
        }
        bVar4 = local_38[0] + 1;
      } while (local_38[0] != 0xff);
    }
  }
LAB_0048e055:
  puStack_ec = (undefined4 *)0x48e05b;
  __vbaErrorOverflow();
  puStack_fc = &LAB_00401656;
  pvStack_100 = ExceptionList;
  puStack_f8 = (undefined1 *)&pcStack_124;
  pbStack_f4 = &DAT_004015a0;
  uStack_f0 = (uint)piStack_e4 & 1;
  piVar15 = (int *)((uint)piStack_e4 & 0xfffffffe);
  ExceptionList = &pvStack_100;
  pcStack_124 = pcVar14;
  pcStack_120 = pcVar12;
  pcStack_11c = pcVar11;
  puStack_ec = (undefined4 *)&stack0xfffffffc;
  piStack_e4 = piVar15;
  (**(code **)(*piVar15 + 4))(piVar15);
  puStack_104 = (undefined4 *)0x0;
  if (DAT_00491714 == (int *)0x0) {
    __vbaNew2(&LAB_00470d04,&DAT_00491714);
  }
  piVar2 = DAT_00491714;
  iStack_118 = *DAT_00491714;
  uVar10 = __vbaObjSetAddref(&puStack_104,piVar15);
  iVar7 = (**(code **)(iStack_118 + 0x10))(piVar2,uVar10);
  if (iVar7 < 0) {
    __vbaHresultCheckObj(iVar7,piVar2,&DAT_00470cf4,0x10);
  }
  __vbaFreeObj();
  return;
}


