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
struct Unknown80041E40Reference {
    Unknown80041E40Storage *value;
    inline Unknown80041E40Reference(Unknown80041E40Storage *p) : value(p) {}
    inline ~Unknown80041E40Reference(){ unknown80041E40Release(value); }
};
inline int unknown80041E40Find(Unknown80041E40Storage *source, Unknown80041E40Value *const &value){
    struct { int index; Unknown80041E40Storage *storage; } state;
    state.storage = source;
    for(state.index = 0; state.index < state.storage->unknown08; ++state.index){
        if(value == state.storage->unknown10[state.index]) return state.index;
    }
    return -1;
}
inline int unknown80041E40Search(Unknown80041E40Storage *storage, Unknown80041E40Value *const &value){
    int low = 0;
    int high = storage->unknown08 - 1;
    while(low < high){
        int middle = (low + high) >> 1;
        if(storage->unknown10[middle] < value) low = middle + 1;
        else if(storage->unknown10[middle] > value) high = middle - 1;
        else return middle;
    }
    if(storage->unknown08 == 0) return -1;
    if(value < storage->unknown10[low] || value > storage->unknown10[low]) return -1;
    return low;
}
inline void unknown80041E40Insert(Unknown80041E40Storage *storage, Unknown80041E40Value *const &value){
    int position = fn_80094190(storage, &value);
    if(position == storage->unknown08 || storage->unknown10[position] != value)
        fn_80041A44(storage, position, 1, &value);
}
inline void unknown80041E40Append(Unknown80041E40Storage *storage, Unknown80041E40Value *const &value){
    int previous = storage->unknown08;
    if(previous < storage->unknown0C) storage->unknown08 = previous + 1;
    else fn_80041660(storage, previous + 1, 4);
    storage->unknown10[previous] = value;
}
extern "C" void fn_80042134(Unknown80041E40 *receiver){
    struct { Unknown80041E40 *object; int count; Unknown80041E40Pair *pairs; } state;
    Unknown80041E40Storage *tail;
    state.object = receiver;
    state.object->unknown18 = 0;
    state.object->unknown10->unknown08 = 0;
    Unknown80041E40Reference remaining(fn_800346F0(fn_80068430(state.object)));
    state.count = state.object->unknown0C->unknown08;
    state.pairs = reinterpret_cast<Unknown80041E40Pair *>(state.object->unknown0C->unknown10);
    Unknown80041E40Value **second;
    Unknown80041E40Pair *pair;
    {
        int index;
        for(index = 0; index < state.count; ++index){
            pair = state.pairs + index;
            unknown80041E40Insert(remaining.value, pair->unknown00);
            second = &pair->unknown04;
            Unknown80041E40Storage *storage = remaining.value;
            int position = fn_80094190(storage, second);
            if(position == storage->unknown08 || storage->unknown10[position] != pair->unknown04)
                fn_80041A44(storage, position, 1, second);
        }
    }
    Unknown80041E40Reference ready(fn_800346F0(fn_80068430(state.object)));
    Unknown80041E40Storage *const &pending = static_cast<Unknown80041E40Storage *>(remaining.value);
    while(pending->unknown08 > 0){
        ready.value->unknown08 = 0;
        fn_80041AF8(ready.value, pending->unknown08, pending->unknown10);
        {
            int index;
            for(index = 0; index < state.count; ++index){
                Unknown80041E40Pair *pair = state.pairs + index;
                if(unknown80041E40Find(state.object->unknown10, pair->unknown00) < 0){
                    int position = unknown80041E40Find(ready.value, pair->unknown04);
                    if(position >= 0) fn_80041C10(ready.value, position);
                }
            }
        }
        if(ready.value->unknown08 == 0){
            state.object->unknown18 = 1;
            unknown80041E40Append(ready.value, remaining.value->unknown10[0]);
        }
        {
            int index;
            for(index = 0; index < (tail = ready.value)->unknown08; ++index){
                int position = unknown80041E40Search(pending, tail->unknown10[index]);
                if(position >= 0) fn_80041C10(pending, position);
            }
        }
        fn_80041AF8(state.object->unknown10, tail->unknown08, tail->unknown10);
    }
}
