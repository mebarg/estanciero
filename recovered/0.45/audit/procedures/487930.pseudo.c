/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void __cdecl FUN_00487930(byte *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  undefined4 local_c8 [4];
  undefined4 local_b8 [5];
  undefined4 local_a4 [2];
  undefined4 local_9c;
  undefined4 local_94 [2];
  undefined2 local_8c;
  undefined4 local_84 [2];
  undefined4 local_7c;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_64 [2];
  undefined4 local_5c;
  undefined4 local_54 [2];
  undefined4 local_4c;
  undefined4 local_44 [2];
  undefined4 local_3c;
  undefined4 local_34 [4];
  undefined4 local_24 [4];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined1 *local_c;
  undefined *local_8;
  
  puStack_10 = &LAB_00401656;
  pvStack_14 = ExceptionList;
  local_c = &stack0xffffff24;
  local_8 = &DAT_00401430;
  local_74[0] = 10;
  local_64[0] = 10;
  local_54[0] = 10;
  bVar1 = *param_1;
  local_24[0] = 0;
  local_34[0] = 0;
  local_44[0] = 0;
  local_84[0] = 0;
  local_94[0] = 0;
  local_a4[0] = 0;
  local_b8[0] = 0;
  local_c8[0] = 0;
  local_6c = 0x80020004;
  local_5c = 0x80020004;
  local_4c = 0x80020004;
  ExceptionList = &pvStack_14;
  puVar2 = &stack0xffffff24;
  if (5 < bVar1 - 1) {
    ExceptionList = &pvStack_14;
    __vbaGenerateBoundsError();
    puVar2 = local_c;
  }
  local_c = puVar2;
  local_3c = __vbaStrCat(L"Usted no tiene mas propiedades ni dinero para saldar sus deudas. Usted ha perdido"
                         ,*(undefined4 *)(DAT_0049106c + 4 + (bVar1 - 1) * 0x2c));
  local_44[0] = 8;
  Ordinal_595(local_44,0,local_54,local_64,local_74);
  __vbaFreeVarList(4,local_44,local_54,local_64,local_74);
  bVar1 = *param_1;
  if (5 < bVar1 - 1) {
    __vbaGenerateBoundsError();
  }
  *(undefined2 *)(DAT_0049106c + 0x2a + (bVar1 - 1) * 0x2c) = 0xffff;
  local_7c = 0;
  local_84[0] = 2;
  __vbaVarMove();
  local_7c = 1;
  local_9c = 1;
  local_8c = DAT_00491080;
  local_84[0] = 2;
  local_94[0] = 2;
  local_a4[0] = 2;
  iVar4 = __vbaVarForInit(local_34,local_b8,local_c8,local_a4,local_94,local_84);
  while (iVar4 != 0) {
    iVar4 = __vbaI4Var(local_34);
    if (5 < iVar4 - 1U) {
      __vbaGenerateBoundsError();
    }
    if (*(short *)(DAT_0049106c + 0x2a + (iVar4 - 1U) * 0x2c) == 0) {
      local_7c = 1;
      local_84[0] = 2;
      __vbaVarAdd(local_44,local_84,local_24);
      __vbaVarMove();
    }
    iVar4 = __vbaVarForNext(local_34,local_b8,local_c8);
  }
  local_7c = 1;
  local_84[0] = 0x8002;
  sVar3 = __vbaVarTstEq(local_84,local_24);
  if (sVar3 != 0) {
    FUN_00487b90();
  }
  __vbaFreeVarList(2,local_b8,local_c8,&LAB_00487b7d);
  __vbaFreeVar();
  __vbaFreeVar();
  return;
}


