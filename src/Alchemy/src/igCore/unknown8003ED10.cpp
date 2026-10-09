#include "unknown8003ED10.h"

static inline void unknownResize(Unknown8003ED10Storage *storage, Gap::igInt value){
    if(value >= 0){
        if(value <= storage->unknown0C) storage->unknown08 = value;
        else fn_80041660(storage, value, 4);
    }
}

extern "C" void fn_8003ED10(Unknown8003ED10 *object){
    unknownResize(object->unknown10, 0);
    if(object->unknown10->unknown08 <= 0) fn_8004155C(object->unknown10, 0, 4);
    unknownResize(object->unknown14, 0);
    if(object->unknown14){
        unknownResize(object->unknown14, 0);
        if(object->unknown14->unknown08 <= 0) fn_8004155C(object->unknown14, 0, 4);
    }
}

extern "C" void fn_8003EDF0(Unknown8003ED10 *object){ object->slot60(0); }

extern "C" Gap::igInt igCallStackTable_virtual5C(Unknown8003ED10 *object){
    Gap::igInt result = 0;
    Gap::igInt count = object->unknown10->unknown08;
    Gap::igUnsignedInt *value = object->unknown10->unknown10;
    for(Gap::igInt i = 0; i < count; ++i, ++value){
        if(!*value) ++result;
    }
    return result;
}

extern "C" Unknown8003ED10Result igCallStackTable_virtual60(Unknown8003ED10 *object, Gap::igInt value){
    Unknown8003ED10Storage *storage = object->unknown10;
    Gap::igUnsignedInt *element = storage->unknown10;
    Gap::igInt count = storage->unknown08;
    Gap::igInt i;
    Gap::igInt found = 0;
    if(!value){
        unknownResize(storage, 0);
        return kSuccess__3Gap;
    }
    for(i = 0; i < count; ++i){
        if(!*element){
            if(++found == value){
                unknownResize(storage, i + 1);
                return kSuccess__3Gap;
            }
        }
    }
    return kFailure__3Gap;
}

extern "C" Gap::igUnsignedInt *igCallStackTable_virtual64(Unknown8003ED10 *object, Gap::igInt index){
    if(index < 0 || index >= object->unknown10->unknown08 || !object->unknown10->unknown10) return 0;
    Gap::igUnsignedInt *value = object->unknown10->unknown10 + index;
    if(index > 0 && value[-1]) return 0;
    return value;
}
