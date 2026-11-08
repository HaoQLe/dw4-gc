// igGamecubeVisualContext: closing the context (0x800EC5E0..0x800EC86C): freeing its state, matrix stacks
// and frame buffers. While the frame buffers are freed, an arena pool's flag 4 is set and flag 2 cleared,
// then both are restored.
#include "igGamecubeVisualContext.h"
#include <game/Pool.h>
#include <meta/igMetaObject.h>

// A memory pool (Alchemy's igMemoryPool), as this function uses it.
class GcPool18C {
public:
    virtual void slot008(); virtual void slot00C(); virtual void slot010(); virtual void slot014(); virtual void slot018(); virtual void slot01C();
    virtual void slot020(); virtual void slot024(); virtual void slot028(); virtual void slot02C(); virtual void slot030(); virtual void slot034();
    virtual void slot038(); virtual void slot03C(); virtual void slot040(); virtual void slot044(); virtual void slot048(); virtual void slot04C();
    virtual void slot050(); virtual void slot054(); virtual void slot058(); virtual void slot05C(); virtual void slot060(); virtual void slot064();
    virtual void slot068(); virtual void slot06C(); virtual void slot070(); virtual void slot074(); virtual void slot078(); virtual void slot07C();
    virtual void slot080(); virtual void slot084(); virtual void slot088(); virtual void slot08C(); virtual void slot090(); virtual void slot094();
    virtual void slot098(); virtual void slot09C(); virtual void slot0A0(); virtual void slot0A4(); virtual void slot0A8(); virtual void slot0AC();
    virtual void slot0B0(); virtual void slot0B4(); virtual void slot0B8(); virtual void slot0BC(); virtual void slot0C0(); virtual void slot0C4();
    virtual void slot0C8(); virtual void slot0CC(); virtual void slot0D0(); virtual void slot0D4(); virtual void slot0D8(); virtual void slot0DC();
    virtual void slot0E0(); virtual void slot0E4(); virtual void slot0E8(); virtual void slot0EC(); virtual void slot0F0(); virtual void slot0F4();
    virtual void slot0F8(); virtual void slot0FC(); virtual void slot100(); virtual void slot104();
    virtual void free(void *memory);   // 0x108
    virtual void slot10C(); virtual void slot110(); virtual void slot114(); virtual void slot118(); virtual void slot11C(); virtual void slot120();
    virtual void slot124(); virtual void slot128(); virtual void slot12C(); virtual void slot130(); virtual void slot134(); virtual void slot138();
    virtual void slot13C(); virtual void slot140(); virtual void slot144(); virtual void slot148(); virtual void slot14C(); virtual void slot150();
    virtual void slot154(); virtual void slot158(); virtual void slot15C(); virtual void slot160(); virtual void slot164(); virtual void slot168();
    virtual void slot16C(); virtual void slot170(); virtual void slot174(); virtual void slot178(); virtual void slot17C(); virtual void slot180();
    virtual void slot184(); virtual void slot188();
    virtual GcPool18C *target();   // 0x18C: an alias pool's pool
    unsigned char unknown04[0xC0 - 0x04];
    unsigned int flags;   // 0xC0 (an arena pool's)
};

extern "C" {
extern void *lbl_805621F0;   // the pool source for the frame buffers
extern Meta::igMetaObject *igAliasMemoryPool_meta;
extern Meta::igMetaObject *igArenaMemoryPool_meta;
bool fn_80068128(void *object, Meta::igMetaObject *meta);   // whether object is of a class
void fn_80084ACC(GcPool18C *pool, unsigned int flags);      // sets an arena pool's flags
void fn_80101424(GcVisualContext *self);
void fn_800EAF20(GcVisualContext *self);
void fn_800FC720(GcVisualContext *self);
void fn_800F6390(GcVisualContext *self);
void fn_800ECD50(GcVisualContext *self);
GcPool18C *fn_800E97B8(GcVisualContext *self);
void fn_800E96E0(GcVisualContext *self);

void igGamecubeVisualContext_virtual28(GcVisualContext *self)
{
    if (self->_inverseTranspose) {
        fn_80056378(self->_inverseTranspose);
        self->_inverseTranspose = 0;
    }
    fn_80101424(self);
    fn_800EAF20(self);
    fn_800FC720(self);
    fn_800F6390(self);
    fn_800ECD50(self);
    release(self->matrixStack0);
    release(self->matrixStack1);
    for (int i = 0; i < 8; i++) release(self->matrixStacks[i]);
    fn_80056378(self->matrixStacks);
    if (self->frameBuffer0) {
        GcPool18C *pool = static_cast<GcPool18C *>(poolFor(self, reinterpret_cast<char *>(&lbl_805621F0)));
        GcPool18C *arena = 0;
        bool flag4 = false;
        bool flag2 = false;
        if (fn_80068128(pool, igAliasMemoryPool_meta)) pool = pool->target();
        if (fn_80068128(pool, igArenaMemoryPool_meta)) {
            unsigned int flags = pool->flags;
            arena = pool;
            flag4 = (flags >> 2) & 1;
            flag2 = (flags >> 1) & 1;
            fn_80084ACC(pool, flags | 4);
            fn_80084ACC(pool, pool->flags & ~2);
        }
        static_cast<GcPool18C *>(poolFor(self, reinterpret_cast<char *>(&lbl_805621F0)))->free(self->frameBuffer0);
        static_cast<GcPool18C *>(poolFor(self, reinterpret_cast<char *>(&lbl_805621F0)))->free(self->frameBuffer1);
        if (arena) {
            fn_80084ACC(arena, flag4 ? arena->flags | 4 : arena->flags & ~4);
            fn_80084ACC(arena, flag2 ? arena->flags | 2 : arena->flags & ~2);
        }
    }
    if (self->unknown6D8) fn_800E97B8(self)->free(self->unknown6D8);
    fn_800E96E0(self);
}
}
