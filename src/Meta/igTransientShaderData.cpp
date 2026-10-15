// igTransientShaderData: Alchemy class registration (0x801AACF4..0x801AAF38). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igTransientShaderData)
META_DECLARE(igShaderData)

extern "C" {
void fn_801AA6DC();
void fn_801AAF40();
extern char igTransientShaderData_dependencies[16];
void *igTransientShaderData_parentMeta();
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

#pragma push
#pragma auto_inline off
extern "C" {

META_GET_META(igTransientShaderData)

void *igTransientShaderData_vtableRead()
{
    igTransientShaderDataInstance object;
    object.__vtable = igShaderData_vtable;
    object._attrPushLists._value = 0;
    object._attrPopLists._value = 0;
    object._dataPumps._value = 0;
    object._childLists._value = 0;
    object.__vtable = igTransientShaderData_vtable;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igTransientShaderData)

void igTransientShaderData_register()
{
    fn_801AA6DC();
    meta_registerClass(0, &igTransientShaderData_meta, igShaderData_register,
                       igTransientShaderData_parentMeta, igTransientShaderData_getMetaCall,
                       igTransientShaderData_className, 0x18,
                       igTransientShaderData_vtableRead, fn_801AAF40, 0, igTransientShaderData_dependencies);
}

META_GET_META_CALL(igTransientShaderData)

}
#pragma pop
