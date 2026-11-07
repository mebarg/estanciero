/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

int entry(void)

{
  byte *pbVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte extraout_CL;
  byte bVar7;
  int unaff_EBX;
  int unaff_EDI;
  
  pbVar5 = (byte *)Ordinal_100("VB5!6&*");
  bVar3 = (byte)pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 ^ bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  pbVar5 = pbVar5 + 1;
  bVar3 = (byte)pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  *pbVar5 = *pbVar5 + bVar3;
  bVar7 = (byte)((uint)unaff_EBX >> 8);
  if (CARRY1(bVar3,bVar7)) {
    bVar3 = bVar3 + bVar7 & *(byte *)(unaff_EDI + -100);
    pbVar1 = (byte *)(unaff_EBX + -0x42);
    *pbVar1 = *pbVar1 >> (extraout_CL & 7) | *pbVar1 << 8 - (extraout_CL & 7);
    bVar2 = 9 < (bVar3 & 0xf) || ((uint)pbVar5 & 0x1000) != 0;
    uVar6 = CONCAT31((int3)((uint)pbVar5 >> 8),bVar3 + bVar2 * -6) & 0xffffff0f;
    return CONCAT22((short)(uVar6 >> 0x10),CONCAT11((char)((uint)pbVar5 >> 8) - bVar2,(char)uVar6))
           + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x004018ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = EVENT_SINK_QueryInterface();
  return iVar4;
}


