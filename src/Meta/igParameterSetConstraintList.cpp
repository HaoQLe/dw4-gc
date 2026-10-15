// igParameterSetConstraintList: Alchemy class registration (0x80138D9C..0x80138F34). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igParameterSetConstraintList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igParameterSetConstraintList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804AA428[];
}

struct Instance_80138E10_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igParameterSetConstraintList)

META_GET_META(igParameterSetConstraintList)

void *igParameterSetConstraintList_vtableRead()
{
    Instance_80138E10_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804AA428;
    object.__vtable = igParameterSetConstraintList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igParameterSetConstraintList)

void igParameterSetConstraintList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igParameterSetConstraintList_meta, igObjectList_register,
                       fn_80024180, igParameterSetConstraintList_getMetaCall,
                       igParameterSetConstraintList_className, 0x14,
                       igParameterSetConstraintList_vtableRead, 0, 0, igParameterSetConstraintList_dependencies);
}

META_GET_META_CALL(igParameterSetConstraintList)

}
#pragma pop
