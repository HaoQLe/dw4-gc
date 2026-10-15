// igParameterSetList: Alchemy class registration (0x801390C8..0x80139228). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igParameterSetList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igParameterSetList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804AA360[];
}

struct Instance_80139104_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igParameterSetList)

void *igParameterSetList_vtableRead()
{
    Instance_80139104_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804AA360;
    object.__vtable = igParameterSetList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igParameterSetList)

void igParameterSetList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igParameterSetList_meta, igObjectList_register,
                       fn_80024180, igParameterSetList_getMetaCall,
                       igParameterSetList_className, 0x14,
                       igParameterSetList_vtableRead, 0, 0, igParameterSetList_dependencies);
}

META_GET_META_CALL(igParameterSetList)

}
#pragma pop
