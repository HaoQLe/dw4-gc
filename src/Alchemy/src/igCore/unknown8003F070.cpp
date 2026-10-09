#include "unknown8003ED10.h"

extern "C" Gap::igInt igCallStackTable_virtual6C(Unknown8003ED10 *object, const Gap::igUnsignedInt *value){
    Gap::igInt result = object->slot70(value);
    if(result != -1) return result;
    return object->slot68(value);
}
