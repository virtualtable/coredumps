//coredumps.xyz
//version-c3c1514fd260482e
#pragma once

#define LUAU_SHUFFLE3(sep, a1, a2, a3) a2 sep a1 sep a3
#define LUAU_SHUFFLE4(sep, a1, a2, a3, a4) a2 sep a1 sep a4 sep a3
#define LUAU_SHUFFLE5(sep, a1, a2, a3, a4, a5) a2 sep a4 sep a1 sep a3 sep a5
#define LUAU_SHUFFLE6(sep, a1, a2, a3, a4, a5, a6) a6 sep a5 sep a1 sep a2 sep a3 sep a4
#define LUAU_SHUFFLE7(sep, a1, a2, a3, a4, a5, a6, a7) a7 sep a2 sep a6 sep a3 sep a5 sep a4 sep a1
#define LUAU_SHUFFLE8(sep, a1, a2, a3, a4, a5, a6, a7, a8) a6 sep a2 sep a1 sep a7 sep a3 sep a8 sep a4 sep a5
#define LUAU_SHUFFLE9(sep, a1, a2, a3, a4, a5, a6, a7, a8, a9) a2 sep a3 sep a4 sep a1 sep a9 sep a8 sep a5 sep a7 sep a6

