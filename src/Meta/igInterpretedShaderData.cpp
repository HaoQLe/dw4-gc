// igInterpretedShaderData: Alchemy class registration (0x801BE048..0x801BE31C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igInterpretedShaderData)
META_DECLARE(igShaderData)
META_DECLARE(igTransientShaderData)

extern "C" {
void fn_801AA6DC();
extern char igInterpretedShaderData_dependencies[12];
void *igInterpretedShaderData_parentMeta();
}

struct igShaderDataInstance : igObjectInstance {
    char unknown04[4];
    igObjectRefMember _attrPushLists;
    igObjectRefMember _attrPopLists;
    igObjectRefMember _dataPumps;
    igObjectRefMember _childLists;
    inline ~igShaderDataInstance() { __vtable = igShaderData_vtable; }
};

struct igTransientShaderDataInstance : igShaderDataInstance {
    inline ~igTransientShaderDataInstance() { __vtable = igTransientShaderData_vtable; }
};

struct igInterpretedShaderDataInstance : igTransientShaderDataInstance {
    igObjectRefMember _factory;
    igObjectRefMember _objectMappings;
    inline ~igInterpretedShaderDataInstance() { __vtable = igInterpretedShaderData_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igInterpretedShaderData)

void *igInterpretedShaderData_vtableRead()
{
    igInterpretedShaderDataInstance object;
    object.__vtable = igShaderData_vtable;
    object._attrPushLists._value = 0;
    object._attrPopLists._value = 0;
    object._dataPumps._value = 0;
    object._childLists._value = 0;
    object.__vtable = igTransientShaderData_vtable;
    object.__vtable = igInterpretedShaderData_vtable;
    object._factory._value = 0;
    object._objectMappings._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igInterpretedShaderData)

void igInterpretedShaderData_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igInterpretedShaderData_meta, igTransientShaderData_register,
                       igInterpretedShaderData_parentMeta, igInterpretedShaderData_getMetaCall,
                       igInterpretedShaderData_className, 0x20,
                       igInterpretedShaderData_vtableRead, igInterpretedShaderData_fieldInit, 0, igInterpretedShaderData_dependencies);
}

META_GET_META_CALL(igInterpretedShaderData)

}
#pragma pop
