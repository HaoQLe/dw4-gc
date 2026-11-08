// igGamecubeVisualContext: a state field's index by name (0x800DA130..0x800DA348): custom fields first
// (indices from 47), then the built-in names.
#include "igGamecubeVisualContextNames.h"

// A built-in field name and its index.
struct GcFieldName {
    const char *name;
    int field;
};

extern "C" {
extern char lbl_8055EB78[];             // "" (a field without a name)
extern GcFieldName lbl_8048FC88[47];    // the built-in fields
int strcmp(const char *a, const char *b);

int igGamecubeVisualContext_virtual43C(GcVisualContext *self, const char *name)
{
    Gap::Core::igStringRef key = fn_800D965C(name);
    if (reinterpret_cast<Meta::igDataList *>(self->_customFields)->_count > 0) {
        for (int i = 0; i < reinterpret_cast<Meta::igDataList *>(self->_customFields)->_count; i++) {
            GcRef<GcNamedField> field(static_cast<GcNamedField **>(reinterpret_cast<Meta::igDataList *>(self->_customFields)->_data)[i]);
            if (field.object) {
                const char *fieldName = field.object->name ? field.object->name : lbl_8055EB78;
                if (fieldName == key.getString()) return i + 47;
            }
        }
    }
    for (int i = 0; i < 47; i++) {
        if (strcmp(lbl_8048FC88[i].name, key.getString()) == 0) return lbl_8048FC88[i].field;
    }
    return -1;
}
}
