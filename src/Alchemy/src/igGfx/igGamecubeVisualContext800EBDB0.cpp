// igGamecubeVisualContext: getter of the 0x3F0 records (0x800EBDB0..0x800EBDC8).
#include "igGamecubeVisualContext.h"

extern "C" {
int igGamecubeVisualContext_virtualCC(GcVisualContext *self, int i) { return record<GcRecord3F0>(self->unknown3F0, i).unknown1C; }
}
