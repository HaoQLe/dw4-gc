// igNodeUsageObjectDefinitionList: Alchemy class registration (0x80130CE4..0x80130E7C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igNodeUsageObjectDefinitionList)
META_DECLARE(igDataList)
META_DECLARE(igObjectList)

extern "C" {
void *fn_80024180();
void fn_8012FC48();
extern char igNodeUsageObjectDefinitionList_dependencies[8];
extern char lbl_80476E0C[];
extern char lbl_804AAC5C[];
}

struct Instance_80130D58_0 {
    void *__vtable;
    char unknown04[20];
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igNodeUsageObjectDefinitionList)

META_GET_META(igNodeUsageObjectDefinitionList)

void *igNodeUsageObjectDefinitionList_vtableRead()
{
    Instance_80130D58_0 object;
    igObject_construct(&object);
    object.__vtable = igDataList_vtable;
    object.__vtable = lbl_80476E0C;
    object.__vtable = igObjectList_vtable;
    object.__vtable = lbl_804AAC5C;
    object.__vtable = igNodeUsageObjectDefinitionList_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igNodeUsageObjectDefinitionList)

void igNodeUsageObjectDefinitionList_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igNodeUsageObjectDefinitionList_meta, igObjectList_register,
                       fn_80024180, igNodeUsageObjectDefinitionList_getMetaCall,
                       igNodeUsageObjectDefinitionList_className, 0x14,
                       igNodeUsageObjectDefinitionList_vtableRead, 0, 0, igNodeUsageObjectDefinitionList_dependencies);
}

META_GET_META_CALL(igNodeUsageObjectDefinitionList)

}
#pragma pop
