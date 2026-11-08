// igGamecubeVisualContext: lights: enabling and disabling (0x800F67A0..0x800F6910).
#include "igGamecubeVisualContext.h"

extern "C" {
extern Meta::igDataList *lbl_805634FC;      // the enabled lights
extern const float lbl_805668C8;            // 1.0f
extern const float lbl_805668CC;            // 0.0f
extern const float lbl_805668F8;            // 180.0f
}

// The index of an element of a list of pointers, or -1.
static inline int indexOf(Meta::igDataList *list, void *element)
{
    for (int i = 0; i < list->_count; i++) {
        if (element == static_cast<void **>(list->_data)[i]) return i;
    }
    return -1;
}

extern "C" {
// Enables or disables a light, adding it to or removing it from the enabled lights.
int igGamecubeVisualContext_virtual13C(GcVisualContext *self, int index, bool enabled)
{
    GcLight *light = lightAt(self, index);
    if (!light) return 0;
    if (light->enabled == enabled) return 1;
    if (enabled) {
        light->enabled = true;
        switch (light->type) {
        case 0:
            light->unknown48 = lbl_805668CC;
            light->unknown4C = lbl_805668F8;
            break;
        case 1:
            light->unknown48 = lbl_805668C8;
            light->unknown4C = lbl_805668F8;
            break;
        case 2:
            light->unknown48 = lbl_805668C8;
            break;
        }
        Meta::igDataList *list = lbl_805634FC;
        int count = list->_count;
        if (count < list->_capacity) list->_count = count + 1;
        else fn_80041660(list, count + 1, 4);
        static_cast<GcLight **>(list->_data)[count] = light;
        self->dirty |= GC_DIRTY_LIGHTS;
    } else {
        light->enabled = false;
        Meta::igDataList *list = lbl_805634FC;
        fn_80041C10(list, indexOf(list, light));
        self->dirty |= GC_DIRTY_LIGHTS;
    }
    return 1;
}
}
