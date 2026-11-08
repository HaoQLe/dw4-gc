// igGamecubeVisualContext: setting a 0x144 record's image for one level (0x800FF20C..0x800FF508).
#include "igGamecubeVisualContextImage.h"

// A 0x14-byte entry of lbl_804906A4.
struct GcFormatEntry {
    int unknown00;
    int unknown04;
    unsigned char unknown08[0xC];
};

extern "C" {
extern GcFormatEntry lbl_804906A4[];
int fn_800FC2E4(int);
Meta::igObject *fn_80068430(GcVisualContext *self);
bool fn_800DB8AC(GcImage *image, int);
}

// Stores a counted reference in a slot, releasing the one it replaces.
static inline void assign(Meta::igObject *&slot, Meta::igObject *object)
{
    if (object) addRef(object);
    if (slot) release(slot);
    slot = object;
}

extern "C" {
int igGamecubeVisualContext_virtual214(GcVisualContext *self, int index, GcImage *source, unsigned int level)
{
    Meta::igObject *pool;
    GcRecord144 *record = &self->unknown144->data[index];
    GcRef<GcImage> image(source);
    int entry = fn_800FC2E4(source->unknown2C);
    int kind = lbl_804906A4[entry].unknown04;
    if (source->pfmt != 0x67) {
        pool = fn_80068430(self);
        if (image.object) release(image.object);
        image.object = igImage_create(pool);
        virtuals(image.object)->slot5C(source, 1);
        virtuals(image.object)->slot88();
    }
    if (!fn_800DB8AC(image.object, kind)) return 0;
    if (level == 0) {
        assign(record->unknown30, image.object);
        record->flags |= 0x400;
    } else {
        record->flags |= 1 << level;
    }
    if (record->width < 0) record->width = image.object->px;
    if (record->height < 0) record->height = image.object->py;
    if (record->unknown28 < 0) record->unknown28 = image.object->pz;
    if (level == 0) {
        if (record->width != source->px || record->height != source->py) {
            virtuals(image.object)->slot64(record->width, record->height, image.object);
            assign(record->unknown30, image.object);
        }
    }
    if (level != 0) assign(record->unknown38[level - 1], image.object);
    return 1;
}
}
