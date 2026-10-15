// igIterateAttr: Alchemy class registration (0x801448BC..0x80144B4C). Written by tools/alchemymeta/metasrc.py.
#include <meta/register.h>

META_DECLARE(igIterateAttr)
META_DECLARE(igIterateGraph)

extern "C" {
void fn_8012FC48();
extern char igIterateAttr_dependencies[12];
void *igIterateAttr_parentMeta();
extern char lbl_804A9C44[];
}

struct igIterateGraphInstance : igObjectInstance {
    char unknown04[8];
    igObjectRefMember _currentPath;
    igObjectRefMember _currentIndices;
    inline ~igIterateGraphInstance() { __vtable = igIterateGraph_vtable; }
};

struct igIterateAttrInstance : igIterateGraphInstance {
    igObjectRefMember _types;
    igObjectRefMember _attributes;
    char unknown1C[12];
    inline ~igIterateAttrInstance() { __vtable = igIterateAttr_vtable; }
};

#pragma push
#pragma auto_inline off
extern "C" {

META_CREATE(igIterateAttr)

META_GET_META(igIterateAttr)

void *igIterateAttr_vtableRead()
{
    igIterateAttrInstance object;
    object.__vtable = lbl_804A9C44;
    object.__vtable = igIterateGraph_vtable;
    object._currentPath._value = 0;
    object._currentIndices._value = 0;
    object.__vtable = igIterateAttr_vtable;
    object._types._value = 0;
    object._attributes._value = 0;
    return meta_vtableOf(&object);
}

META_ARK_REGISTER(igIterateAttr)

void igIterateAttr_register()
{
    fn_8012FC48();
    meta_registerClass(0, &igIterateAttr_meta, igIterateGraph_register,
                       igIterateAttr_parentMeta, igIterateAttr_getMetaCall,
                       igIterateAttr_className, 0x1C,
                       igIterateAttr_vtableRead, igIterateAttr_fieldInit, 0, igIterateAttr_dependencies);
}

META_GET_META_CALL(igIterateAttr)

}
#pragma pop
