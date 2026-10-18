// Virtual calls on Alchemy objects, as the game code makes them (the first vtable slot is at +0x08).
#ifndef GAME_VIRTUAL_H
#define GAME_VIRTUAL_H
#include <meta/igObject.h>
#include <meta/igMetaObject.h>

// Declaration-only view of igObject's virtual functions; nothing is defined, so no vtable is emitted.
class igObjectVirtuals {
public:
    virtual void slot08(); virtual void slot0C(); virtual void slot10(); virtual void slot14();
    virtual void slot18(); virtual void slot1C(); virtual void slot20(); virtual void slot24();
    virtual void slot28(); virtual void slot2C(); virtual void slot30(); virtual void slot34();
    virtual void slot38(); virtual void slot3C(); virtual void slot40(); virtual void slot44();
    virtual void slot48(); virtual void slot4C(); virtual void slot50(); virtual void slot54();
    virtual Meta::igMetaObject *getMeta();   // 0x58
};

// The metaobject of an object's class.
static inline Meta::igMetaObject *metaOf(Meta::igObject *object)
{
    return reinterpret_cast<igObjectVirtuals *>(object)->getMeta();
}

#endif
