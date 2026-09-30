#include "unknown8003ED10.h"

extern "C" void fn_80041AF8(void *, Gap::igInt, const Gap::igUnsignedInt *);

static inline void unknownReserve(Unknown8003ED10Storage *storage, Gap::igInt value){
    if(value >= reinterpret_cast<volatile Gap::igInt *>(&storage->unknown08)[0]) fn_8004155C(storage, value, 4);
}

extern "C" Gap::igInt fn_8003EF94(Unknown8003ED10 *object, const Gap::igUnsignedInt *value){
    Gap::igInt previous;
    const Gap::igUnsignedInt *element = value;
    Gap::igInt count = 0;
    while(*element++) ++count;
    Gap::igInt length = count + 1;
    previous = object->unknown10->unknown08;
    if(length + previous > object->unknown10->unknown0C){
        Gap::igInt capacity = object->unknown10->unknown0C * 2;
        unknownReserve(object->unknown10, capacity);
    }
    fn_80041AF8(object->unknown10, length, value);
    if(object->unknown14 && object->unknown14->unknown08)
        object->slot78(object->unknown10->unknown10 + previous, previous);
    return previous;
}
