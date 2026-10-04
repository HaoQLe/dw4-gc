#include <igGap.h>

// Synthetic reference/storage views; semantic types remain unknown.
struct Unknown80041E40Value {
    void *unknown00;
    unsigned int unknown04;
};
struct Unknown80041E40Storage {
    void *unknown00;
    unsigned int unknown04;
    int unknown08;
    int unknown0C;
    Unknown80041E40Value **unknown10;
};
struct Unknown80041E40Pair {
    Unknown80041E40Value *unknown00;
    Unknown80041E40Value *unknown04;
};
struct Unknown80041E40 {
    unsigned char unknown00[8];
    Unknown80041E40Storage *unknown08;
    Unknown80041E40Storage *unknown0C;
    Unknown80041E40Storage *unknown10;
    void *unknown14;
    unsigned char unknown18;
};
extern "C" {
    void fn_80041660(void *, int, int);
    void fn_80041A44(void *, int, int, const void *);
    void fn_80041AF8(void *, int, const void *);
    void fn_80041C10(void *, int);
    void fn_80041810(void *, int, int);
    void fn_80066E1C(void *);
    void *fn_80068430(void *);
    Unknown80041E40Storage *fn_80028F4C(void *);
    Unknown80041E40Storage *fn_800346F0(void *);
    void fn_80069184(void *, void *);
    void fn_80069128(void *, Unknown80041E40Value *);
    void fn_800694EC(void *, Unknown80041E40Value *);
    int fn_80094190(void *, const void *);
    void fn_80042134(Unknown80041E40 *);
    void fn_80042010(Unknown80041E40 *);
}
inline void unknown80041E40Release(void *value){
    if(value){
        unsigned int *word = reinterpret_cast<unsigned int *>(value) + 1;
        --*word;
        if(!(reinterpret_cast<volatile unsigned int *>(word)[0] & 0x7FFFFF)) fn_80066E1C(value);
    }
}
inline int unknown80041E40Find(Unknown80041E40Storage *source, Unknown80041E40Value *const &value){
    struct { int index; Unknown80041E40Storage *storage; } state;
    state.storage = source;
    for(state.index = 0; state.index < state.storage->unknown08; ++state.index){
        if(value == state.storage->unknown10[state.index]) return state.index;
    }
    return -1;
}
extern "C" void fn_80041E40(Unknown80041E40 *object, Unknown80041E40Value *value, unsigned char unique){
    Unknown80041E40Value *entry; Unknown80041E40Storage *storage; Unknown80041E40Storage *order; int orderIndex; int index;
    order = object->unknown10;
    int position = unknown80041E40Find(order, value);
    if(position < 0){
        if(unique) fn_800694EC(object->unknown08, value);
        else fn_80069128(object->unknown08, value);
        return;
    }
    storage = object->unknown08;
    orderIndex = 0;
    for(index = 0; index < reinterpret_cast<volatile Unknown80041E40Storage *>(storage)->unknown08; ++index){
        entry = storage->unknown10[index];
        if(unique && entry == value) return;
        while(orderIndex < position && entry != order->unknown10[orderIndex]) ++orderIndex;
        if(orderIndex >= position){
            Unknown80041E40Value *copy = value;
            Unknown80041E40Storage *destination = object->unknown08;
            if(value) ++value->unknown04;
            fn_80041A44(destination, index, 1, &copy);
            return;
        }
    }
    fn_80069128(storage, value);
}
extern "C" void fn_80041F84(Unknown80041E40 *object, Unknown80041E40Value *first, Unknown80041E40Value *second){
    int previous;
    Unknown80041E40Storage *storage = object->unknown0C;
    previous = storage->unknown08;
    if(previous < storage->unknown0C) storage->unknown08 = previous + 1;
    else fn_80041660(storage, previous + 1, 8);
    Unknown80041E40Pair *entry = reinterpret_cast<Unknown80041E40Pair *>(storage->unknown10) + previous;
    entry->unknown00 = first;
    entry->unknown04 = second;
    fn_80042134(object);
    fn_80042010(object);
}
inline void unknown80041E40Clear(Unknown80041E40Storage *storage, Unknown80041E40Value *value){
    int count = storage->unknown08;
    for(int index = 0; index < count; ++index) storage->unknown10[index] = value;
}
inline void unknown80041E40ReleaseContents(Unknown80041E40Storage *storage, int start){
    struct { int index; int count; } state;
    state.index = start;
    state.count = storage->unknown08;
    for(; state.index < state.count; ++state.index) unknown80041E40Release(storage->unknown10[state.index]);
}
extern "C" void fn_80042010(Unknown80041E40 *object){
    struct { Unknown80041E40Storage *value; } reference;
    reference.value = fn_80028F4C(fn_80068430(object));
    fn_80069184(reference.value, object->unknown08);
    Unknown80041E40Storage *storage = object->unknown08;
    unknown80041E40ReleaseContents(storage, 0);
    unknown80041E40Clear(storage, NULL);
    storage->unknown08 = 0;
    Unknown80041E40Storage *previous = reinterpret_cast<Unknown80041E40Storage *volatile *>(&reference.value)[0];
    for(int index = 0; index < previous->unknown08; ++index) fn_80041E40(object, previous->unknown10[index], 0);
    unknown80041E40Release(previous);
}
