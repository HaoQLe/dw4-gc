// Memory pools for new objects, as the game code chooses them.
#ifndef GAME_POOL_H
#define GAME_POOL_H
#include <meta/igObject.h>

extern "C" {
void *fn_80068430(Meta::igObject *object);   // memory pool of an object (its pool index at +4)
void *fn_800607F4(void *poolSource);         // a pool from the memory manager
extern unsigned char lbl_80562298;           // nonzero: objects allocate from their owner's pool
}

// The pool for objects created by owner: owner's own pool, or the pool of source (a global whose type is
// unknown; each file passes its own) when lbl_80562298 is clear.
static inline void *poolFor(Meta::igObject *owner, char *source)
{
    void *pool = fn_80068430(owner);
    if (lbl_80562298) return pool;
    return fn_800607F4(*reinterpret_cast<void **>(source));
}

#endif
