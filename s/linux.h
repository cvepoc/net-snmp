#include "generic.h"

#undef bsdlike

/* red hat >= 5.0 doesn't have this */
#ifndef MNTTYPE_PROC
#define MNTTYPE_PROC "proc"
#endif
