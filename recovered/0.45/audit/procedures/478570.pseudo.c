/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

int __cdecl FUN_00478570(uint param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  wchar_t *pwStack_1b8;
  undefined4 local_84 [2];
  uint *local_7c;
  undefined4 local_74 [4];
  undefined4 local_64;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_54;
  undefined4 local_50;
  wchar_t local_4c [2];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [4];
  uint local_20;
  uint local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  uint local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff38;
  local_c = &DAT_00401240;
  local_8 = param_1 & 1;
  piVar9 = (int *)(param_1 & 0xfffffffe);
  ExceptionList = &pvStack_18;
  (**(code **)(*piVar9 + 4))();
  local_1c = local_1c & 0xffffff00;
  local_20 = local_20 & 0xffffff00;
  uVar10 = DAT_0049107a - 1;
  local_24[0] = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c[0] = L'\0';
  local_4c[1] = L'\0';
  local_50 = 0;
  local_54 = (int *)0x0;
  local_58 = 0;
  local_5c = 0;
  local_60 = (int *)0x0;
  local_64 = 0;
  local_74[0] = 0;
  local_84[0] = 0;
  if (5 < uVar10) {
    __vbaGenerateBoundsError();
  }
  iVar3 = uVar10 * 5;
  if (*(short *)(DAT_0049106c + 0x14 + uVar10 * 0x2c) == 0) {
    *(undefined2 *)(piVar9 + 0x14) = 0;
    FUN_004885f0();
    uVar1 = __vbaUI1Var();
    local_1c = CONCAT31(local_1c._1_3_,uVar1);
    __vbaFreeVar();
    FUN_004885f0();
    uVar1 = __vbaUI1Var();
    local_20 = CONCAT31(local_20._1_3_,uVar1);
    __vbaFreeVar();
    __vbaCastObj();
    __vbaObjSet();
    FUN_004886d0((undefined4 *)local_4c);
    __vbaFreeObj();
    (**(code **)(*piVar9 + 0x308))();
    piVar2 = (int *)__vbaObjSet();
    iVar3 = (**(code **)(*piVar2 + 0x40))();
    if (iVar3 < 0) {
      __vbaHresultCheckObj();
    }
    piVar2 = local_60;
    (**(code **)(*piVar9 + 0x38c))();
    __vbaObjSet();
    __vbaLateIdCallLd();
    __vbaCastObjVar();
    piVar4 = (int *)__vbaObjSet();
    local_7c = &local_1c;
    local_84[0] = 0x4011;
    iVar3 = (**(code **)(*piVar4 + 0x24))();
    if (iVar3 < 0) {
      __vbaHresultCheckObj();
    }
    iVar3 = (**(code **)(*local_54 + 0x34))();
    if (iVar3 < 0) {
      __vbaHresultCheckObj();
    }
    local_58 = 0;
    iVar3 = *piVar2;
    __vbaObjSet();
    iVar3 = (**(code **)(iVar3 + 0x5c))();
    if (iVar3 < 0) {
      __vbaHresultCheckObj();
    }
    __vbaFreeObjList();
    __vbaFreeVar();
    (**(code **)(*piVar9 + 0x308))();
    piVar2 = (int *)__vbaObjSet();
    iVar3 = (**(code **)(*piVar2 + 0x40))();
    if (iVar3 < 0) {
      __vbaHresultCheckObj();
    }
    piVar2 = local_60;
    (**(code **)(*piVar9 + 0x38c))();
    __vbaObjSet();
    __vbaLateIdCallLd();
    __vbaCastObjVar();
    piVar4 = (int *)__vbaObjSet();
    local_7c = &local_20;
    local_84[0] = 0x4011;
    iVar3 = (**(code **)(*piVar4 + 0x24))();
    if (iVar3 < 0) {
      __vbaHresultCheckObj();
    }
    iVar3 = (**(code **)(*local_54 + 0x34))();
    if (iVar3 < 0) {
      __vbaHresultCheckObj();
    }
    local_58 = 0;
    iVar3 = *piVar2;
    uVar10 = __vbaObjSet();
    iVar3 = (**(code **)(iVar3 + 0x5c))();
    if (iVar3 < 0) {
      __vbaHresultCheckObj();
    }
    pwStack_1b8 = local_4c;
    __vbaFreeObjList();
    __vbaFreeVar();
    if (CARRY1((byte)local_20,(byte)local_1c)) {
LAB_00478e2a:
      __vbaErrorOverflow();
      pwStack_1b8 = ExceptionList;
      piVar9 = (int *)(uVar10 & 0xfffffffe);
      ExceptionList = &pwStack_1b8;
      (**(code **)(*piVar9 + 4))(piVar9);
      iVar3 = (**(code **)(*piVar9 + 0x70c))(piVar9,&DAT_0049107a,&DAT_0049108e);
      if (iVar3 < 0) {
        __vbaHresultCheckObj(iVar3,piVar9,&DAT_00470614,0x70c);
      }
      iVar3 = 0;
      (**(code **)(*piVar9 + 8))(piVar9);
      ExceptionList = pwStack_1b8;
      return iVar3;
    }
    uVar5 = (uint)DAT_0049107a;
    DAT_0049108c = (byte)local_20 + (byte)local_1c;
    if (5 < uVar5 - 1) {
      __vbaGenerateBoundsError();
    }
    FUN_00489040(local_74,(byte *)(DAT_0049106c + 0x10 + (uVar5 - 1) * 0x2c),(byte *)&DAT_0049108c);
    local_24[0] = __vbaUI1Var();
    __vbaFreeVar();
    if (5 < DAT_0049107a - 1) {
      __vbaGenerateBoundsError();
    }
    pwStack_1b8 = L" tiro ";
    __vbaStrCat();
    __vbaStrMove();
    __vbaStrUI1();
    __vbaStrMove();
    __vbaStrCat();
    __vbaStrMove();
    __vbaStrCat();
    __vbaStrMove();
    __vbaStrUI1(local_20);
    uVar6 = __vbaStrMove();
    __vbaStrCat(uVar6);
    uVar6 = __vbaStrMove();
    __vbaStrCat(&DAT_00471078,uVar6);
    uVar6 = __vbaStrMove();
    __vbaStrUI1(DAT_0049108c,uVar6);
    uVar6 = __vbaStrMove();
    __vbaStrCat(uVar6);
    __vbaStrMove();
    FUN_00487700(&local_48);
    __vbaFreeStrList(9,&local_28,&local_2c,&local_30,&local_34,&local_38,&local_3c,&local_40,
                     &local_44,&local_48);
    uVar5 = (uint)DAT_0049107a;
    if (5 < uVar5 - 1) {
      __vbaGenerateBoundsError();
    }
    if (*(short *)(DAT_0049106c + 0x16 + (uVar5 - 1) * 0x2c) != 0) {
      uVar5 = (uint)DAT_0049107a;
      if (5 < uVar5 - 1) {
        __vbaGenerateBoundsError();
      }
      *(undefined2 *)(DAT_0049106c + 0x16 + (uVar5 - 1) * 0x2c) = 0;
      uVar5 = (uint)DAT_0049107a;
      if (5 < uVar5 - 1) {
        __vbaGenerateBoundsError();
      }
      uVar1 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x24 + (uVar5 - 1) * 0x2c) = uVar1;
    }
    uVar5 = (uint)DAT_0049107a;
    if (5 < uVar5 - 1) {
      __vbaGenerateBoundsError();
    }
    *(undefined1 *)(DAT_0049106c + 0x10 + (uVar5 - 1) * 0x2c) = local_24[0];
    if ((byte)local_1c == (byte)local_20) {
      uVar5 = (uint)DAT_0049107a;
      if (5 < uVar5 - 1) {
        __vbaGenerateBoundsError();
      }
      if (*(char *)(DAT_0049106c + 0x11 + (uVar5 - 1) * 0x2c) == '\x02') {
        local_24[0] = __vbaUI1I2();
        uVar10 = (uint)DAT_0049107a;
        if (5 < uVar10 - 1) {
          __vbaGenerateBoundsError();
        }
        uVar1 = __vbaUI1I2();
        *(undefined1 *)(DAT_0049106c + 0x11 + (uVar10 - 1) * 0x2c) = uVar1;
        pwVar7 = (wchar_t *)(**(code **)(*piVar9 + 0x704))();
        if ((int)pwVar7 < 0) {
          pwStack_1b8 = pwVar7;
          __vbaHresultCheckObj();
        }
        if (5 < DAT_0049107a - 1) {
          __vbaGenerateBoundsError();
        }
        __vbaStrCat();
        __vbaStrMove();
        pwStack_1b8 = (wchar_t *)0x478bbf;
        FUN_00487700(&local_28);
        pwStack_1b8 = (wchar_t *)0x478bc8;
        __vbaFreeStr();
      }
      else {
        uVar5 = (uint)DAT_0049107a;
        if (5 < uVar5 - 1) {
          __vbaGenerateBoundsError();
        }
        uVar8 = (uint)DAT_0049107a;
        if (5 < uVar8 - 1) {
          __vbaGenerateBoundsError();
        }
        if (SCARRY2((ushort)*(byte *)(DAT_0049106c + 0x11 + (uVar5 - 1) * 0x2c),1))
        goto LAB_00478e2a;
        uVar1 = __vbaUI1I2();
        *(undefined1 *)(DAT_0049106c + 0x11 + (uVar8 - 1) * 0x2c) = uVar1;
        *(undefined2 *)(piVar9 + 0x14) = 0xffff;
      }
      uVar10 = (uint)DAT_0049107a;
      if (5 < uVar10 - 1) {
        pwStack_1b8 = (wchar_t *)0x478c4e;
        __vbaGenerateBoundsError();
      }
      if (5 < DAT_0049107a - 1) {
        pwStack_1b8 = (wchar_t *)0x478c62;
        __vbaGenerateBoundsError();
      }
      pwStack_1b8 = *(wchar_t **)(DAT_0049106c + 4 + (uVar10 - 1) * 0x2c);
      __vbaStrCat();
      __vbaStrMove();
      __vbaStrUI1();
      __vbaStrMove();
      __vbaStrCat();
      __vbaStrMove();
      __vbaStrCat();
      __vbaStrMove();
      FUN_00487700(&local_34);
      __vbaFreeStrList(4,&local_28,&local_2c,&local_30,&local_34);
    }
    else {
      uVar10 = (uint)DAT_0049107a;
      if (5 < uVar10 - 1) {
        __vbaGenerateBoundsError();
      }
      uVar1 = __vbaUI1I2();
      *(undefined1 *)(DAT_0049106c + 0x11 + (uVar10 - 1) * 0x2c) = uVar1;
    }
    uVar10 = (uint)DAT_0049107a;
    if (5 < uVar10 - 1) {
      __vbaGenerateBoundsError();
    }
    local_7c = (uint *)&DAT_0049107a;
    local_84[0] = 0x4011;
    FUN_00488bd0(local_84,(undefined1 *)(DAT_0049106c + 0x10 + (uVar10 - 1) * 0x2c));
    iVar3 = (**(code **)(*piVar9 + 0x6fc))(piVar9,&DAT_0049107a,local_24);
    if (iVar3 < 0) {
      __vbaHresultCheckObj(iVar3,piVar9,&DAT_00470614,0x6fc);
    }
    iVar3 = (**(code **)(*piVar9 + 0x718))(piVar9);
    if (iVar3 < 0) {
      iVar3 = __vbaHresultCheckObj();
    }
  }
  return iVar3;
}


