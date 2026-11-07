/* Pseudocódigo de Ghidra: NO es el código fuente original ni se declara compilable. */

void FUN_00470c5c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (DAT_0049170c != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00470c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0049170c)();
    return;
  }
  UNRECOVERED_JUMPTABLE = (code *)DllFunctionCall(&PTR_s_kernel32_00470c44);
                    /* WARNING: Could not recover jumptable at 0x00470c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


