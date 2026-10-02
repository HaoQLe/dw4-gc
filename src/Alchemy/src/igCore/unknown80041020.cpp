#include <igGap.h>
#include <igCore/igStringPoolItem.h>

// Synthetic metadata/storage views; field meanings and unused slots are unknown.
struct Unknown80041020Metadata {
    unsigned char unknown00[4];
    Gap::igUnsignedInt unknown04;
    unsigned char unknown08[0x14];
    const char *unknown1C;
};
struct Unknown80041020String {
    const char *unknown00;
    inline bool isPooled() const { return unknown00 != NULL; }
    inline Gap::Core::igStringPoolItemId getId() const { return reinterpret_cast<Gap::Core::igStringPoolItemId>(unknown00 - sizeof(Gap::Core::igStringPoolItem)); }
    inline void release() const { if(isPooled()) getId()->release(); }
};
struct Unknown80041020Entry {
    unsigned char unknown00[4];
    Gap::igUnsignedInt unknown04;
    Unknown80041020Metadata *unknown08;
    Unknown80041020String unknown0C;
    Gap::igInt unknown10;
};
struct Unknown80041020Storage {
    unsigned char unknown00[4];
    Gap::igUnsignedInt unknown04;
    Gap::igInt unknown08;
    unsigned char unknown0C[4];
    Unknown80041020Entry **unknown10;
};
class Unknown80041020 {
public:
    virtual void slot08();
    virtual void slot0C();
    virtual void slot10();
    virtual void slot14();
    virtual void slot18();
    virtual void slot1C();
    virtual void slot20();
    virtual void slot24();
    virtual void slot28();
    virtual void slot2C();
    virtual void slot30();
    virtual void slot34();
    virtual void slot38();
    virtual void slot3C();
    virtual void slot40();
    virtual void slot44();
    virtual void slot48();
    virtual void slot4C();
    virtual void slot50();
    virtual void slot54();
    virtual void slot58();
    unsigned char unknown04[4];
    Unknown80041020Storage *unknown08;
    Gap::igInt unknown0C;
};

extern "C" {
    void *fn_80068430(void *);
    Unknown80041020Storage *fn_80037020(void *);
    Unknown80041020Entry *fn_800371F4(void *);
    void fn_80066E1C(void *);
    Unknown80041020Metadata *fn_80065D60(const void *);
    Gap::igInt fn_80065CE0(Unknown80041020Metadata *);
    Unknown80041020Metadata *fn_80065C34(Unknown80041020Metadata *, Gap::igInt);
    void fn_8004155C(Unknown80041020Storage *, Gap::igInt, Gap::igInt);
    void fn_800691E8(Unknown80041020Storage *, Gap::igInt);
    void *fn_80054140(Gap::igUnsignedInt);
    void *fn_80053F28(void *);
    const char *fn_80054094(void *, const char *);
    int strcmp(const char *, const char *);
    extern void *lbl_80562140, *lbl_80561E00;
    extern unsigned char lbl_804676E4[];
}

inline void unknown80041020Retain(void *value){
    if(value) ++reinterpret_cast<Gap::igUnsignedInt *>(value)[1];
}
inline void unknown80041020ReleaseValue(void *value){
    --reinterpret_cast<Gap::igUnsignedInt *>(value)[1];
    if(!(reinterpret_cast<volatile Gap::igUnsignedInt *>(value)[1] & 0x7FFFFF)) fn_80066E1C(value);
}
inline void unknown80041020Release(void *value){
    if(value) unknown80041020ReleaseValue(value);
}
inline const char *unknown80041020Acquire(const char *text){
    if(!lbl_80562140){
        void *storage = fn_80054140(0x10);
        if(storage) storage = fn_80053F28(storage);
        lbl_80562140 = storage;
    }
    return fn_80054094(lbl_80562140, text);
}

extern "C" void fn_80041020(Unknown80041020 *){}
extern "C" unsigned char fn_80041024(Unknown80041020 *){ return 1; }

#pragma push
#pragma auto_inline off
extern "C" void fn_8004102C(Unknown80041020 *object){
    if(!object->unknown08){
        Unknown80041020Storage *storage = fn_80037020(fn_80068430(object));
        unknown80041020Retain(storage);
        unknown80041020Release(object->unknown08);
        object->unknown08 = storage;
        unknown80041020ReleaseValue(object->unknown08);
        object->slot58();
        Unknown80041020Metadata *metadata = fn_80065D60(lbl_804676E4);
        object->unknown0C = fn_80065CE0(metadata) - 1;
        if(object->unknown0C >= object->unknown08->unknown08) fn_8004155C(object->unknown08, object->unknown0C, 4);
        fn_800691E8(object->unknown08, object->unknown0C);
        for(Gap::igInt index = 0; index < object->unknown0C; ++index){
            Unknown80041020Metadata *element = fn_80065C34(metadata, index + 1);
            Unknown80041020Entry *entry = fn_800371F4(fn_80068430(object));
            unknown80041020Retain(element);
            unknown80041020Release(entry->unknown08);
            entry->unknown08 = element;
            const char *text = unknown80041020Acquire(element->unknown1C);
            entry->unknown0C.release();
            entry->unknown0C.unknown00 = text;
            entry->unknown10 = 0;
            storage = object->unknown08;
            unknown80041020Retain(entry);
            unknown80041020Release(storage->unknown10[index]);
            if(storage->unknown08 && index >= 0 && index < storage->unknown08) storage->unknown10[index] = entry;
            unknown80041020ReleaseValue(entry);
        }
    }
}
extern "C" void *fn_800412A0(){ return lbl_80561E00; }
extern "C" Unknown80041020Storage *fn_800412A8(Unknown80041020 *object){
    if(!object->unknown08) fn_8004102C(object);
    if(object->unknown0C < 1) return NULL;
    return object->unknown08;
}
extern "C" Unknown80041020Metadata *fn_800412F8(Unknown80041020 *object, const char *text){
    Gap::igInt index;
    unsigned char searching;
    Unknown80041020Entry *entry;
    entry = NULL;
    if(!object->unknown08) fn_8004102C(object);
    if(object->unknown0C < 1) return NULL;
    index = 0;
    searching = 1;
    while(index < object->unknown0C && searching){
        Unknown80041020Entry *candidate = object->unknown08->unknown10[index];
        const char *name = candidate->unknown0C.unknown00;
        entry = candidate;
        if(strcmp(name, text) == 0) searching = 0;
        else ++index;
    }
    if(searching == 1) return NULL;
    return entry->unknown08;
}
#pragma pop
