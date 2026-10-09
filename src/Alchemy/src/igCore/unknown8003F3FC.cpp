#include "unknown8003ED10.h"

extern "C" {
    void fn_8003ECAC(void *, Gap::igInt);
    void *fn_80068430(void *);
    Unknown8003ED10Storage *fn_800363B0(void *);
    void fn_80066E1C(void *);
    extern Gap::igUnsignedInt lbl_8055D7B0;
}

static inline Gap::igInt unknownCompare(const Gap::igUnsignedInt *a, const Gap::igUnsignedInt *b){
    while(*a && *b && *a == *b){ ++a; ++b; }
    if(*a < *b) return 1;
    if(*a > *b) return -1;
    return 0;
}

static inline Gap::igInt unknownLength(const Gap::igUnsignedInt *value){
    Gap::igInt count = 0;
    while(*value++) ++count;
    return count;
}

static inline void unknownRelease(Unknown8003ED10Storage *storage){
    if(storage){
        Gap::igUnsignedInt *word = reinterpret_cast<Gap::igUnsignedInt *>(reinterpret_cast<char *>(storage) + 4);
        --*word;
        if(!(reinterpret_cast<volatile Gap::igUnsignedInt *>(word)[0] & 0x7FFFFF)) fn_80066E1C(storage);
    }
}

static inline void unknownResize(Unknown8003ED10Storage *storage, Gap::igInt value){
    if(value >= 0){
        if(value <= storage->unknown0C) storage->unknown08 = value;
        else fn_80041660(storage, value, 4);
    }
}

extern "C" void igCallStackTable_virtual7C(Unknown8003ED10 *object, Gap::igInt value){
    fn_8003ECAC(object, value);
    if(value){
        if(!object->unknown14){
            void *allocation = fn_80068430(object);
            unknownRelease(object->unknown14);
            object->unknown14 = fn_800363B0(allocation);
        }
        if(value >= object->unknown14->unknown08) fn_8004155C(object->unknown14, value, 4);
        unknownResize(object->unknown14, value);
        Gap::igInt count = object->unknown14->unknown08;
        Gap::igUnsignedInt *elements = object->unknown14->unknown10;
        for(Gap::igInt i = 0; i < count; ++i) elements[i] = lbl_8055D7B0;
        Gap::igUnsignedInt *begin = object->unknown10->unknown10;
        Gap::igUnsignedInt *end = begin + object->unknown10->unknown08;
        Gap::igUnsignedInt *element = begin;
        while(element < end){
            if(!object->slot78(element, (reinterpret_cast<char *>(element) - reinterpret_cast<char *>(begin)) / 4)) return;
            element += unknownLength(element) + 1;
        }
    }else if(object->unknown14){
        unknownRelease(object->unknown14);
        object->unknown14 = 0;
    }
}
