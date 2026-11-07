/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_0047d050(int *param_1,byte *param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined4 local_60 [2];
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined4 local_48;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_30 [4];
  undefined4 local_20;
  float local_1c;
  void *pvStack_18;
  undefined1 *puStack_14;
  undefined1 *local_10;
  undefined *local_c;
  undefined4 local_8;
  
  puStack_14 = &LAB_00401656;
  pvStack_18 = ExceptionList;
  local_10 = &stack0xffffff44;
  local_c = &DAT_004012f0;
  local_8 = 0;
  ExceptionList = &pvStack_18;
  (**(code **)(*param_1 + 4))(param_1);
  local_1c = 0.0;
  local_20 = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  local_50[0] = 0;
  local_60[0] = 0;
  if (*param_3 == '\x04') {
    local_1c = 5000.0;
    bVar1 = *param_2;
    if (5 < bVar1 - 1) {
      __vbaGenerateBoundsError();
    }
    __vbaStrCat(L" debe pagar impuestos a los reditos",
                *(undefined4 *)(DAT_0049106c + 4 + (bVar1 - 1) * 0x2c));
    __vbaStrMove();
    FUN_00487700(&local_20);
    __vbaFreeStr();
  }
  if (*param_3 == ')') {
    local_1c = 2000.0;
    bVar1 = *param_2;
    if (5 < bVar1 - 1) {
      __vbaGenerateBoundsError();
    }
    __vbaStrCat(L" debe pagar impuestos a las ventas",
                *(undefined4 *)(DAT_0049106c + 4 + (bVar1 - 1) * 0x2c));
    __vbaStrMove();
    FUN_00487700(&local_20);
    __vbaFreeStr();
  }
  uVar3 = FUN_004878c0(param_2,&local_1c);
  if ((short)uVar3 != 0) {
    FUN_00487930(param_2);
  }
  bVar1 = *param_2;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  uVar5 = 0;
  if (*(float *)(DAT_0049106c + 8 + (bVar1 - 1) * 0x2c) < local_1c) {
    local_58 = 0x80020004;
    local_48 = 0x80020004;
    local_38 = 0x80020004;
    local_60[0] = 10;
    local_50[0] = 10;
    local_40[0] = 10;
    __vbaVarDup();
    Ordinal_595(local_30,0,local_40,local_50,local_60);
    __vbaFreeVarList(4,local_30,local_40,local_50,local_60);
    uVar3 = (uint)DAT_0049107a;
    if (5 < uVar3 - 1) {
      __vbaGenerateBoundsError();
    }
    *(float *)(DAT_0049106c + 0x20 + (uVar3 - 1) * 0x2c) = local_1c;
    iVar4 = (**(code **)(*param_1 + 0x718))(param_1);
  }
  else {
    bVar1 = *param_2;
    if (5 < bVar1 - 1) {
      __vbaGenerateBoundsError();
    }
    bVar2 = *param_2;
    if (5 < bVar2 - 1) {
      __vbaGenerateBoundsError();
    }
    *(float *)(DAT_0049106c + 8 + (bVar2 - 1) * 0x2c) =
         *(float *)(DAT_0049106c + 8 + (bVar1 - 1) * 0x2c) - local_1c;
    if ((uVar5 & 0xd) != 0) {
      __vbaFPException();
      return;
    }
    FUN_00489260(param_2);
    uVar3 = (uint)DAT_0049107a;
    if (5 < uVar3 - 1) {
      __vbaGenerateBoundsError();
    }
    *(undefined4 *)(DAT_0049106c + 0x20 + (uVar3 - 1) * 0x2c) = 0;
    iVar4 = (**(code **)(*param_1 + 0x718))(param_1);
  }
  if (iVar4 < 0) {
    __vbaHresultCheckObj(iVar4,param_1,&DAT_00470614,0x718);
  }
  return;
}


