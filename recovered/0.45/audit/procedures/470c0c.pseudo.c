/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void FUN_00470c0c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_00491700 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00470c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00491700)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_gdi32_00470bf4);
                    /* WARNING: Could not recover jumptable at 0x00470c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


