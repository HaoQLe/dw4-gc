#include "unknown8003ED10.h"
extern "C" Gap::igBool fn_8003F320(Unknown8003ED10 *object, const Gap::igUnsignedInt *value, Gap::igInt offset){
    long count;
    Gap::igInt tried = 0;
    count = object->unknown14->unknown08;
    long limit = count / 2;
    if(count){
        Gap::igInt index = object->slot74(value);
        Unknown8003ED10Storage *storage = object->unknown14;
        Gap::igInt byteOffset;
        do{
            Gap::igUnsignedInt * const &elements = static_cast<Gap::igUnsignedInt *>(reinterpret_cast<Gap::igUnsignedInt *volatile *>(&storage->unknown10)[0]);
            if(static_cast<Gap::igInt>(*reinterpret_cast<Gap::igUnsignedInt *>(reinterpret_cast<char *>(elements) + (byteOffset = index * 4))) == -1){
                if(storage->unknown08 && index >= 0 && index < storage->unknown08)
                    *reinterpret_cast<Gap::igUnsignedInt *>(reinterpret_cast<char *>(elements) + byteOffset) = offset;
                goto done;
            }
            if(++index >= count) index = 0;
        }while(++tried < limit);
        object->slot7C(count * 2);
        return 0;
    }
done:
    return 1;
}
