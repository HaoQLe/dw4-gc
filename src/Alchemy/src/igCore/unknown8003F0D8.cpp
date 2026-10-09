#include "unknown8003ED10.h"

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

extern "C" Gap::igInt igCallStackTable_virtual70(Unknown8003ED10 *object, const Gap::igUnsignedInt *value){
    if(object->unknown14 && object->unknown14->unknown08){
        Gap::igInt index = object->slot74(value);
        struct State {
            Unknown8003ED10Storage *storage;
            Gap::igInt count;
        } state;
        Gap::igInt offset;
        Gap::igInt tried;
        state.storage = object->unknown14;
        tried = 0;
        state.count = object->unknown14->unknown08;
        do{
            offset = reinterpret_cast<Gap::igUnsignedInt *volatile *>(&state.storage->unknown10)[0][index];
            if(offset == -1) return -1;
            if(!unknownCompare(object->unknown10->unknown10 + offset, value)) return offset;
            if(++index >= state.count) index = 0;
        }while(++tried < state.count);
        return -1;
    }
    Gap::igUnsignedInt *begin = object->unknown10->unknown10;
    Gap::igUnsignedInt *element = begin;
    Gap::igUnsignedInt *end = begin + object->unknown10->unknown08;
    while(element < end){
        if(!unknownCompare(value, element))
            return (reinterpret_cast<char *>(element) - reinterpret_cast<char *>(begin)) / 4;
        element += unknownLength(element) + 1;
    }
    return -1;
}
