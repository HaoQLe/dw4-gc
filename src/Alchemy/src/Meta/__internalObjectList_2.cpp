// __internalObjectList: Alchemy class registration (0x8002DD18..0x8002DDCC). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(__internalObjectList)
META_DECLARE(__internalNonRefCountedObjectList)

extern "C" {
void *__internalObjectList_parentMeta();
void *fn_8002DCE4();
void fn_8002DDD4();
}

#pragma push
#pragma auto_inline off
extern "C" {

META_ARK_REGISTER(__internalObjectList)

void __internalObjectList_register()
{
    meta_registerClass(0, &__internalObjectList_meta, __internalNonRefCountedObjectList_register,
                       __internalObjectList_parentMeta, __internalObjectList_getMetaCall,
                       __internalObjectList_className, 0x10,
                       fn_8002DCE4, fn_8002DDD4, 0, 0);
}

META_GET_META_CALL(__internalObjectList)

}
#pragma pop
