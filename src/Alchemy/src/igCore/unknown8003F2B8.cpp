#include "unknown8003ED10.h"

extern "C" Gap::igInt igCallStackTable_virtual74(Unknown8003ED10 *object, const Gap::igUnsignedInt *value){
    Unknown8003ED10Storage *storage;
    Gap::igUnsignedInt sum;
    Gap::igInt count;
    sum = 0;
    storage = object->unknown14;
    if(storage) count = storage->unknown08;
    else count = 0;
    if(value && storage && count){
        while(*value) sum += *value++;
        return sum % count;
    }
    return 0;
}
