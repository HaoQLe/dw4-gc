// igGamecubeVisualContext: getters of the 0x3F0 records (0x800EC170..0x800EC1E8).
#include "igGamecubeVisualContext.h"

extern "C" {
int igGamecubeVisualContext_virtualD8(GcVisualContext *self, int i) { return record<GcRecord3F0>(self->unknown3F0, i).unknown08; }
int igGamecubeVisualContext_virtualDC(GcVisualContext *self, int i) { return record<GcRecord3F0>(self->unknown3F0, i).unknown10; }
int igGamecubeVisualContext_virtualE0(GcVisualContext *self, int i) { return record<GcRecord3F0>(self->unknown3F0, i).unknown0C; }
int igGamecubeVisualContext_virtualE4(GcVisualContext *self, int i) { return record<GcRecord3F0>(self->unknown3F0, i).unknown14; }
float igGamecubeVisualContext_virtualE8(GcVisualContext *self, int i) { return record<GcRecord3F0>(self->unknown3F0, i).unknown18; }
}
