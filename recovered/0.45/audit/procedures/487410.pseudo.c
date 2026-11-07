/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_00487410(byte *param_1,undefined *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  code *pcVar10;
  undefined4 *unaff_ESI;
  uint uVar11;
  int iVar12;
  uint uVar13;
  code **ppcVar14;
  code **ppcVar15;
  float *pfVar16;
  uint uStack_60;
  uint uStack_5c;
  byte *pbStack_58;
  uint uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  void *pvStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined *puStack_18;
  code *pcStack_14;
  
  pcVar10 = __vbaGenerateBoundsError_exref;
  uVar11 = *param_1 - 1;
  if (5 < uVar11) {
    pcStack_14 = (code *)0x48742c;
    __vbaGenerateBoundsError();
  }
  uVar13 = *param_1 - 1;
  if (5 < uVar13) {
    pcStack_14 = (code *)0x48743a;
    __vbaGenerateBoundsError();
  }
  if (SCARRY2((ushort)*(byte *)(DAT_0049106c + 0x12 + uVar11 * 0x2c),1)) goto LAB_004876ef;
  pcStack_14 = (code *)0x48745c;
  uVar5 = __vbaUI1I2();
  *(undefined1 *)(DAT_0049106c + 0x12 + uVar13 * 0x2c) = uVar5;
  bVar1 = *param_1;
  if (5 < bVar1 - 1) {
    pcStack_14 = (code *)0x48747a;
    __vbaGenerateBoundsError();
  }
  bVar2 = *param_1;
  if (5 < bVar2 - 1) {
    pcStack_14 = (code *)0x487488;
    __vbaGenerateBoundsError();
  }
  pcStack_14 = (code *)0x0;
  puStack_18 = (undefined *)(uint)*(byte *)(DAT_0049106c + 0x12 + (bVar1 - 1) * 0x2c);
  puStack_1c = (undefined1 *)0x1;
  puStack_20 = (undefined1 *)0x2;
  pvStack_24 = (void *)(DAT_0049106c + 0xc + (bVar2 - 1) * 0x2c);
  fStack_28 = 2.8026e-45;
  uStack_2c = 0x80;
  uStack_30 = 0x4874b8;
  __vbaRedimPreserve();
  if (5 < *param_1 - 1) {
    pcStack_14 = (code *)0x4874c7;
    __vbaGenerateBoundsError();
  }
  bVar1 = *param_1;
  if (5 < bVar1 - 1) {
    pcStack_14 = (code *)0x4874d5;
    __vbaGenerateBoundsError();
  }
  iVar12 = (bVar1 - 1) * 0x2c;
  if (*(int *)(iVar12 + 0xc + DAT_0049106c) == 0) {
LAB_00487581:
    pcStack_14 = (code *)0x487583;
    iVar6 = __vbaGenerateBoundsError();
  }
  else {
    bVar1 = *param_1;
    if (5 < bVar1 - 1) {
      pcStack_14 = (code *)0x4874fe;
      __vbaGenerateBoundsError();
    }
    iVar12 = (bVar1 - 1) * 0x2c;
    if (**(short **)(iVar12 + 0xc + DAT_0049106c) != 1) goto LAB_00487581;
    bVar1 = *param_1;
    if (5 < bVar1 - 1) {
      pcStack_14 = (code *)0x487525;
      __vbaGenerateBoundsError();
    }
    bVar2 = *param_1;
    if (5 < bVar2 - 1) {
      pcStack_14 = (code *)0x487533;
      __vbaGenerateBoundsError();
    }
    bVar3 = *param_1;
    uVar11 = (uint)*(byte *)(DAT_0049106c + 0x12 + (bVar1 - 1) * 0x2c) -
             *(int *)(*(int *)(DAT_0049106c + 0xc + (bVar2 - 1) * 0x2c) + 0x14);
    if (5 < bVar3 - 1) {
      pcStack_14 = (code *)0x487563;
      __vbaGenerateBoundsError();
    }
    iVar12 = (bVar3 - 1) * 0x2c;
    if (*(uint *)(*(int *)(iVar12 + 0xc + DAT_0049106c) + 0x10) <= uVar11) {
      pcStack_14 = (code *)0x48757c;
      __vbaGenerateBoundsError();
    }
    iVar6 = uVar11 * 2;
  }
  *(ushort *)(*(int *)(*(int *)(iVar12 + 0xc + DAT_0049106c) + 0xc) + iVar6) =
       (ushort)(byte)*param_2;
  bVar1 = *param_2;
  uVar13 = CONCAT31((int3)((uint)iVar6 >> 8),bVar1);
  if (bVar1 < 0x2a) {
    if (0x29 < bVar1) {
      pcStack_14 = (code *)0x4875ba;
      __vbaGenerateBoundsError();
    }
    *(byte *)(DAT_00491034 + 0x65 + (uint)bVar1 * 0x74) = *param_1;
    bVar1 = *param_2;
    if (0x29 < bVar1) {
      pcStack_14 = (code *)0x4875e4;
      __vbaGenerateBoundsError();
    }
    pcStack_14 = *(code **)(DAT_00491034 + 4 + (uint)bVar1 * 0x74);
    puStack_18 = &DAT_004713b0;
    puStack_1c = (undefined1 *)0x487605;
    iVar12 = __vbaStrCmp();
    pcVar10 = (code *)param_2;
    if (iVar12 == 0) {
      uVar13 = *param_1 - 1;
      if (5 < uVar13) {
        pcStack_14 = (code *)0x48761b;
        __vbaGenerateBoundsError();
      }
      uVar11 = *param_1 - 1;
      if (5 < uVar11) {
        pcStack_14 = (code *)0x48762d;
        __vbaGenerateBoundsError();
      }
      if (SCARRY2((ushort)*(byte *)(DAT_0049106c + 0x1c + uVar13 * 0x2c),1)) goto LAB_004876ef;
      pcStack_14 = (code *)0x48764e;
      uVar5 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x1c + uVar11 * 0x2c) = uVar5;
    }
    bVar1 = *param_2;
    if (0x29 < bVar1) {
      pcStack_14 = (code *)0x487670;
      __vbaGenerateBoundsError();
    }
    pcStack_14 = *(code **)(DAT_00491034 + 4 + (uint)bVar1 * 0x74);
    puStack_18 = &DAT_004713b8;
    puStack_1c = (undefined1 *)0x487692;
    uVar13 = __vbaStrCmp();
    if (uVar13 == 0) {
      uVar13 = *param_1 - 1;
      if (5 < uVar13) {
        pcStack_14 = (code *)0x4876a8;
        __vbaGenerateBoundsError();
      }
      uVar11 = *param_1 - 1;
      if (5 < uVar11) {
        pcStack_14 = (code *)0x4876ba;
        __vbaGenerateBoundsError();
      }
      if (SCARRY2((ushort)*(byte *)(DAT_0049106c + 0x1d + uVar13 * 0x2c),1)) {
LAB_004876ef:
        pcStack_14 = (code *)0x4876f5;
        __vbaErrorOverflow();
        ppcVar14 = &pcStack_14;
        puStack_20 = &LAB_00401656;
        pvStack_24 = ExceptionList;
        pbStack_58 = param_1;
        puStack_1c = (undefined1 *)&uStack_60;
        puStack_18 = &DAT_00401420;
        fStack_28 = 0.0;
        uStack_2c = 0;
        uStack_40 = 0;
        ExceptionList = &pvStack_24;
        uStack_60 = uVar13;
        uStack_5c = uVar11;
        puVar4 = &uStack_60;
        pcStack_14 = pcVar10;
        if (DAT_00491010 == (int *)0x0) {
          ExceptionList = &pvStack_24;
          __vbaNew2(&DAT_0046f194,&DAT_00491010);
          puVar4 = (uint *)puStack_1c;
        }
        puStack_1c = (undefined1 *)puVar4;
        uVar7 = (**(code **)(*DAT_00491010 + 0x2fc))(DAT_00491010);
        pcVar10 = __vbaObjSet_exref;
        piVar8 = (int *)__vbaObjSet(&fStack_28,uVar7);
        iVar12 = (**(code **)(*piVar8 + 0x1ec))(piVar8,*unaff_ESI,10,uStack_38,0x80020004,uStack_30)
        ;
        if (iVar12 < 0) {
          __vbaHresultCheckObj(iVar12,piVar8,&DAT_00471af8,0x1ec);
        }
        __vbaFreeObj();
        if (DAT_00491010 == (int *)0x0) {
          __vbaNew2(&DAT_0046f194,&DAT_00491010);
        }
        uVar7 = (**(code **)(*DAT_00491010 + 0x2fc))(DAT_00491010);
        piVar8 = (int *)__vbaObjSet(&uStack_2c,uVar7);
        if (DAT_00491010 == (int *)0x0) {
          __vbaNew2(&DAT_0046f194,&DAT_00491010);
        }
        uVar7 = (**(code **)(*DAT_00491010 + 0x2fc))(DAT_00491010);
        pfVar16 = &fStack_28;
        piVar9 = (int *)__vbaObjSet(pfVar16,uVar7);
        iVar12 = (**(code **)(*piVar9 + 0xd8))(piVar9);
        if (iVar12 < 0) {
          __vbaHresultCheckObj(iVar12,piVar9,&DAT_00471af8,0xd8);
        }
        if (!SBORROW2((short)uStack_40,1)) {
          iVar12 = (**(code **)(*piVar8 + 0xe4))(piVar8,(short)uStack_40 + -1);
          if (iVar12 < 0) {
            __vbaHresultCheckObj(iVar12,piVar8,&DAT_00471af8,0xe4);
          }
          uVar11 = __vbaFreeObjList(2,&fStack_28,&uStack_2c);
          return uVar11;
        }
        __vbaErrorOverflow();
        uVar11 = (uStack_40 & 0xff) - 1;
        ppcVar15 = &pcStack_14;
        if (5 < uVar11) {
          __vbaGenerateBoundsError(pcVar10,piVar9,&pcStack_14,piVar8);
          ppcVar15 = ppcVar14;
        }
        uVar13 = DAT_0049106c;
        if (*(char *)(DAT_0049106c + 0x12 + uVar11 * 0x2c) == '\0') {
          uVar11 = (uStack_40 & 0xff) - 1;
          if (5 < uVar11) {
            __vbaGenerateBoundsError(pcVar10,piVar9,ppcVar15,piVar8);
          }
          uVar13 = uVar11 * 0xb & 0xffff0000;
          if (*(float *)(DAT_0049106c + 8 + uVar11 * 0x2c) < *pfVar16) {
            return 0xffffffff;
          }
        }
        return uVar13 & 0xffff0000;
      }
      pcStack_14 = (code *)0x4876d8;
      uVar13 = __vbaUI1I2();
      *(char *)(DAT_0049106c + 0x1d + uVar11 * 0x2c) = (char)uVar13;
    }
  }
  return uVar13;
}


