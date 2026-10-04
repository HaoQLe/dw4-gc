#include <igGap.h>

// Synthetic metadata views; unused virtual slots and field meanings are unknown.
struct Unknown80042824Result {
    int unknown00;
    Unknown80042824Result(const Unknown80042824Result&);
};
class Unknown80042824Value {
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
    virtual Unknown80042824Value *slot58();
    virtual void slot5C(void *);
    virtual void slot60(void *);
    virtual unsigned char slot64();
    unsigned int unknown04;
    unsigned int unknown08;
    void *unknown0C;
    void *unknown10;
    void *unknown14;
    Unknown80042824Value *unknown18;
};
struct Unknown80042824Storage {
    unsigned char unknown00[8];
    int unknown08;
    int unknown0C;
    Unknown80042824Value **unknown10;
};
class Unknown80042824Provider {
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
    virtual void slot5C();
    virtual Unknown80042824Result slot60();
    virtual unsigned char slot64();
};
struct Unknown80042824 {
    unsigned char unknown00[8];
    int unknown08;
    int unknown0C;
    Unknown80042824Value **unknown10;
    void *unknown14;
    Unknown80042824Storage *unknown18;
    void *unknown1C;
    void *unknown20;
    void *unknown24;
    void *unknown28;
    Unknown80042824Storage *unknown2C;
    unsigned char unknown30[0x14];
    Unknown80042824Provider *unknown44;
};
extern "C" {
    void fn_80070140(void *, void *);
    int fn_80043D38(void *);
    Unknown80042824Value *fn_80042FE4(void *, int);
    void fn_800667D4(void *);
    Unknown80042824Value *fn_80042B1C(Unknown80042824 *, int);
    Unknown80042824Value *fn_80069724(void *, void *);
    extern void *lbl_80561D10, *lbl_80561710, *lbl_805616E8;
    void fn_80066E1C(void *);
    unsigned char fn_80068128(void *, void *);
    int fn_80065D88(void *);
    Unknown80042824Value *fn_800658E4(void *, int);
    void fn_8006A47C(void *, void *, void *);
}
inline void unknown80042824Release(Unknown80042824Value *value){
    if(value){
        --value->unknown04;
        if(!(reinterpret_cast<volatile unsigned int *>(value)[1] & 0x7FFFFF)) fn_80066E1C(value);
    }
}
struct Unknown80042824Reference {
    Unknown80042824Value *value;
    inline Unknown80042824Reference(Unknown80042824Value *p) : value(p){ if(value) ++value->unknown04; }
    inline ~Unknown80042824Reference(){ unknown80042824Release(value); }
};
inline void unknown80042824Set(Unknown80042824Storage *storage, int index, Unknown80042824Value *value){
    if(storage->unknown08 != 0 && index >= 0 && index < storage->unknown08) storage->unknown10[index] = value;
}
inline Unknown80042824Value *unknown80042824Cast(Unknown80042824Value *value, void *const &metadata){
    if(value && fn_80068128(value, metadata)) return value;
    return NULL;
}
#pragma push
#pragma auto_inline off
extern "C" Unknown80042824Value *fn_800429F4(Unknown80042824 *object, int index){ return fn_80042B1C(object, index); }
extern "C" Unknown80042824Value *fn_80042A14(Unknown80042824 *object, int index){
    if(object->unknown2C) return object->unknown2C->unknown10[index];
    return object->unknown10[index]->unknown18;
}
extern "C" void fn_80042A44(Unknown80042824 *object, int index, Unknown80042824Value *value){
    if(object->unknown2C && object->unknown28){
        // Capture the entry before the virtual call can modify the array.
        struct { Unknown80042824Value *entry; } state;
        object->unknown10[index]->slot5C((state.entry = object->unknown10[index], value));
        state.entry->slot60(value);
        unknown80042824Set(object->unknown2C, index, value);
    }else object->unknown10[index]->slot5C(value);
}
extern "C" Unknown80042824Value *fn_80042B1C(Unknown80042824 *object, int index){
    if(object->unknown2C){
        Unknown80042824Value *entry = object->unknown10[index];
        entry->slot5C(fn_80042A14(object, index));
        entry->unknown0C = reinterpret_cast<void *>(index);
        return entry;
    }
    return object->unknown10[index];
}
extern "C" int fn_80042B98(Unknown80042824 *object, Unknown80042824Value *volatile &oldValue, Unknown80042824Value *volatile &newValue){
    int changes = 0;
    for(int index = 0; index < object->unknown08; ++index){
        Unknown80042824Value *current = fn_80042A14(object, index);
        Unknown80042824Value *old = oldValue;
        if(current == old){
            if(object->unknown2C){
                unknown80042824Release(old);
                Unknown80042824Value *next = newValue;
                if(next) ++next->unknown04;
                unknown80042824Set(object->unknown2C, index, newValue);
            }else object->unknown10[index]->slot5C(newValue);
            ++changes;
        }
        Unknown80042824Value *entry = unknown80042824Cast(fn_80042B1C(object, index), lbl_80561710);
        if(entry){
            Unknown80042824Reference reference(entry->unknown18);
            if(!reference.value) continue;
            int count = fn_80065D88(reference.value->slot58());
            for(int field = 0; field < count; ++field){
                Unknown80042824Value *metadata = unknown80042824Cast(fn_800658E4(reference.value->slot58(), field), lbl_805616E8);
                if(metadata){
                    Unknown80042824Value *value = *reinterpret_cast<Unknown80042824Value **>(reinterpret_cast<unsigned char *>(reference.value) + metadata->unknown08);
                    if(value == oldValue){
                        fn_8006A47C(metadata, reference.value, newValue);
                        ++changes;
                    }
                }
            }
        }
    }
    return changes;
}
#pragma pop
