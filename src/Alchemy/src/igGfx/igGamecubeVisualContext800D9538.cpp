// igGamecubeVisualContext: the type of a state field (0x800D9538..0x800D965C).
#include "igGamecubeVisualContext.h"
#include <game/Virtual.h>

extern "C" {
extern Meta::igMetaObject *igVec4fMetaField_meta;
extern Meta::igMetaObject *igMatrix44fMetaField_meta;
}

// A custom field (0x134 list); its value object is at 0x10.
struct GcCustomFieldValue : Meta::igObject {
    unsigned char unknown08[0x8];
    Meta::igObject *value;   // 0x10
};

extern "C" {
// Fields 0..39 are vectors, 40..46 matrices; custom fields from 47 report their value's class.
Meta::igMetaObject *igGamecubeVisualContext_virtual41C(GcVisualContext *self, unsigned int field)
{
    if (field < 47) {
        switch ((int)field) {
        case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9:
        case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19:
        case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29:
        case 30: case 31: case 32: case 33: case 34: case 35: case 36: case 37: case 38: case 39:
            return igVec4fMetaField_meta;
        case 40: case 41: case 42: case 43: case 44: case 45: case 46:
            return igMatrix44fMetaField_meta;
        }
        return 0;
    }
    Meta::igDataList *fields = reinterpret_cast<Meta::igDataList *>(self->_customFields);
    if ((int)field < fields->_count + 47) {
        int index = field - 47;
        GcRef<GcCustomFieldValue> ref(static_cast<GcCustomFieldValue **>(fields->_data)[index]);
        if (!ref.object) return 0;
        return metaOf(ref.object->value);
    }
    return 0;
}
}
