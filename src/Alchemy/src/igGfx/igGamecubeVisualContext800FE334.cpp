// igGamecubeVisualContext: a 0x144 record's channel sizes and the format code they select
// (0x800FE334..0x800FE538).
#include "igGamecubeVisualContext.h"

static inline unsigned int firstNonZero(unsigned int a, unsigned int b, unsigned int c)
{
    if (a) return a;
    if (b) return b;
    return c;
}

extern "C" {
// Stores four channel sizes and picks format94 from which channels are present and their total size;
// returns 0 when no format fits.
int igGamecubeVisualContext_virtual1EC(GcVisualContext *self, int i, unsigned int c0, unsigned int c1, unsigned int c2, unsigned int c3)
{
    GcRecord144 *entry = &record(self->unknown144, i);
    entry->unknown9C[0] = c0;
    entry->unknown9C[1] = c1;
    entry->unknown9C[2] = c2;
    entry->unknown9C[3] = c3;
    int kind;
    unsigned int bits = c3;
    if (c0 == 0 && c1 == 0 && c2 == 0 && c3 != 0) {
        kind = 4;
    } else if (c3 == 0) {
        if (c0 == 0 || c1 == 0 || c2 == 0) {
            kind = 2;
            bits = firstNonZero(c0, c1, c2);
        } else {
            kind = 1;
            bits = c0 + c1 + c2;
        }
    } else if (c0 == 0 || c1 == 0 || c2 == 0) {
        kind = 3;
        unsigned int first = firstNonZero(c0, c1, c2);
        bits = first + c3;
    } else {
        kind = 0;
        bits = c0 + c1 + c2 + c3;
    }
    switch (kind) {
    case 0:
        if (bits <= 8) entry->format94 = 1;
        else if (bits <= 16) entry->format94 = 5;
        else entry->format94 = 6;
        break;
    case 1:
        if (bits <= 4) entry->format94 = 0;
        else if (bits <= 8) entry->format94 = 1;
        else if (bits <= 16) entry->format94 = 4;
        else entry->format94 = 6;
        break;
    case 3:
        if (bits == 8) entry->format94 = 2;
        else entry->format94 = 3;
        break;
    case 2:
        if (bits == 4) entry->format94 = 0;
        else if (bits == 8) entry->format94 = 1;
        break;
    case 4:
        entry->format94 = 1;
        break;
    default:
        return 0;
    }
    return 1;
}
}
