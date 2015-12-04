#include <spr-defs.h>
#include "string_lib.h"
#include "utils.h"

// use weak attribute here, so we can overwrite this function to provide custom exception handlers, e.g. for tests
__attribute__((interrupt)) __attribute__((weak))
void default_exception_handler_c(void)
{
  for(;;);
}

// use weak attribute here, so we can overwrite this function to provide custom exception handlers, e.g. for tests
__attribute__((interrupt)) __attribute__((weak))
void illegal_insn_handler_c(void)
{
  for(;;);
}
