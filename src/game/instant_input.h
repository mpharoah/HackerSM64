#ifndef USE_INSTANT_INPUT

#include "emutest.h"

// TODO: This seems to work fine on Ares and Simple64, but needs more testing
#define USE_INSTANT_INPUT (!(gEmulator & (EMU_CONSOLE | EMU_WIIVC | EMU_ARES | EMU_SIMPLE64)))

extern void __osViSwapContext(void);

#endif
