// igStringObjList: Alchemy class registration (0x80024F28..0x80024FB4). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igStringObjList)
META_DECLARE(igObjectList)

extern "C" {
void fn_80021B94();
void *fn_80024180();
extern char igStringObjList_dependencies[8];
}

#pragma push
#pragma auto_inline off
extern "C" {

void igStringObjList_register()
{
    fn_80021B94();
    meta_registerClass(0, &igStringObjList_meta, igObjectList_register,
                       fn_80024180, igStringObjList_getMetaCall,
                       igStringObjList_className, 0x14,
                       igStringObjList_vtableRead, 0, 0, igStringObjList_dependencies);
}

META_GET_META_CALL(igStringObjList)

}
#pragma pop
